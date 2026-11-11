/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameEventScreenOpenEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameEventScreenOpenEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameEventScreenOpenEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameEventScreenOpenEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameEventScreenOpenEvent_1491600
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  int *piVar25;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23874 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 01591648 to 01691687 has its CatchHandler @ 01591aec */
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c39a8);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0578a148);
                    /* try { // try from 015916ac to 016916ef has its CatchHandler @ 01591ae0 */
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_0580be48);
    FUN_012d0dc8(PTR_DAT_057b0120);
    FUN_012d0dc8(PTR_DAT_057bb3e8);
    FUN_012d0dc8(PTR_DAT_0576b320);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_058154e8);
    FUN_012d0dc8(PTR_DAT_057e93b0);
                    /* try { // try from 01591708 to 0169170b has its CatchHandler @ 01591a94 */
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
                    /* try { // try from 0159172c to 0169173f has its CatchHandler @ 01591ad4 */
    bRam0000000005c23874 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar16 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_057c39a8);
                    /* try { // try from 0159175c to 0169175f has its CatchHandler @ 01591a90 */
                    /* try { // try from 01591760 to 0169176f has its CatchHandler @ 01591abc */
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar17 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar17 != 0)) {
                    /* try { // try from 01591780 to 016917a7 has its CatchHandler @ 01591ac4 */
      plVar18 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar17,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar17 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar17 != 0)) &&
         (lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar17,*(undefined8 *)PTR_DAT_05792f78), lVar16 != 0)) {
        uVar19 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetReadableEventId_219b8b8
                           (lVar16,0);
                    /* try { // try from 015917cc to 0169180b has its CatchHandler @ 01591ac8 */
        uVar20 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEventId_2196fc8
                           (lVar16,0);
        puVar1 = PTR_DAT_057c8a60;
        if (lVar17 != 0) {
          uVar21 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar17,0);
          iVar10 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetCurrentStage_219a9ac
                             (lVar16,0,0);
          iVar11 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEmptySpaceCount_219b9b4
                             (lVar16,0);
          iVar12 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEnergyCount_2197298
                             (lVar16,0);
                    /* try { // try from 01591824 to 01691827 has its CatchHandler @ 01591a8c */
          iVar13 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetScatterQueueCount_219b2c0
                             (lVar16,0);
          iVar14 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetTotalCollectedEnergy_219b838
                             (lVar16,0);
                    /* try { // try from 01591848 to 0169185f has its CatchHandler @ 01591ab0 */
          lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057d3f68;
          puVar1 = PTR_DAT_0575a580;
          if (lVar16 != 0) {
                    /* try { // try from 0159187c to 0169187f has its CatchHandler @ 01591a88 */
                    /* try { // try from 01591880 to 0169188f has its CatchHandler @ 01591a98 */
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar16,*(undefined8 *)PTR_DAT_0576b320,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar16,*(undefined8 *)puVar1,uVar20,0);
                    /* try { // try from 015918a0 to 016918c7 has its CatchHandler @ 01591aa0 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar16,*(undefined8 *)puVar2,uVar21,0);
            puVar9 = PTR_DAT_058154e8;
            puVar8 = PTR_DAT_0580be48;
            puVar7 = PTR_DAT_057e66c0;
            puVar6 = PTR_DAT_057e3618;
            puVar5 = PTR_DAT_057db748;
            puVar4 = PTR_DAT_057caaf0;
            puVar3 = PTR_DAT_057bb3e8;
            puVar2 = PTR_DAT_057b0120;
            puVar1 = PTR_DAT_057636d0;
            if (plVar18 != (long *)0x0) {
                    /* try { // try from 015918c8 to 0169195b has its CatchHandler @ 01590c20 */
              lVar17 = *plVar18;
              uVar24 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar24 != 0) {
                piVar25 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 0159195c to 01691963 has its CatchHandler @ 01591a84 */
                    puVar22 = (undefined8 *)(lVar17 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                    goto LAB_01591964;
                  }
                  uVar24 = uVar24 - 1;
                  piVar25 = piVar25 + 4;
                } while (uVar24 != 0);
              }
              puVar22 = (undefined8 *)FUN_0131971c(plVar18,*(long *)PTR_DAT_057636d0,1);
