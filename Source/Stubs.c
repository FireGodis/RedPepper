#define STUB(SYMBOL)                                       \
    extern __attribute__((section("stubs"))) void SYMBOL() \
    {                                                      \
        __nop();                                           \
        __nop();                                           \
        __nop();                                           \
    } // filled with nops so linker doesnt nop out bl calls to stub functions

STUB(_ZnajRKSt9nothrow_t)
STUB(_ZnwjRKSt9nothrow_t)
STUB(_ZdlPv)

STUB(__cxa_pure_virtual)

STUB(_ZN16alByamlLocalUtil11verifiByamlEPKh)
STUB(_ZNK2al13ByamlHashIter12getDataByKeyEPNS_9ByamlDataEi)
STUB(_ZNK2al9ByamlIter10isExistKeyEPKc)
STUB(_ZNK2al9ByamlIter17tryGetIterByIndexEPS0_i)
STUB(_ZNK2al9ByamlIter15tryGetIterByKeyEPS0_PKc)
STUB(_ZNK2al9ByamlIter17tryGetStringByKeyEPPKcS2_)

STUB(_ZnajPN4sead4HeapEi)
STUB(_ZN4sead9IDisposerD1Ev)
STUB(_ZN4sead9IDisposerC1EPNS_4HeapENS0_14HeapNullOptionE)

STUB(_ZN2al20findOrCreateResourceERKN4sead14SafeStringBaseIcEE)
STUB(_ZNK2al8Resource7getBymlERKN4sead14SafeStringBaseIcEE)

STUB(_ZN15SceneObjFactory20createSceneObjHolderEv)

STUB(_ZN2al11AudioKeeper6updateEv)

STUB(LMSi_MemCmp)
STUB(LMSi_AnalyzeMessageBinary)

STUB(_ZN2al9LiveActor17makeActorAppearedEv)
STUB(_ZN2al9LiveActor13makeActorDeadEv)
STUB(_ZN2al9LiveActor8movementEv)
STUB(_ZN2al9LiveActor12startClippedEv)
STUB(_ZN2al9LiveActor10endClippedEv)
STUB(_ZNK2al9LiveActor10getBaseMtxEv)
STUB(_ZN2al9LiveActor17calcAndSetBaseMtxEv)
STUB(_ZN2al9LiveActor14updateColliderEv)
STUB(_ZN2al9LiveActor3v22Ev)
STUB(_ZN2al9LiveActor3v23Ev)

STUB(_ZTVN10__cxxabiv117__class_type_infoE) // why
STUB(_ZTVN10__cxxabiv120__si_class_type_infoE)

STUB(FUN_0027a1a0)
STUB(FUN_0027cf20)

STUB(_ZN2al15IUseAudioKeeper2v1Ev)
STUB(_ZN2al15IUseAudioKeeper2v2Ev)
STUB(_ZN2al15IUseAudioKeeper2v4Ev)
STUB(_ZN2al15IUseAudioKeeper2v5Ev)

STUB(_ZN2al11getLanguageEv)

STUB(_ZN4sead22BufferedSafeStringBaseIcE6formatEPKcz)
STUB(FUN_002911e8)

STUB(_ZN2al19ActorPoseKeeperBase2v1Ev)
STUB(_ZN2al19ActorPoseKeeperTFSV16updatePoseRotateERKN4sead7Vector3IfEE)
STUB(_ZN2al19ActorPoseKeeperTFSV14updatePoseQuatERKN4sead4QuatIfEE)
STUB(_ZN2al19ActorPoseKeeperTFSV13updatePoseMtxEPKN4sead8Matrix34IfEE)
STUB(_ZN2al19ActorPoseKeeperTFSV11calcBaseMtxEPN4sead8Matrix34IfEE)
STUB(_ZN2al20ActorPoseKeeperTFGSV11calcBaseMtxEPN4sead8Matrix34IfEE)
STUB(_ZN2al19ActorPoseKeeperTQSV16updatePoseRotateERKN4sead7Vector3IfEE)
STUB(_ZN2al19ActorPoseKeeperTQSV14updatePoseQuatERKN4sead4QuatIfEE)
STUB(_ZN2al19ActorPoseKeeperTQSV13updatePoseMtxEPKN4sead8Matrix34IfEE)
STUB(_ZN2al19ActorPoseKeeperTQSV11calcBaseMtxEPN4sead8Matrix34IfEE)
STUB(_ZN2al19ActorPoseKeeperTRSV16updatePoseRotateERKN4sead7Vector3IfEE)
STUB(_ZN2al19ActorPoseKeeperTRSV14updatePoseQuatERKN4sead4QuatIfEE)
STUB(_ZN2al19ActorPoseKeeperTRSV13updatePoseMtxEPKN4sead8Matrix34IfEE)
STUB(_ZN2al19ActorPoseKeeperTRSV11calcBaseMtxEPN4sead8Matrix34IfEE)

