/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.AddFriendView$$Initialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__Initialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.AddFriendView$$Initialize
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__Initialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__Initialize_2aecc98
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eb85 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030d8);
    FUN_012d0dc8(PTR_DAT_05784de0);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057dd018);
    FUN_012d0dc8(PTR_DAT_057a7f38);
    FUN_012d0dc8(PTR_DAT_057bc658);
    FUN_012d0dc8(PTR_DAT_0580eb50);
    FUN_012d0dc8(PTR_DAT_057ee3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057d06a0);
    FUN_012d0dc8(PTR_DAT_057ff3c8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05779bb0);
    FUN_012d0dc8(PTR_DAT_058120d8);
    bRam0000000005c2eb85 = 1;
  }
  puVar2 = PTR_DAT_0578b048;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) {
    uVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar4,*(undefined8 *)PTR_DAT_057ee3f0);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    FUN_012d0d74((undefined8 *)(param_1 + 0x48),uVar5);
    lVar6 = *(long *)(param_1 + 0x18);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar4 != 0) &&
       (System_Action___ctor_21239bc(lVar4,param_1,*(undefined8 *)PTR_DAT_0580eb50,0), lVar6 != 0))
    {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                (lVar6,lVar4,0);
      lVar6 = *(long *)(param_1 + 0x20);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar4 != 0) &&
         (System_Action___ctor_21239bc(lVar4,param_1,*(undefined8 *)PTR_DAT_057dd018,0),
         puVar3 = PTR_DAT_058030d8, puVar2 = PTR_DAT_057d06a0, puVar1 = PTR_DAT_057b8520, lVar6 != 0
         )) {
        Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                  (lVar6,lVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar6 != 0) &&
           (System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)PTR_DAT_057a7f38,0),
           puVar2 = PTR_DAT_057ff3c8, puVar1 = PTR_DAT_05784de0, lVar4 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Subscribe_333d3d4
                    (lVar4,lVar6,*(undefined8 *)PTR_DAT_058120d8);
          lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if ((lVar6 != 0) &&
             (System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)PTR_DAT_057bc658,0),
             lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05779bb0 + 0x20) + 0xc0) + 8
                                  ) + 8))(lVar4,lVar6);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

