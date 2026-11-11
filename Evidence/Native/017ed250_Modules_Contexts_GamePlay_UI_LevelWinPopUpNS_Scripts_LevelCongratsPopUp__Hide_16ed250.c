/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelCongratsPopUp$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__Hide (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelCongratsPopUp$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__Hide
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelCongratsPopUp__Hide_16ed250(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c24b36 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057f6b60);
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c24b36 = 1;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    lVar3 = *(long *)(param_1 + 0x38);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578b048);
    if ((lVar2 == 0) ||
       (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_057f6b60,0), lVar3 == 0))
    goto LAB_017ed39c;
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar3,lVar2,0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x18),0,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x28),0,0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x20),0,0);
  }
  lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  puVar1 = PTR_DAT_05798298;
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
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
LAB_017ed39c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

