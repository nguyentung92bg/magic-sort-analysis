/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$Dispose
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Dispose (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$Dispose
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Dispose
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Dispose_2aed9f4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c2eb93 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5f50);
    FUN_012d0dc8(PTR_DAT_0576ea70);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057bafd8);
    FUN_012d0dc8(PTR_DAT_05785d60);
    FUN_012d0dc8(PTR_DAT_0579e658);
    FUN_012d0dc8(PTR_DAT_057ef088);
    FUN_012d0dc8(PTR_DAT_057e60d0);
    FUN_012d0dc8(PTR_DAT_0579d950);
    FUN_012d0dc8(PTR_DAT_0575c690);
    FUN_012d0dc8(PTR_DAT_057b6cc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05759380);
    FUN_012d0dc8(PTR_DAT_057638b0);
    bRam0000000005c2eb93 = 1;
  }
  puVar1 = PTR_DAT_057e60d0;
  puVar3 = PTR_DAT_0578b048;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar6 != 0) &&
     (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057bafd8,0),
     puVar3 = PTR_DAT_057d5f50, puVar2 = PTR_DAT_0579d950, lVar5 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar5,lVar6,0);
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar6 != 0) &&
       (System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)PTR_DAT_05785d60,0),
       puVar4 = PTR_DAT_057b6cc8, puVar1 = PTR_DAT_0576ea70, puVar2 = PTR_DAT_057638b0, lVar5 != 0))
    {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Unsubscribe_333d3e8
                (lVar5,lVar6,*(undefined8 *)PTR_DAT_057638b0);
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar4);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar6 != 0) &&
         (System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)PTR_DAT_057ef088,0),
         puVar1 = PTR_DAT_0575c690, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Unsubscribe_333d3e8
                  (lVar5,lVar6,*(undefined8 *)PTR_DAT_05759380);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar6 != 0) &&
           (System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)PTR_DAT_0579e658,0),
           lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343d3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x10) + 8))
                    (lVar5,lVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

