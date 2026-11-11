/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyQuitPopUp$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__Hide (Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyQuitPopUp$$Hide
   System_Threading_Tasks_Task_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__Hide
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp_o* __this, const MethodInfo* method); */

undefined8 Modules_Contexts_Home_Daily_Scripts_UI_DailyQuitPopUp__Hide_3e22608(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c3811d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05809548);
    FUN_012d0dc8(PTR_DAT_05768bd8);
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c3811d = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_05809548,0), lVar3 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar3,lVar2,0);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar2 != 0) &&
       (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_05768bd8,0), lVar3 != 0))
    {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
                (lVar3,lVar2,0);
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar2,0,0);
      }
      puVar1 = PTR_DAT_05798298;
      *(undefined8 *)(param_1 + 0x40) = 0;
      FUN_012d0d74((long *)(param_1 + 0x40),0);
      if (*(long *)(param_1 + 0x38) != 0) {
        System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
                  (*(long *)(param_1 + 0x38),1,*(undefined8 *)PTR_DAT_057b3270);
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (cRam0000000005c244b5 == '\0') {
        FUN_012d0dc8(PTR_DAT_05798298);
        cRam0000000005c244b5 = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar2 = *(long *)puVar1;
      }
      return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

