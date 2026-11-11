/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoatRushJoinedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushJoinedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBoatRushJoinedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushJoinedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBoatRushJoinedEvent_148f970
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
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
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2386e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0579c980);
    FUN_012d0dc8(PTR_DAT_057c21e0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057a90c8);
    FUN_012d0dc8(PTR_DAT_057ab1a0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_058066f0);
    FUN_012d0dc8(PTR_DAT_0576ec08);
    FUN_012d0dc8(PTR_DAT_05772cc8);
    FUN_012d0dc8(PTR_DAT_057c7308);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2386e = 1;
  }
  lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_057c21e0);
    lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar17 != 0) &&
       (((lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0 &&
         (plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar17,*(undefined8 *)PTR_DAT_057a1e60),
         puVar1 = PTR_DAT_057c8a60, lVar16 != 0)) && (*(long *)(lVar16 + 0x10) != 0)))) {
      uVar11 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushDataService__GetLeaderboardId_3fcbdf4
                         (*(long *)(lVar16 + 0x10),0);
      iVar5 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetRemainingSeconds_3fd0bc0
                        (lVar16,0);
      iVar6 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetScore_3fd0cec(lVar16,0);
      iVar7 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetCurrentStageIndex_3fceccc
                        (lVar16,0);
      iVar8 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetTierIndex_3fcfcf4(lVar16,0)
      ;
      uVar12 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetTournamentId_3fd114c
                         (lVar16,0);
      uVar13 = Modules_Contexts_Home_BoatRush_Scripts_BoatRushService__GetReadableEventId_3fd11bc
                         (lVar16,0);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_05772cc8;
      if (lVar16 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar16,*(undefined8 *)PTR_DAT_057a90c8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar1,uVar11,0);
        iStack_64 = iVar5;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)PTR_DAT_057e4da8,uVar14,0);
        iStack_68 = iVar6;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)PTR_DAT_057c7308,uVar14,0);
        iStack_6c = iVar7;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)PTR_DAT_0576ec08,uVar14,0);
        iStack_70 = iVar8;
        uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)PTR_DAT_058066f0,uVar14,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)PTR_DAT_057fcce8,uVar12,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)PTR_DAT_057e66c0,uVar13,0);
        puVar4 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057ab1a0;
        puVar2 = PTR_DAT_0579c980;
        puVar1 = PTR_DAT_057636d0;
        if (plVar10 != (long *)0x0) {
          lVar17 = *plVar10;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0158fd30;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0158fd30:
          uStack_74 = (*(code *)*puVar15)(plVar10,puVar15[1]);
          uVar14 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar4,uVar14,0);
          uStack_90 = *(undefined8 *)puVar2;
          uStack_88 = 0xffffffffffffffff;
          uStack_80 = param_2;
          uVar14 = System_Enum__ToString_23a4eac(&uStack_90,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar3,uVar14,0);
          lVar17 = *plVar10;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0158fdf8;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,1);
LAB_0158fdf8:
          iVar9 = (*(code *)*puVar15)(plVar10,puVar15[1]);
          uStack_a8 = *(undefined8 *)PTR_DAT_0579c980;
          uStack_a0 = 0xffffffffffffffff;
          uStack_98 = param_2;
          uVar14 = System_Enum__ToString_23a4eac(&uStack_a8,0);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BoatRushJoined_2dbdcb0
                             (uVar11,(long)iVar5,(long)iVar6,(long)iVar7,(long)iVar8,uVar12,uVar13,
                              (long)iVar9,uVar14,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar16)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

