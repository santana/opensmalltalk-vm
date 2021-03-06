#!/bin/bash
set -e

source ./.travis_helpers.sh

if [[ "${APPVEYOR}" ]]; then
    TRAVIS_BUILD_DIR="$(pwd)"
    TRAVIS_TAG="${APPVEYOR_REPO_TAG}"
    PLATFORM="windows"

    # Appveyor's GCC is pretty new, patch the Makefiles and replace the tools to
    # make it work

    echo
    echo "Using gcc $(i686-w64-mingw32-gcc --version)"
    echo "Using 64-bit gcc $(x86_64-w64-mingw32-gcc --version)"
    echo
    test -d /usr/i686-w64-mingw32/sys-root/mingw/lib || echo "No lib dir"
    test -d /usr/i686-w64-mingw32/sys-root/mingw/include || echo "No inc dir"
else
    PLATFORM="${TRAVIS_OS_NAME}"
fi

[[ -z "${ARCH}" ]] && exit 2
[[ -z "${FLAVOR}" ]] && exit 3

if [[ "${ARCH}" == "linux32ARM"* ]]; then
    # we're in  chroot at this point
    export LC_ALL=C
    export LC_CTYPE=C
    export LANG=C
    export LANGUAGE=C
    TRAVIS_BUILD_DIR="$(pwd)"
fi

echo "`cat platforms/Cross/vm/sqSCCSVersion.h | .git_filters/RevDateURL.smudge`" > platforms/Cross/vm/sqSCCSVersion.h
echo "`cat platforms/Cross/plugins/sqPluginsSCCSVersion.h | .git_filters/RevDateURL.smudge`" > platforms/Cross/plugins/sqPluginsSCCSVersion.h

REV=$(grep -m1 "SvnRawRevisionString" platforms/Cross/vm/sqSCCSVersion.h | sed 's/[^0-9.]*\([0-9.]*\).*/\1/')

# echo $PATH

output_file="${TRAVIS_BUILD_DIR}/cog_${ARCH}_${FLAVOR}_${REV}"

export COGVREV="$(git describe --tags --always)"
export COGVDATE="$(git show -s --format=%cd HEAD)"
export COGVURL="$(git config --get remote.origin.url)"
export COGVOPTS="-DCOGVREV=\"${COGVREV}\" -DCOGVDATE=\"${COGVDATE// /_}\" -DCOGVURL=\"${COGVURL//\//\\\/}\""

build_linux_in() {
    local build_dir=$1
    local fold_name=$2

    pushd "${build_dir}"
    travis_fold start "${fold_name}" "Building OpenSmalltalk VM in ${build_dir}..."
    echo n | bash -e ./mvm
    travis_fold end "${fold_name}"
    # cat config.log
    popd
}

tar_linux_product() {
    local file_path=$1
    pushd "./products"
    tar czf "${file_path}.tar.gz" "./"
    popd
}

build_linux() {
    build_directory="./build.${ARCH}/${FLAVOR}/build"
    [[ ! -d "${build_directory}" ]] && exit 10

    build_linux_in "${build_directory}" "build_vm"
    tar_linux_product "${output_file}"

    # Also build VM with itimerheartbeat if available
    if [[ ! -d "${build_directory}.itimerheartbeat" ]]; then
        return
    fi

    rm -rf "./products" # Clear products directory

    build_linux_in "${build_directory}.itimerheartbeat" "build_itimer_vm"
    tar_linux_product "${output_file}_itimer"
}

build_osx() {
    build_directory="./build.${ARCH}/${FLAVOR}"

    [[ ! -d "${build_directory}" ]] && exit 50

    pushd "${build_directory}"

    travis_fold start build_vm "Building OpenSmalltalk VM..."
    bash -e ./mvm -f
    travis_fold end build_vm

    tar cvzf "${output_file}.tar.gz" ./*.app
    popd
}

build_windows() {
    build_directory="./build.${ARCH}/${FLAVOR}/"

    [[ ! -d "${build_directory}" ]] && exit 100

    pushd "${build_directory}"
    # remove bochs plugins
    sed -i 's/Bochs.* //g' plugins.ext
    bash -e ./mvm -f || exit 1
    zip -r "${output_file}.zip" "./builddbg/vm/" "./buildast/vm/" "./build/vm/"
    popd
}

if [[ ! $(type -t build_$PLATFORM) ]]; then
    echo "Unsupported platform '$(uname -s)'." 1>&2
    exit 99
fi

build_$PLATFORM
