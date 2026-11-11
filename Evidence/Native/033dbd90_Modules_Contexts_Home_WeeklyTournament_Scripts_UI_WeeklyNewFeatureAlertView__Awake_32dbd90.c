/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyNewFeatureAlertView$$Awake
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView__Awake (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyNewFeatureAlertView$$Awake
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView__Awake
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView__Awake_32dbd90
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c31d84 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057fbec0);
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057a60a0);
    FUN_012d0dc8(PTR_DAT_057aa180);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057a8e68);
    bRam0000000005c31d84 = 1;
  }
  lVar9 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_057fbec0);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    FUN_012d0d74();
    puVar4 = PTR_DAT_057b8520;
    puVar2 = PTR_DAT_057aa180;
    lVar9 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
      uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar9,*(undefined8 *)PTR_DAT_05790e10);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      FUN_012d0d74();
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      puVar3 = PTR_DAT_057a8e68;
      puVar1 = PTR_DAT_0578b048;
      lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar9 != 0) {
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar7 == 0) goto LAB_033dbf70;
        System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)puVar3,0);
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar9,lVar7,0);
      }
      puVar2 = PTR_DAT_057a60a0;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar9 != 0) {
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar7 == 0) goto LAB_033dbf70;
        System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)puVar3,0);
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar9,lVar7,0);
      }
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x60), lVar9 != 0)) {
        iVar5 = Modules_Contexts_Home_UI_SwipeMenu_Scripts_SwipeMenuManager__GetCurrentPageType_2dd045c
                          (lVar9,0);
        if (iVar5 == 2) {
          if ((*(long *)(param_1 + 0x18) == 0) ||
             (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar9 == 0)) goto LAB_033dbff4;
          uVar8 = Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__WeeklyTabSelected_2ae9928
                            (lVar9,0);
          if ((uVar8 & 1) != 0) {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_033dbff4;
            Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__SetWeeklyTournamentSeenByUser_32da678
                      ();
          }
        }
        if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(*(long *)(param_1 + 0x20) + 0x18) != 0))
        {
          uVar8 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService__ShouldShowNewFeatureAlertView_32dbba8
                            ();
          if ((uVar8 & 1) == 0) {
            lVar9 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar6 = 0;
          }
          else {
            lVar9 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar6 = 1;
          }
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar9,uVar6);
          return;
        }
      }
LAB_033dbff4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_033dbf70:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