STUB(_ZN4sead22BufferedSafeStringBaseIcE7formatVEPKcSt9__va_list)

STUB(_ZN2al10FileLoader11loadArchiveERKN4sead14SafeStringBaseIcEEPNS1_10FileDeviceE)

STUB(nninitRegion)
STUB(nninitLocale)
STUB(nninitSystem)
STUB(nninitStartUp)
STUB(nninitCallStaticInitializers)
STUB(nninitSetup)

STUB(_ZN2nn3srv6detail7Service16GetServiceHandleEPNS_6HandleEPKcij)

STUB(FUN_0010073c)
STUB(_ZN2nn3ndm16SuspendSchedulerEb)
STUB(_ZN11Application3runEv)
STUB(_ZN11Application4initEv)
STUB(_ZN19ApplicationFunction10initializeEv)
STUB(_ZN2nn3cfg3CTR10InitializeEv)

STUB(_ZN17WalkerStateWanderC1EPN2al9LiveActorEPN4sead7Vector3IfEEPK16WalkerStateParamPK22WalkerStateWanderParam)
STUB(_ZN18EnemyStateBlowDownC1EPN2al9LiveActorEP23EnemyStateBlowDownParamPKci)
STUB(_ZN21WalkerStateChaseParamC1EbbfffffPKcS1_)
STUB(_ZN22WalkerStateWanderParamC1EiifffPKcS1_)
STUB(_ZN2al14initNerveStateEPNS_9IUseNerveEPNS_14NerveStateBaseEPKNS_5NerveEPKc)

STUB(FUN_00258774)
STUB(_ZN2al11startActionEPNS_9LiveActorEPKc)
STUB(_ZN2al11isActionEndEPKNS_9LiveActorE)

STUB(FUN_00279158)
STUB(FUN_00262988)
STUB(FUN_00272a9c)

STUB(FUN_0026b6cc)
STUB(FUN_00259758)

STUB(_ZN2al8SequenceC1EPKc)
STUB(_ZN2al8Sequence4unk6Ev)
STUB(_ZN2al8Sequence6updateEv)

STUB(_ZN15ProductSequence6updateEv)
STUB(_ZNK15ProductSequence12isDisposableEv)
STUB(FUN_0025ba7c)

STUB(_ZN19StageStartParamBase3gapEv)
STUB(_ZN19StageStartParamBase4gap2Ev)
STUB(_ZN19StageStartParamBase7getUnk5Ev)
STUB(_ZN22ProductStageStartParam6getUnkEv)
STUB(_ZN22ProductStageStartParam7getUnk2Ev)
STUB(_ZN22ProductStageStartParam7getUnk3Ev)
STUB(_ZN22ProductStageStartParam7getUnk4Ev)

STUB(FUN_0025ddd0)

STUB(_ZN15ProductSequence13exeMysteryBoxEv)
STUB(_ZN15ProductSequence15exeCourseSelectEv)
STUB(_ZN15ProductSequence15exeGameOverRoomEv)
STUB(_ZN15ProductSequence7exeUnk1Ev)
STUB(_ZN15ProductSequence8exeStageEv)

STUB(_ZN2al11LayoutActor8calcAnimEv)
STUB(_ZN2al11LayoutActor8movementEv)

STUB(_ZN2al12EffectKeeper23deleteAndClearEffectAllEv)

STUB(_ZN2al11LayoutActor4unk1Ev)
STUB(_ZN2al11LayoutActor4unk2Ev)

STUB(_ZN19WindowConfirmSingleC1EPKcRKN2al14LayoutInitInfoE)
STUB(_ZN19WindowConfirmButtonC1EPKcRKN2al14LayoutInitInfoE)
STUB(_ZN17ProductStateTitle7exeLoadEv)

STUB(_ZN4sead13ControllerMgr9sInstanceE)
STUB(FUN_0024edd8)
STUB(_ZN2al12isPadReleaseEii)
STUB(_ZN2al9isPadHoldEii)

STUB(_ZN2al12getCameraPosEv)
STUB(_ZN2al21initStageSwitchAppearEPNS_15IUseStageSwitchERKNS_13ActorInitInfoE)
STUB(_ZN2al24trySyncStageSwitchAppearEPNS_9LiveActorE)