LAB_01591964:
                    /* try { // try from 01591964 to 0169196b has its CatchHandler @ 01591a80 */
                    /* try { // try from 0159196c to 01691973 has its CatchHandler @ 01591a7c */
              uStack_64 = (*(code *)*puVar22)(plVar18,puVar22[1]);
                    /* try { // try from 01591974 to 0169198b has its CatchHandler @ 01591a78 */
              uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
                    /* try { // try from 01591990 to 016919ab has its CatchHandler @ 01591a40 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar4,uVar23,0);
              iStack_68 = iVar10;
              uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_68);
                    /* try { // try from 015919ac to 016919b3 has its CatchHandler @ 01591a74 */
                    /* try { // try from 015919b4 to 016919bb has its CatchHandler @ 01591a70 */
                    /* try { // try from 015919bc to 016919c3 has its CatchHandler @ 01591a6c */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar2,uVar23,0);
                    /* try { // try from 015919c4 to 016919cb has its CatchHandler @ 01591a68 */
              iStack_6c = iVar11;
                    /* try { // try from 015919cc to 016919cf has its CatchHandler @ 01591a64 */
                    /* try { // try from 015919d0 to 016919d7 has its CatchHandler @ 01591a60 */
              uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_6c);
                    /* try { // try from 015919d8 to 016919df has its CatchHandler @ 01591a5c */
                    /* try { // try from 015919e0 to 016919e7 has its CatchHandler @ 01591a58 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar3,uVar23,0);
                    /* try { // try from 015919e8 to 016919ef has its CatchHandler @ 01591a54 */
                    /* try { // try from 015919f0 to 016919f7 has its CatchHandler @ 01591a50 */
              iStack_70 = iVar12;
                    /* try { // try from 015919f8 to 016919ff has its CatchHandler @ 01591a4c */
              uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_70);
                    /* try { // try from 01591a00 to 01691a07 has its CatchHandler @ 01591a48 */
                    /* try { // try from 01591a08 to 01691a0b has its CatchHandler @ 01590c20 */
                    /* try { // try from 01591a0c to 01691a0f has its CatchHandler @ 01591a44 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar8,uVar23,0);
                    /* try { // try from 01591a10 to 01691a17 has its CatchHandler @ 01590c20 */
                    /* try { // try from 01591a18 to 01691a3f has its CatchHandler @ 01591a40 */
              iStack_74 = iVar13;
              uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_74);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar9,uVar23,0);
                    /* catch() { ... } // from try @ 01591990 with catch @ 01591a40
                       catch() { ... } // from try @ 01591a18 with catch @ 01591a40
                       try { // try from 01591a40 to 01691b87 has its CatchHandler @ 01590c20 */
              iStack_78 = iVar14;
                    /* catch() { ... } // from try @ 01591a0c with catch @ 01591a44 */
                    /* catch() { ... } // from try @ 01591a00 with catch @ 01591a48 */
              uVar23 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_78);
                    /* catch() { ... } // from try @ 015919f8 with catch @ 01591a4c */
                    /* catch() { ... } // from try @ 015919f0 with catch @ 01591a50 */
                    /* catch() { ... } // from try @ 015919e8 with catch @ 01591a54 */
                    /* catch() { ... } // from try @ 015919e0 with catch @ 01591a58 */
                    /* catch() { ... } // from try @ 015919d8 with catch @ 01591a5c */
                    /* catch() { ... } // from try @ 015919d0 with catch @ 01591a60 */
                    /* catch() { ... } // from try @ 015919cc with catch @ 01591a64 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)PTR_DAT_057e93b0,uVar23,0);
                    /* catch() { ... } // from try @ 015919c4 with catch @ 01591a68 */
                    /* catch() { ... } // from try @ 015919bc with catch @ 01591a6c */
                    /* catch() { ... } // from try @ 015919b4 with catch @ 01591a70 */
                    /* catch() { ... } // from try @ 015919ac with catch @ 01591a74 */
                    /* catch() { ... } // from try @ 01591974 with catch @ 01591a78 */
                    /* catch() { ... } // from try @ 0159196c with catch @ 01591a7c */
              uStack_90 = *(undefined8 *)PTR_DAT_0578a148;
                    /* catch() { ... } // from try @ 01591964 with catch @ 01591a80 */
                    /* catch() { ... } // from try @ 0159195c with catch @ 01591a84 */
                    /* catch() { ... } // from try @ 0159187c with catch @ 01591a88 */
              uStack_88 = 0xffffffffffffffff;
              uStack_80 = param_2;
                    /* catch() { ... } // from try @ 01591824 with catch @ 01591a8c */
              uVar23 = System_Enum__ToString_23a4eac(&uStack_90,0);
                    /* catch() { ... } // from try @ 0159175c with catch @ 01591a90 */
                    /* catch() { ... } // from try @ 01591708 with catch @ 01591a94 */
                    /* catch() { ... } // from try @ 01591880 with catch @ 01591a98 */
                    /* catch() { ... } // from try @ 015911f4 with catch @ 01591a9c */
                    /* catch() { ... } // from try @ 015918a0 with catch @ 01591aa0 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar6,uVar23,0);
                    /* catch() { ... } // from try @ 015911c4 with catch @ 01591aa4 */
                    /* catch() { ... } // from try @ 01591228 with catch @ 01591aa8 */
                    /* catch() { ... } // from try @ 01591210 with catch @ 01591aac */
                    /* catch() { ... } // from try @ 01591848 with catch @ 01591ab0 */
                    /* catch() { ... } // from try @ 0159123c with catch @ 01591ab4 */
                    /* catch() { ... } // from try @ 01591194 with catch @ 01591ab8 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar16,*(undefined8 *)puVar7,uVar19,0);
                    /* catch() { ... } // from try @ 01591760 with catch @ 01591abc */
              lVar17 = *plVar18;
                    /* catch() { ... } // from try @ 015911f8 with catch @ 01591ac0 */
                    /* catch() { ... } // from try @ 01591780 with catch @ 01591ac4 */
                    /* catch() { ... } // from try @ 015917cc with catch @ 01591ac8 */
                    /* catch() { ... } // from try @ 01591164 with catch @ 01591acc */
              uVar24 = (ulong)*(ushort *)(lVar17 + 0x12a);
                    /* catch() { ... } // from try @ 015911c8 with catch @ 01591ad0 */
              if (uVar24 != 0) {
                    /* catch() { ... } // from try @ 0159172c with catch @ 01591ad4 */
                    /* catch() { ... } // from try @ 01591134 with catch @ 01591ad8 */
                piVar25 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                    /* catch() { ... } // from try @ 01591198 with catch @ 01591adc */
                    /* catch() { ... } // from try @ 015916ac with catch @ 01591ae0 */
                    /* catch() { ... } // from try @ 01591104 with catch @ 01591ae4 */
                  if (*(long *)(piVar25 + -2) == *(long *)puVar1) {
                    /* catch() { ... } // from try @ 01591580 with catch @ 01591b04 */
                    /* catch() { ... } // from try @ 01591074 with catch @ 01591b08 */
                    /* catch() { ... } // from try @ 015910d8 with catch @ 01591b0c */
                    /* catch() { ... } // from try @ 0159151c with catch @ 01591b10 */
                    puVar22 = (undefined8 *)(lVar17 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                    goto LAB_01591b14;
                  }
                    /* catch() { ... } // from try @ 01591168 with catch @ 01591ae8 */
                  uVar24 = uVar24 - 1;
                    /* catch() { ... } // from try @ 01591648 with catch @ 01591aec */
                  piVar25 = piVar25 + 4;
                    /* catch() { ... } // from try @ 015910d4 with catch @ 01591af0 */
                } while (uVar24 != 0);
              }
                    /* catch() { ... } // from try @ 01591138 with catch @ 01591af4 */
                    /* catch() { ... } // from try @ 015915e4 with catch @ 01591af8 */
                    /* catch() { ... } // from try @ 015910a4 with catch @ 01591afc */
              puVar22 = (undefined8 *)FUN_0131971c(plVar18,*(long *)puVar1,1);
                    /* catch() { ... } // from try @ 01591108 with catch @ 01591b00 */
