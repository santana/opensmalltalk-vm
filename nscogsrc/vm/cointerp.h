/* Automatically generated by
	CCodeGeneratorGlobalStructure VMMaker.oscog-eem.844 uuid: 4ea8ab78-c8f6-4cf2-a165-23eb85dd66aa
 */


/*** Function Prototypes ***/


#if !PRODUCTION && defined(__GNUC__) && !defined(NoDbgRegParms)
# define NoDbgRegParms __attribute__ ((regparm (0)))
#endif

#if !defined(NoDbgRegParms)
# define NoDbgRegParms /*empty*/
#endif



#if defined(__GNUC__) && !defined(NeverInline)
# define NeverInline __attribute__ ((noinline))
#endif

#if !defined(NeverInline)
# define NeverInline /*empty*/
#endif

usqInt argumentCountAddress(void);
void assertValidMachineCodeFrame(sqInt instrPtr);
void callForCogCompiledCodeCompaction(void);
void ceActivateFailingPrimitiveMethod(sqInt aPrimitiveMethod);
sqInt ceActiveContext(void);
sqInt ceBaseFrameReturn(sqInt returnValue);
sqInt ceCannotResume(void);
void ceCheckForInterrupts(void);
void ceCheckProfileTick(void);
sqInt ceContextinstVar(sqInt maybeContext, sqInt slotIndex);
sqInt ceContextinstVarvalue(sqInt maybeMarriedContext, sqInt slotIndex, sqInt anOop);
sqInt ceDynamicSuperSendtonumArgs(sqInt selector, sqInt rcvr, sqInt numArgs);
sqInt ceExplicitReceiverAt(sqInt level);
sqInt ceInterpretMethodFromPICreceiver(sqInt aMethodObj, sqInt rcvr);
sqInt ceMNUFromPICMNUMethodreceiver(sqInt aMethodObj, sqInt rcvr);
sqInt ceNewArraySlotSize(sqInt slotSize);
sqInt ceNonLocalReturn(sqInt returnValue);
sqInt ceReturnToInterpreter(sqInt anOop);
sqInt ceSendAborttonumArgs(sqInt selector, sqInt rcvr, sqInt numArgs);
sqInt ceSendFromInLineCacheMiss(CogMethod *cogMethodOrPIC);
sqInt ceSendMustBeBoolean(sqInt anObject);
sqInt ceSendsupertonumArgs(sqInt selector, sqInt superNormalBar, sqInt rcvr, sqInt numArgs);
void ceStackOverflow(sqInt contextSwitchIfNotNil);
void ceTraceBlockActivation(void);
void ceTraceLinkedSend(sqInt theReceiver);
void ceTraceStoreOfinto(sqInt aValue, sqInt anObject);
void checkAssertsEnabledInCoInterpreter(void);
void clearTraceLog(void);
CogMethod * cogMethodOf(sqInt aMethodOop);
void compilationBreakpointFor(sqInt selectorOop);
sqInt createClosureNumArgsnumCopiedstartpc(sqInt numArgs, sqInt numCopied, sqInt initialIP);
void dumpPrimTraceLog(void);
void dumpTraceLog(void);
void executeCogMethodfromLinkedSendWithReceiver(CogMethod *cogMethod, sqInt rcvr);
void executeCogMethodfromLinkedSendWithReceiverandCacheTag(CogMethod *cogMethod, sqInt rcvr, sqInt cacheTag);
sqInt flushExternalPrimitiveOf(sqInt methodObj);
usqInt framePointerAddress(void);
void (*functionPointerForCompiledMethodprimitiveIndex(sqInt methodObj, sqInt primIndex))(void) ;
sqInt getCheckAllocFiller(void);
sqInt headerOf(sqInt methodPointer);
void ifValidWriteBackStackPointersSaveTo(void *theCFP, void *theCSP, char **savedFPP, char **savedSPP);
sqInt implicitReceiverFormixinimplementing(sqInt rcvr, sqInt mixin, sqInt selector);
usqInt instructionPointerAddress(void);
usqInt interpretAddress(void);
sqInt isCogMethodReference(sqInt methodHeader);
sqInt lookupreceiver(sqInt selector, sqInt rcvr);
void markActiveMethodsAndReferents(void);
sqInt maxLookupNoMNUErrorCode(void);
void * methodCacheAddress(void);
sqInt methodHasCogMethod(sqInt aMethodOop);
sqInt methodNeedsLargeContext(sqInt methodObj);
sqInt methodShouldBeCogged(sqInt aMethodObj);
CogMethod * mframeHomeMethodExport(void);
CogMethod * mframeHomeMethod(char *theFP);
sqInt mMethodClass(void);
usqInt newMethodAddress(void);
usqInt nextProfileTickAddress(void);
sqInt noAssertHeaderOf(sqInt methodPointer);
sqInt positive32BitIntegerFor(sqInt integerValue);
sqInt primErrTable(void);
usqInt primFailCodeAddress(void);
usqInt primitiveFailAddress(void);
sqInt primitivePropertyFlags(sqInt primIndex);
void * primTraceLogAddress(void);
usqInt primTraceLogIndexAddress(void);
void printCogMethod(CogMethod *cogMethod);
void printFrameWithSP(char *theFP, char *theSP);
void printMethodCacheFor(sqInt thing);
sqInt quickPrimitiveConstantFor(sqInt aQuickPrimitiveIndex);
int (*quickPrimitiveGeneratorFor(sqInt aQuickPrimitiveIndex))(void) ;
sqInt quickPrimitiveInstVarIndexFor(sqInt primIndex);
sqInt rawHeaderOf(sqInt methodPointer);
void rawHeaderOfput(sqInt methodOop, sqInt cogMethodOrMethodHeader);
void reportMinimumUnusedHeadroom(void);
sqInt specialSelectorNumArgs(sqInt index);
usqInt stackLimitAddress(void);
usqInt stackPointerAddress(void);
sqInt startPCOfMethodHeader(sqInt aCompiledMethodHeader);
sqInt startPCOrNilOfLiteralin(sqInt lit, sqInt aMethodObj);
void updateStackZoneReferencesToCompiledCodePreCompaction(void);
char * whereIs(sqInt anOop);
usqInt primitiveFunctionPointerAddress(void);
char * cStringOrNullFor(sqInt oop);
sqInt failed(void);
void primitiveClosureValueNoContextSwitch(void);
sqInt primitiveFail(void);
sqInt primitiveFailFor(sqInt reasonCode);
sqInt primitiveFailureCode(void);
sqInt signalNoResume(sqInt aSemaphore);
usqInt sizeOfAlienData(sqInt oop);
void * startOfAlienData(sqInt oop);
sqInt ceStoreCheck(sqInt anOop);
usqInt freeStartAddress(void);
sqInt isReallyYoungObject(sqInt obj);
sqInt noShiftCompactClassIndexOf(sqInt oop);
sqInt nullHeaderForMachineCodeMethod(void);
usqInt scavengeThresholdAddress(void);
sqInt withoutForwardingOnandsendToCogit(sqInt obj1, sqInt obj2, sqInt (*selector)(sqInt,sqInt));
sqInt withoutForwardingOnandwithsendToCogit(sqInt obj1, sqInt obj2, sqInt aBool, sqInt (*selector)(sqInt,sqInt,sqInt));
usqInt youngStartAddress(void);
sqInt addressCouldBeObj(sqInt address);
sqInt characterValueOf(sqInt oop);
sqInt checkOkayOop(usqInt oop);
sqInt classFloatCompactIndex(void);
sqInt eeInstantiateClassIndexformatnumSlots(sqInt compactClassIndex, sqInt objFormat, sqInt numSlots);
sqInt eeInstantiateClassindexableSize(sqInt classPointer, sqInt size);
void findStringBeginningWith(char *aCString);
void findString(char *aCString);
sqInt isYoungObject(sqInt obj);
sqInt lastPointerOf(sqInt oop);
sqInt leakCheckBecome(void);
sqInt leakCheckFullGC(void);
sqInt leakCheckIncrementalGC(void);
sqInt leakCheckNewSpaceGC(void);
void longPrintReferencesTo(sqInt anOop);
sqInt objectAfter(sqInt oop);
void pinObject(sqInt objOop);
void printObjectsFromto(sqInt startAddress, sqInt endAddress);
void printReferencesTo(sqInt anOop);
void printWronglySizedContexts(sqInt printContexts);
void unpinObject(sqInt objOop);
sqInt addressCouldBeOop(sqInt address);
sqInt arrayFormat(void);
void beRootIfOld(sqInt oop);
sqInt byteSizeOf(sqInt oop);
sqInt byteSwapped(sqInt w);
sqInt characterObjectOf(sqInt characterCode);
sqInt characterTable(void);
sqInt checkedLongAt(sqInt byteAddress);
sqInt checkOopHasOkayClass(usqInt obj);
sqInt classArray(void);
sqInt classFloat(void);
sqInt classHeader(sqInt oop);
sqInt classSmallInteger(void);
sqInt compactClassAt(sqInt ccIndex);
sqInt compactClassIndexOfClass(sqInt classObj);
sqInt compactClassIndexOfHeader(sqInt header);
sqInt compactClassIndexOf(sqInt oop);
sqInt falseObject(void);
sqInt fetchByteofObject(sqInt byteIndex, sqInt oop);
sqInt fetchPointerofObject(sqInt fieldIndex, sqInt oop);
sqInt firstByteFormat(void);
sqInt firstCompiledMethodFormat(void);
sqInt firstLongFormat(void);
sqInt formatOfClass(sqInt classPointer);
sqInt indexablePointersFormat(void);
sqInt instanceSizeOf(sqInt classObj);
sqInt instantiateClassindexableSize(sqInt classPointer, sqInt size);
sqInt isArrayNonImm(sqInt oop);
sqInt isCharacterValue(sqInt anInteger);
sqInt isCompiledMethod(sqInt oop);
sqInt isImmediate(sqInt anOop);
sqInt isIntegerValue(sqInt intValue);
sqInt isMarked(sqInt oop);
sqInt isNonIntegerObject(sqInt objectPointer);
sqInt isOopCompiledMethod(sqInt oop);
sqInt isOopImmutable(sqInt anOop);
sqInt isOopMutable(sqInt anOop);
sqInt isPinned(sqInt objOop);
sqInt isYoung(sqInt oop);
sqInt lengthOf(sqInt oop);
void longPrintInstancesOf(sqInt aClassOop);
sqInt markAndTrace(sqInt oop);
sqInt maybeSplObj(sqInt index);
sqInt nilObject(void);
sqInt noShiftCompactClassIndexOfHeader(sqInt header);
sqInt numBytesOf(sqInt objOop);
sqInt numSlotsOf(sqInt obj);
sqInt objectBefore(sqInt address);
sqInt objectExactlyBefore(sqInt oop);
sqInt popRemappableOop(void);
sqInt primitiveErrorTable(void);
void printInstancesOf(sqInt aClassOop);
void printMethodReferencesTo(sqInt anOop);
void pushRemappableOop(sqInt oop);
sqInt remap(sqInt oop);
sqInt shouldRemapObj(sqInt oop);
sqInt shouldRemapOop(sqInt oop);
sqInt splObj(sqInt index);
sqInt storePointerUncheckedofObjectwithValue(sqInt fieldIndex, sqInt oop, sqInt valuePointer);
sqInt stringForCString(const char *aCString);
void tenuringIncrementalGC(void);
sqInt topRemappableOop(void);
sqInt trueObject(void);
sqInt weakArrayFormat(void);
sqInt activeProcess(void);
sqInt argumentCountOfClosure(sqInt closurePointer);
sqInt argumentCountOfMethodHeader(sqInt header);
sqInt argumentCountOf(sqInt methodPointer);
sqInt canContextSwitchIfActivatingheader(sqInt theMethod, sqInt methodHeader);
sqInt checkAllAccessibleObjectsOkay(void);
sqInt checkOkayInterpreterObjects(sqInt writeBack);
sqInt copiedValueCountOfClosure(sqInt closurePointer);
sqInt doSignalSemaphoreWithIndex(sqInt index);
sqInt followLiteralofMethod(sqInt offset, sqInt methodPointer);
void (*functionPointerForinClass(sqInt primIdx,sqInt theClass))(void) ;
usqLong getNextWakeupUsecs(void);
sqInt * getStackPointer(void);
sqInt headerIndicatesAlternateBytecodeSet(sqInt methodHeader);
sqInt highBit(usqInt anUnsignedValue);
sqInt initialPCForHeadermethod(sqInt methodHeader, sqInt theMethod);
sqInt isQuickPrimitiveIndex(sqInt anInteger);
sqInt isReadMediatedContextInstVarIndex(sqInt index);
sqInt isWriteMediatedContextInstVarIndex(sqInt index);
sqInt isKindOfClass(sqInt oop, sqInt aClass);
sqInt literalCountOfHeader(sqInt headerPointer);
sqInt literalofMethod(sqInt offset, sqInt methodPointer);
void longPrintOop(sqInt oop);
sqInt longStoreBytecodeForHeader(sqInt methodHeader);
sqInt methodClassAssociationOf(sqInt methodPointer);
sqInt methodClassOf(sqInt methodPointer);
sqInt methodPrimitiveIndex(void);
sqInt methodUsesAlternateBytecodeSet(sqInt aMethodObj);
sqInt penultimateLiteralOf(sqInt aMethodOop);
sqInt popStack(void);
sqInt primitiveIndexOfMethodheader(sqInt theMethod, sqInt methodHeader);
sqInt primitiveIndexOf(sqInt methodPointer);
void printAllStacks(void);
sqInt printCallStackOf(sqInt aContextOrProcessOrFrame);
void printChar(sqInt aByte);
void printHex(sqInt n);
void printLikelyImplementorsOfSelector(sqInt selector);
void printMethodCache(void);
void printMethodDictionaryOf(sqInt behavior);
void printMethodDictionary(sqInt dictionary);
void printProcessStack(sqInt aProcess);
sqInt printProcsOnList(sqInt procList);
sqInt printStackCallStackOf(char *aFramePointer);
void print(char *s);
void setBreakSelector(char *aString);
void setNextWakeupUsecs(usqLong value);
void shortPrintFrameAndNCallers(char *theFP, sqInt n);
sqInt sizeOfCallPrimitiveBytecode(sqInt methodHeader);
sqInt sizeOfLongStoreTempBytecode(sqInt methodHeader);
sqInt specialSelector(sqInt index);
unsigned long stackPositiveMachineIntegerValue(sqInt offset);
long stackSignedMachineIntegerValue(sqInt offset);
sqInt stackTop(void);
sqInt stackValue(sqInt offset);
sqInt startPCOfMethod(sqInt aCompiledMethod);
sqInt tempCountOf(sqInt methodPointer);
sqInt temporaryCountOfMethodHeader(sqInt header);


/*** Global Variables ***/
char * breakSelector;
sqInt breakSelectorLength ;
sqInt checkAllocFiller;
sqInt checkForLeaks;
sqInt deferDisplayUpdates;
sqInt desiredCogCodeSize;
sqInt desiredEdenBytes;
sqInt desiredNumStackPages;
sqInt extraVMMemory;
usqInt heapBase;
sqInt inIOProcessEvents;
struct VirtualMachine* interpreterProxy;
sqInt maxLiteralCountForCompile ;
sqInt minBackwardJumpCountForCompile ;
volatile int sendTrace;
void * showSurfaceFn;
sqInt suppressHeartbeatFlag;


/*** Macros ***/
#define compilationBreakpoint(sel, len) do { \
	if ((len) == breakSelectorLength \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, breakSelectorLength)) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define classFieldOffset() (0 - BaseHeaderSize)
#define compactClassFieldWidth() 5
#define instFormatFieldLSB() 8
#define instFormatFieldWidth() 4
#define compactClassFieldLSB() 12
#define isForwarded(oop) false

