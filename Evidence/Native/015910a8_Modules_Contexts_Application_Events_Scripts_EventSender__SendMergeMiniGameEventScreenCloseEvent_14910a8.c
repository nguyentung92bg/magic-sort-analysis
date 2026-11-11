/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameEventScreenCloseEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameEventScreenCloseEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameEventScreenCloseEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameEventScreenCloseEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameEventScreenCloseEvent_14910a8
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  int *piVar24;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
                    /* try { // try from 015910a8 to 016910b3 has its CatchHandler @ 01591b18 */
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 015910d4 to 016910d7 has its CatchHandler @ 01591af0 */
                    /* try { // try from 015910d8 to 016910e3 has its CatchHandler @ 01591b0c */
  if ((bRam0000000005c23873 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c39a8);
                    /* try { // try from 01591104 to 01691107 has its CatchHandler @ 01591ae4 */
                    /* try { // try from 01591108 to 01691113 has its CatchHandler @ 01591b00 */
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 01591134 to 01691137 has its CatchHandler @ 01591ad8 */
                    /* try { // try from 01591138 to 01691143 has its CatchHandler @ 01591af4 */
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0578f0c0);
    FUN_012d0dc8(PTR_DAT_0580be48);
    FUN_012d0dc8(PTR_DAT_057b0120);
                    /* try { // try from 01591164 to 01691167 has its CatchHandler @ 01591acc */
                    /* try { // try from 01591168 to 01691173 has its CatchHandler @ 01591ae8 */
    FUN_012d0dc8(PTR_DAT_057bb3e8);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_058154e8);
    FUN_012d0dc8(PTR_DAT_057e93b0);
                    /* try { // try from 01591194 to 01691197 has its CatchHandler @ 01591ab8 */
                    /* try { // try from 01591198 to 016911a3 has its CatchHandler @ 01591adc */
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23873 = 1;
  }
                    /* try { // try from 015911c4 to 016911c7 has its CatchHandler @ 01591aa4 */
                    /* try { // try from 015911c8 to 016911d3 has its CatchHandler @ 01591ad0 */
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar15 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar15 != 0)) {
    lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar15,*(undefined8 *)PTR_DAT_057c39a8);
                    /* try { // try from 015911f4 to 016911f7 has its CatchHandler @ 01591a9c */
                    /* try { // try from 015911f8 to 01691203 has its CatchHandler @ 01591ac0 */
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar16 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar16 != 0)) {
      plVar17 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
                    /* try { // try from 01591210 to 0169121b has its CatchHandler @ 01591aac */
                    /* try { // try from 01591228 to 0169122f has its CatchHandler @ 01591aa8 */
                    /* try { // try from 0159123c to 0169125f has its CatchHandler @ 01591ab4 */
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar16 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar16 != 0)) &&
         (lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar16,*(undefined8 *)PTR_DAT_05792f78), lVar15 != 0)) {
        uVar18 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetReadableEventId_219b8b8
                           (lVar15,0);
        uVar19 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEventId_2196fc8
                           (lVar15,0);
        puVar1 = PTR_DAT_057c8a60;
        if (lVar16 != 0) {
                    /* try { // try from 01591278 to 0169129b has its CatchHandler @ 01591b60 */
          uVar20 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar16,0);
          iVar9 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetCurrentStage_219a9ac
                            (lVar15,0,0);
          iVar10 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEmptySpaceCount_219b9b4
                             (lVar15,0);
          iVar11 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEnergyCount_2197298
                             (lVar15,0);
          iVar12 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetScatterQueueCount_219b2c0
                             (lVar15,0);
                    /* try { // try from 015912c0 to 016912e3 has its CatchHandler @ 01591b58 */
          iVar13 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetTotalCollectedEnergy_219b838
                             (lVar15,0);
          lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057d3f68;
          puVar1 = PTR_DAT_0575a580;
          if (lVar15 != 0) {
                    /* try { // try from 015912fc to 01691303 has its CatchHandler @ 01591b20 */
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar15,*(undefined8 *)PTR_DAT_0578f0c0,0);
                    /* try { // try from 01591324 to 01691337 has its CatchHandler @ 01591b54 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar15,*(undefined8 *)puVar1,uVar19,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar15,*(undefined8 *)puVar2,uVar20,0);
            puVar8 = PTR_DAT_058154e8;
            puVar7 = PTR_DAT_057e93b0;
            puVar6 = PTR_DAT_057e66c0;
            puVar5 = PTR_DAT_057db748;
            puVar4 = PTR_DAT_057caaf0;
            puVar3 = PTR_DAT_057bb3e8;
            puVar2 = PTR_DAT_057b0120;
            puVar1 = PTR_DAT_057636d0;
            if (plVar17 != (long *)0x0) {
                    /* try { // try from 01591344 to 01691367 has its CatchHandler @ 01591b44 */
              lVar16 = *plVar17;
              uVar23 = (ulong)*(ushort *)(lVar16 + 0x12a);
                    /* try { // try from 0159138c to 016913cb has its CatchHandler @ 01591b48 */
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 015913f0 to 0169142f has its CatchHandler @ 01591b38 */
                    puVar21 = (undefined8 *)(lVar16 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                    goto LAB_015913f8;
                  }
                  uVar23 = uVar23 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar23 != 0);
              }
              puVar21 = (undefined8 *)FUN_0131971c(plVar17,*(long *)PTR_DAT_057636d0,1);
LAB_015913f8:
              uStack_64 = (*(code *)*puVar21)(plVar17,puVar21[1]);
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar4,uVar22,0);
              iStack_68 = iVar9;
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_68);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar2,uVar22,0);
                    /* try { // try from 01591454 to 01691493 has its CatchHandler @ 01591b2c */
              iStack_6c = iVar10;
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_6c);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar3,uVar22,0);
              iStack_70 = iVar11;
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_70);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)PTR_DAT_0580be48,uVar22,0);
              iStack_74 = iVar12;
                    /* try { // try from 015914b8 to 016914f7 has its CatchHandler @ 01591b1c */
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_74);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar8,uVar22,0);
              iStack_78 = iVar13;
              uVar22 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar7,uVar22,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar15,*(undefined8 *)puVar6,uVar18,0);
              lVar16 = *plVar17;
                    /* try { // try from 0159151c to 0169155b has its CatchHandler @ 01591b10 */
              uVar23 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)puVar1) {
                    puVar21 = (undefined8 *)(lVar16 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                    goto LAB_0159156c;
                  }
                  uVar23 = uVar23 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar23 != 0);
              }
              puVar21 = (undefined8 *)FUN_0131971c(plVar17,*(long *)puVar1,1);
LAB_0159156c:
              iVar14 = (*(code *)*puVar21)(plVar17,puVar21[1]);
                    /* try { // try from 01591580 to 016915bf has its CatchHandler @ 01591b04 */
              uVar18 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MergeEventScreenClose_2dbd1e4
                                 (uVar19,uVar20,(long)iVar14,(long)iVar9,(long)iVar10,(long)iVar11,
                                  (long)iVar12,(long)iVar13,uVar18,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar18,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar15);
                    /* try { // try from 015915e4 to 01691623 has its CatchHandler @ 01591af8 */
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