LAB_01591b14:
                    /* catch() { ... } // from try @ 01591044 with catch @ 01591b14 */
                    /* catch() { ... } // from try @ 015910a8 with catch @ 01591b18 */
                    /* catch() { ... } // from try @ 015914b8 with catch @ 01591b1c */
              iVar15 = (*(code *)*puVar22)(plVar18,puVar22[1]);
                    /* catch() { ... } // from try @ 015912fc with catch @ 01591b20 */
                    /* catch() { ... } // from try @ 01591014 with catch @ 01591b24 */
                    /* catch() { ... } // from try @ 01591078 with catch @ 01591b28 */
                    /* catch() { ... } // from try @ 01591454 with catch @ 01591b2c */
                    /* catch() { ... } // from try @ 01590fe4 with catch @ 01591b30 */
                    /* catch() { ... } // from try @ 01591048 with catch @ 01591b34 */
              uStack_a8 = *(undefined8 *)PTR_DAT_0578a148;
                    /* catch() { ... } // from try @ 015913f0 with catch @ 01591b38 */
                    /* catch() { ... } // from try @ 01590fb4 with catch @ 01591b3c */
                    /* catch() { ... } // from try @ 01591018 with catch @ 01591b40 */
              uStack_a0 = 0xffffffffffffffff;
              uStack_98 = param_2;
                    /* catch() { ... } // from try @ 01591344 with catch @ 01591b44 */
              uVar23 = System_Enum__ToString_23a4eac(&uStack_a8,0);
                    /* catch() { ... } // from try @ 0159138c with catch @ 01591b48 */
                    /* catch() { ... } // from try @ 01590f84 with catch @ 01591b4c */
                    /* catch() { ... } // from try @ 01590fe8 with catch @ 01591b50 */
                    /* catch() { ... } // from try @ 01591324 with catch @ 01591b54 */
                    /* catch() { ... } // from try @ 015912c0 with catch @ 01591b58 */
                    /* catch() { ... } // from try @ 01590fb8 with catch @ 01591b5c */
                    /* catch() { ... } // from try @ 01591278 with catch @ 01591b60 */
                    /* catch() { ... } // from try @ 01590f64 with catch @ 01591b64 */
                    /* catch() { ... } // from try @ 01590f88 with catch @ 01591b68 */
                    /* catch() { ... } // from try @ 01590f30 with catch @ 01591b6c */
                    /* catch() { ... } // from try @ 01590ed4 with catch @ 01591b70 */
              uVar19 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MergeEventScreenOpen_2dbd338
                                 (uVar20,uVar21,(long)iVar15,(long)iVar10,(long)iVar11,(long)iVar12,
                                  (long)iVar13,(long)iVar14,uVar23,uVar19,0);
                    /* try { // try from 01591b88 to 01691b8b has its CatchHandler @ 01591c0c */
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar19,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar16);
                    /* try { // try from 01591bd0 to 01691bf7 has its CatchHandler @ 01591c18 */
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

