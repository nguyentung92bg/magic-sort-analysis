/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakTournamentJoinedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentJoinedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakTournamentJoinedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentJoinedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentJoinedEvent_14504d4
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int iStack_80;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23771 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0578feb0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057e9860);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057f0490);
    FUN_012d0dc8(PTR_DAT_057c9708);
    FUN_012d0dc8(PTR_DAT_057a93a8);
    FUN_012d0dc8(PTR_DAT_057aea40);
    FUN_012d0dc8(PTR_DAT_05805770);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057eaf90);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_05795788);
    FUN_012d0dc8(PTR_DAT_057bc700);
    bRam0000000005c23771 = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0)) &&
      (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar9,*(undefined8 *)PTR_DAT_058030e0), lVar9 != 0)) &&
     (lVar10 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetLeaderboard_411ed90
                         (lVar9,0), puVar2 = PTR_DAT_057a93a8, lVar10 != 0)) {
    iVar1 = *(int *)(lVar10 + 0x18);
    uVar11 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStartTimeAsUnix_4120248
                       (lVar9,0);
    iVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRemainingSeconds_411ec80
                      (lVar9,0);
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar13);
      lVar13 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_057e9860;
    lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
    if (lVar14 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar13);
        lVar13 = *(long *)puVar2;
      }
      uVar15 = **(undefined8 **)(lVar13 + 0xb8);
      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if (lVar14 == 0) goto LAB_015508d8;
      System_Func_object__bool____ctor_338137c(lVar14,uVar15,*(undefined8 *)PTR_DAT_057c9708,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar12 = lVar14;
      FUN_012d0d74(plVar12,lVar14);
    }
    puVar2 = PTR_DAT_057c8a60;
    uVar7 = System_Linq_Enumerable__Count_object__241f07c
                      (lVar10,lVar14,*(undefined8 *)PTR_DAT_0578feb0);
    iVar8 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                      (lVar9,0);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar5 = PTR_DAT_05815af0;
    puVar4 = PTR_DAT_057db748;
    puVar3 = PTR_DAT_057d6138;
    puVar2 = PTR_DAT_057aea40;
    if (lVar9 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar9,*(undefined8 *)PTR_DAT_05805770,0);
      iStack_64 = iVar1;
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar2,uVar15,0);
      uStack_70 = uVar11;
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_70);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar5,uVar15,0);
      iStack_74 = iVar6;
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_74);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_057e4da8,uVar15,0);
      iStack_78 = iVar1 + ~uVar7;
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_78);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_057eaf90,uVar15,0);
      uStack_7c = uVar7;
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_7c);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_05795788,uVar15,0);
      iStack_80 = iVar8;
      uVar15 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_80);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_057bc700,uVar15,0);
      uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StreakTournamentJoined_2db9304
                         ((long)iVar1,uVar11,(long)iVar6,(long)(int)(iVar1 + ~uVar7),
                          (long)(int)uVar7,(long)iVar8,0);
      if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar9);
      return;
    }
  }
LAB_015508d8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

