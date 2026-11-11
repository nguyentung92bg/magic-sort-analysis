/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.AddFriendView$$Dispose
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__Dispose (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.AddFriendView$$Dispose
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__Dispose
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__Dispose_2aecf28
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c2eb86 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030d8);
    FUN_012d0dc8(PTR_DAT_05784de0);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057dd018);
    FUN_012d0dc8(PTR_DAT_057a7f38);
    FUN_012d0dc8(PTR_DAT_057bc658);
    FUN_012d0dc8(PTR_DAT_0580eb50);
    FUN_012d0dc8(PTR_DAT_057d06a0);
    FUN_012d0dc8(PTR_DAT_057ff3c8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0579f280);
    FUN_012d0dc8(PTR_DAT_057902f0);
    bRam0000000005c2eb86 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar4 != 0) &&
     (System_Action___ctor_21239bc(lVar4,param_1,*(undefined8 *)PTR_DAT_0580eb50,0), lVar5 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar5,lVar4,0);
    lVar5 = *(long *)(param_1 + 0x20);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar4 != 0) &&
       (System_Action___ctor_21239bc(lVar4,param_1,*(undefined8 *)PTR_DAT_057dd018,0),
       puVar3 = PTR_DAT_058030d8, puVar2 = PTR_DAT_057d06a0, puVar1 = PTR_DAT_057b8520, lVar5 != 0))
    {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
                (lVar5,lVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar5 != 0) &&
         (System_Action_object____ctor_1647468(lVar5,param_1,*(undefined8 *)PTR_DAT_057a7f38,0),
         puVar2 = PTR_DAT_057ff3c8, puVar1 = PTR_DAT_05784de0, lVar4 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Unsubscribe_333d3e8
                  (lVar4,lVar5,*(undefined8 *)PTR_DAT_0579f280);
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar5 != 0) &&
           (System_Action_object____ctor_1647468(lVar5,param_1,*(undefined8 *)PTR_DAT_057bc658,0),
           lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343d3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057902f0 + 0x20) + 0xc0) +
                                0x10) + 8))(lVar4,lVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

