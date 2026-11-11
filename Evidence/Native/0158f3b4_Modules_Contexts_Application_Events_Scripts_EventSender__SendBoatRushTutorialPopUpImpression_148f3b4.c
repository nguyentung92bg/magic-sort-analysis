/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoatRushTutorialPopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushTutorialPopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionReason, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoatRushTutorialPopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushTutorialPopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionReason,
   int32_t impressionSource, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushTutorialPopUpImpression_148f3b4
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
                    /* try { // try from 0158f3b4 to 0168f3cb has its CatchHandler @ 0158f4c0 */
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 0158f3cc to 0168f4af has its CatchHandler @ 0158f1dc */
  if ((bRam0000000005c2386d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057af5d8);
    FUN_012d0dc8(PTR_DAT_0575b3b0);
    FUN_012d0dc8(PTR_DAT_057c21e0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_058066f0);
    FUN_012d0dc8(PTR_DAT_0576ec08);
    FUN_012d0dc8(PTR_DAT_05772cc8);
                    /* try { // try from 0158f4b0 to 0168f4bf has its CatchHandler @ 0158f4c0 */
    FUN_012d0dc8(PTR_DAT_057c7308);
                    /* catch() { ... } // from try @ 0158f3b4 with catch @ 0158f4c0
                       catch() { ... } // from try @ 0158f4b0 with catch @ 0158f4c0 */
                    /* try { // try from 0158f4c4 to 0168f4c7 has its CatchHandler @ 0158f4d0 */
    FUN_012d0dc8(PTR_DAT_057caaf0);
                    /* try { // try from 0158f4c8 to 0168f4d3 has its CatchHandler @ 0158f1dc */
                    /* catch() { ... } // from try @ 0158f4c4 with catch @ 0158f4d0 */
    FUN_012d0dc8(PTR_DAT_057cf9a0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2386d = 1;
  }
  lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
    lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar18,*(undefined8 *)PTR_DAT_057c21e0);
    lVar19 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar19 != 0) &&
       (((lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0 &&
         (plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar19,*(undefined8 *)PTR_DAT_057a1e60),
         puVar1 = PTR_DAT_057c8a60, lVar18 != 0)) && (*(long *)(lVar18 + 0x10) != 0)))) {
      uVar12 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushDataService__GetLeaderboardId_3fcbdf4
                         (*(long *)(lVar18 + 0x10),0);
      iVar6 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetRemainingSeconds_3fd0bc0
                        (lVar18,0);
      iVar7 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetScore_3fd0cec(lVar18,0);
      iVar8 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetCurrentStageIndex_3fceccc
                        (lVar18,0);
      iVar9 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetTierIndex_3fcfcf4(lVar18,0)
      ;
      uVar13 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetTournamentId_3fd114c
                         (lVar18,0);
      uVar14 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetReadableEventId_3fd11bc
                         (lVar18,0);
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_05772cc8;
      if (lVar18 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar18,*(undefined8 *)PTR_DAT_057cf9a0,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar1,uVar12,0);
        iStack_64 = iVar6;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057e4da8,uVar15,0);
        iStack_68 = iVar7;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057c7308,uVar15,0);
        iStack_6c = iVar8;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_0576ec08,uVar15,0);
        iStack_70 = iVar9;
        uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_058066f0,uVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057fcce8,uVar13,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057e66c0,uVar14,0);
        puVar5 = PTR_DAT_057e3618;
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057af5d8;
        puVar2 = PTR_DAT_057ab1a0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar11 != (long *)0x0) {
          lVar19 = *plVar11;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_0158f798;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_0158f798:
          uStack_74 = (*(code *)*puVar16)(plVar11,puVar16[1]);
          uVar15 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar4,uVar15,0);
          uStack_90 = *(undefined8 *)puVar3;
          uStack_88 = 0xffffffffffffffff;
          uStack_80 = param_2;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_90,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar5,uVar15,0);
          uStack_a8 = *(undefined8 *)PTR_DAT_0575b3b0;
          uStack_a0 = 0xffffffffffffffff;
          uStack_98 = param_3;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_a8,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar2,uVar15,0);
          lVar19 = *plVar11;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
                puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_0158f898;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar16 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_0158f898:
          iVar10 = (*(code *)*puVar16)(plVar11,puVar16[1]);
          uStack_c0 = *(undefined8 *)puVar3;
          uStack_b8 = 0xffffffffffffffff;
          uStack_b0 = param_2;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_c0,0);
          uStack_d8 = *(undefined8 *)PTR_DAT_0575b3b0;
          uStack_d0 = 0xffffffffffffffff;
          uStack_c8 = param_3;
          uVar17 = System_Enum__ToString_23a4eac(&uStack_d8,0);
          uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BoatRushTutorialImpression_2dbdb34
                             (uVar12,(long)iVar6,(long)iVar7,(long)iVar8,(long)iVar9,uVar13,uVar14,
                              (long)iVar10,uVar15,uVar17,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar18)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