STUB(FUN_00270fc4)
STUB(_ZN2al39initActorWithArchiveNameNoPlacementInfoEPNS_9LiveActorERKNS_13ActorInitInfoERKN4sead14SafeStringBaseIcEEPKc)
STUB(FUN_0026c70c)
STUB(_ZN2al20addVelocityToGravityEPNS_9LiveActorEf)
STUB(_ZN2al20rotateQuatYDirDegreeEPNS_9LiveActorERKN4sead4QuatIfEEf)

STUB(FUN_00277de0)
STUB(_ZN11CoinRotater8movementEv)

STUB(_ZN2al4Rail10calcPosDirEPN4sead7Vector3IfEES4_f)
STUB(_ZNK2al4Rail15normalizeLengthEf)

STUB(_ZN2al4Rail4initERKNS_9ByamlIterE)

STUB(_ZN2al17ActorActionKeeper20tryStartActionNoAnimEPKc)

STUB(_ZN16NoteObjGenerator12exeDisappearEv)
STUB(_ZN16NoteObjGenerator7exeMoveEv)
STUB(FUN_001d581c)

STUB(_ZN2al11isOnSwitchAEPNS_15IUseStageSwitchE)
STUB(_ZN2al9showModelEPNS_9LiveActorE)

STUB(_ZN16WalkerStateChase8exeStartEv)
STUB(_ZN7NoteObj10receiveMsgEjPN2al9HitSensorES2_)

STUB(_ZN2al16SaveDataDirectorC1Eji)
STUB(_ZN2al10FileLoaderC1Ei)

STUB(_ZNK2al9AreaShape12calcLocalPosEPN4sead7Vector3IfEERKS3_)
STUB(_ZN2al7AreaObj4initERKNS_12AreaInitInfoE)

STUB(_ZN2al10tryGetArg0EPiRKNS_9ByamlIterE)
STUB(_ZN2al17initMapPartsActorEPNS_9LiveActorERKNS_13ActorInitInfoE)
STUB(_ZN2al14tryStartActionEPNS_9LiveActorEPKc)
STUB(_ZN2al13scaleVelocityEPNS_9LiveActorEf)
STUB(FUN_00268df8)
STUB(_ZN2al13resetPositionEPNS_9LiveActorE)
STUB(_ZN2al32invalidateCollisionPartsBySystemEPNS_9LiveActorE)
STUB(_ZN2al30validateCollisionPartsBySystemEPNS_9LiveActorE)

STUB(_ZN2al19ActorPoseKeeperBase8copyPoseEPKS0_)

STUB(_ZN2al14isExistArchiveERKN4sead14SafeStringBaseIcEE)
STUB(_ZN2al10makeMtxSRTEPN4sead8Matrix34IfEEPKNS_9LiveActorE)
STUB(_ZN2al21initActorEffectKeeperEPNS_9LiveActorERKNS_13ActorInitInfoEPKc)
STUB(_ZN2al10emitEffectEPNS_16IUseEffectKeeperEPKcPKN4sead7Vector3IfEE)
STUB(_ZN2al13tryEmitEffectEPNS_16IUseEffectKeeperEPKc)
STUB(_ZN2al10tryStartSeEPNS_15IUseAudioKeeperERKN4sead14SafeStringBaseIcEEi)
STUB(_ZN4sead8Matrix34IfEC1ERKS1_)

STUB(_ZN2al9tryGetArgEPfRKNS_9ByamlIterEPKc)
STUB(_ZN2al9tryGetArgEPiRKNS_9ByamlIterEPKc)
STUB(_ZN2al12moveSyncRailEPNS_9LiveActorEf)
STUB(_ZN2al16moveSyncRailLoopEPNS_9LiveActorEf)
STUB(_ZN2al16moveSyncRailTurnEPNS_9LiveActorEf)

STUB(_ZN2al4Rail23calcNearestRailPosCoordERKN4sead7Vector3IfEEf)

STUB(_ZN2al16AnimPlayerSimple9startAnimEPKc)
STUB(_ZNK2al16AnimPlayerSimple11isAnimExistEPKc)

STUB(_ZN2al10isCollidedEPKNS_9LiveActorE)

STUB(_ZN2al11preScaleMtxEPN4sead8Matrix34IfEERKNS0_7Vector3IfEE)
STUB(_ZN2al12EffectKeeper6updateEv)
STUB(_ZN2al16syncCollisionMtxEPNS_9LiveActorEPKN4sead8Matrix34IfEE)
STUB(_ZN2al21setBaseMtxAndCalcAnimEPNS_9LiveActorERKN4sead8Matrix34IfEERKNS2_7Vector3IfEE)
STUB(_ZN2al11isActionEndEPKNS_11LayoutActorE)
STUB(_ZN2al11startActionEPNS_11LayoutActorERKN4sead14SafeStringBaseIcEE)
STUB(_ZN2al15initLayoutActorEPNS_11LayoutActorERKNS_14LayoutInitInfoEPKcS6_)
STUB(_ZN2al17getActionFrameMaxEPKNS_11LayoutActorE)
STUB(_ZN2al18setActionFrameRateEPNS_11LayoutActorEf)

