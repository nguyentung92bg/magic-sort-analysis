/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoatRushRacePopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushRacePopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoatRushRacePopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushRacePopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushRacePopUpImpression_148e8d0
               (undefined8 param_1,undefined4 param_2)

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
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
                    /* try { // try from 0158e8d0 to 0168e8db has its CatchHandler @ 0158dfe8 */
  puVar1 = PTR_DAT_0576aae0;
                    /* catch() { ... } // from try @ 0158e76c with catch @ 0158e8d8
                       catch() { ... } // from try @ 0158e7e8 with catch @ 0158e8d8
                       catch() { ... } // from try @ 0158e8b0 with catch @ 0158e8d8 */
  if ((bRam0000000005c2386b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05767740);
    FUN_012d0dc8(PTR_DAT_057c21e0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057e0b60);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057e4250);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_058066f0);
    FUN_012d0dc8(PTR_DAT_0576ec08);
    FUN_012d0dc8(PTR_DAT_05772cc8);
    FUN_012d0dc8(PTR_DAT_057c7308);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2386b = 1;
  }
  lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
    lVar18 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar18,*(undefined8 *)PTR_DAT_057c21e0);
    lVar19 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar19 != 0) &&
       (((lVar19 = *(long *)(lVar19 + 0x18), lVar19 != 0 &&
         (plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar19,*(undefined8 *)PTR_DAT_057a1e60),
         puVar1 = PTR_DAT_057c8a60, lVar18 != 0)) && (*(long *)(lVar18 + 0x10) != 0)))) {
      uVar13 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushDataService__GetLeaderboardId_3fcbdf4
                         (*(long *)(lVar18 + 0x10),0);
      iVar6 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetRemainingSeconds_3fd0bc0
                        (lVar18,0);
      iVar7 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetScore_3fd0cec(lVar18,0);
      iVar8 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetCurrentStageIndex_3fceccc
                        (lVar18,0);
      iVar9 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetTierIndex_3fcfcf4(lVar18,0)
      ;
      uVar14 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetTournamentId_3fd114c
                         (lVar18,0);
      uVar15 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetReadableEventId_3fd11bc
                         (lVar18,0);
      iVar10 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetPlayerRank_3fd06dc
                         (lVar18,0);
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_05772cc8;
      if (lVar18 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar18,*(undefined8 *)PTR_DAT_057e4250,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar1,uVar13,0);
        iStack_64 = iVar6;
        uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057e4da8,uVar16,0);
        iStack_68 = iVar7;
        uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057c7308,uVar16,0);
        iStack_6c = iVar8;
        uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_0576ec08,uVar16,0);
        iStack_70 = iVar9;
        uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_058066f0,uVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057fcce8,uVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)PTR_DAT_057e66c0,uVar15,0);
        puVar5 = PTR_DAT_057e0b60;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057ab1a0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar12 != (long *)0x0) {
          lVar19 = *plVar12;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar17 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_0158ecb8;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar17 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0158ecb8:
          uStack_74 = (*(code *)*puVar17)(plVar12,puVar17[1]);
          puVar4 = PTR_DAT_057db748;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar3,uVar16,0);
          uStack_90 = *(undefined8 *)PTR_DAT_05767740;
          uStack_88 = 0xffffffffffffffff;
          uStack_80 = param_2;
          uVar16 = System_Enum__ToString_23a4eac(&uStack_90,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar2,uVar16,0);
          iStack_94 = iVar10;
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_94);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar5,uVar16,0);
          lVar19 = *plVar12;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar1) {
                puVar17 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_0158edb0;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar17 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,1);
LAB_0158edb0:
          iVar11 = (*(code *)*puVar17)(plVar12,puVar17[1]);
          uStack_b0 = *(undefined8 *)PTR_DAT_05767740;
          uStack_a8 = 0xffffffffffffffff;
          uStack_a0 = param_2;
          uVar16 = System_Enum__ToString_23a4eac(&uStack_b0,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BoatRushRaceScreenImpression_2dbd864
                             (uVar13,(long)iVar6,(long)iVar7,(long)iVar8,(long)iVar9,uVar14,uVar15,
                              (long)iVar11,uVar16,(long)iVar10,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
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

