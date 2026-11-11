/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyNewFeatureAlertView$$OnDestroy
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView__OnDestroy (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyNewFeatureAlertView$$OnDestroy
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView__OnDestroy
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyNewFeatureAlertView__OnDestroy_32dbff8
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c31d85 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057a60a0);
    FUN_012d0dc8(PTR_DAT_057aa180);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057a8e68);
    bRam0000000005c31d85 = 1;
  }
  puVar3 = PTR_DAT_057aa180;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar4 = PTR_DAT_057a8e68;
  puVar1 = PTR_DAT_0578b048;
  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  if (lVar6 != 0) {
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_033dc148;
    System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)puVar4,0);
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar6,lVar7,0);
  }
  puVar3 = PTR_DAT_057a60a0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar7 != 0) {
    System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)puVar4,0);
    if ((bRam0000000005c3aa35 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048,lVar7,0);
      bRam0000000005c3aa35 = 1;
    }
    puVar2 = PTR_DAT_0578b048;
    lVar10 = *(long *)(lVar6 + 0x20);
    while ((plVar8 = (long *)System_Delegate__Remove_23e3b70(lVar10,lVar7,0), plVar8 == (long *)0x0
           || (*plVar8 == *(long *)puVar2))) {
      lVar9 = FUN_01351224((long *)(lVar6 + 0x20),plVar8,lVar10);
      bVar5 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar5) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar8);
  }
LAB_033dc148:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