STUB(_ZN2al18SwitchAreaDirector4unk1Ev)
STUB(_ZN2al17SwitchOnAreaGroup6updateERKN4sead7Vector3IfEE)
STUB(_ZN2al21SwitchKeepOnAreaGroup6updateERKN4sead7Vector3IfEE)

STUB(_ZN2al19ClippingActorHolder16validateClippingEPNS_9LiveActorE)
STUB(_ZN2al19ClippingActorHolder18invalidateClippingEPNS_9LiveActorE)
STUB(_ZN2al14SensorHitGroupC1EiPKc)
STUB(_ZN2al9isInStackEPKv)

STUB(_ZN4sead7ExpHeap6createEjRKNS_14SafeStringBaseIcEEPNS_4HeapENS5_13HeapDirectionEb)

STUB(_ZN2al22trySyncStageSwitchKillEPNS_9LiveActorE)
STUB(_ZN2al19initStageSwitchKillEPNS_15IUseStageSwitchERKNS_13ActorInitInfoE)

STUB(_ZN2al14getJointMtxPtrEPNS_11ModelKeeperEPKc)

STUB(_ZN21alActorSystemFunction22removeFromExecutorDrawEPN2al9LiveActorE)
STUB(_ZN2al10hideShadowEPNS_9LiveActorE)
STUB(_ZN2al11ModelKeeper4hideEv)

STUB(FUN_0027b51c)
STUB(FUN_0027ee34)
STUB(_ZN2al10tryGetArg0EPfRKNS_13ActorInitInfoE)

STUB(FUN_0027b704)
STUB(FUN_0027b768)
STUB(FUN_002cd428)
STUB(FUN_00240e08)
STUB(_ZNK2al4Rail14getTotalLengthEv)

STUB(FUN_002278CC)
STUB(FUN_0026A9B8)
STUB(FUN_0026AA60)
STUB(FUN_002786F4)
STUB(_ZN2al16startHitReactionEPKNS_9LiveActorEPKc)

STUB(_ZN2al20ExecuteRequestKeeperC1Ej)
STUB(_ZN2al22ExecuteTableHolderDraw4initEPKcPKNS_12ExecuteOrderEi)
STUB(_ZN2al24ExecuteTableHolderUpdate4initEPKNS_12ExecuteOrderEi)
STUB(_ZN2al22ExecuteTableHolderDraw23createExecutorListTableEv)
STUB(_ZN2al24ExecuteTableHolderUpdate23createExecutorListTableEv)
STUB(FUN_001cc9b0)
STUB(_ZN2al11FogDirector7endInitEv)
STUB(_ZN2al12EffectSystem10startSceneEv)
STUB(_ZN2al16ClippingDirector7endInitEv)
STUB(_ZN2al17CollisionDirector7endInitEv)
STUB(FUN_001e8a64)
STUB(FUN_00240350)

STUB(_ZN14PlayerInitFunc12getModelInfoEv)
STUB(_ZN14PlayerInitFunc11getAnimInfoEv)
STUB(_ZN14PlayerInitFunc12FUN_00260620Ev)
STUB(_ZN19PlayerAnimFrameCtrlC1Ev)

STUB(_ZN2rp28requestHitReactionToAttackerEjPKN2al9HitSensorES3_)
STUB(_ZN2al27isSensorPlayerOrEnemyAttackEPKNS_9HitSensorE)

STUB(_ZN2al24ExecuteTableHolderUpdate15tryRegisterUserEPNS_12IUseExecutorEPKc)
STUB(_ZN2al22ExecuteTableHolderDraw15tryRegisterUserEPNS_12IUseExecutorEPKc)
STUB(_ZN2al24ExecuteTableHolderUpdate18tryRegisterFunctorERKNS_11FunctorBaseEPKc)
STUB(_ZN2al22ExecuteTableHolderDraw18tryRegisterFunctorERKNS_11FunctorBaseEPKc)

STUB(_ZN2al14SensorHitGroup6removeEPNS_9HitSensorE)
STUB(_ZN2al8Collider12onInvalidateEv)
STUB(_ZN4sead7MemUtil11copyOverlapEPvPKvj)

STUB(_ZN2al19StageResourceKeeper19initAndLoadResourceEPKciPN4sead4HeapE)

#undef STUB
