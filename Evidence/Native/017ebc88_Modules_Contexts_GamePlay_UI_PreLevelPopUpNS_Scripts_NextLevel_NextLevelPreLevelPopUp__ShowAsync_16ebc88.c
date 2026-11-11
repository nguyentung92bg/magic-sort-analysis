/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.NextLevel.NextLevelPreLevelPopUp$$ShowAsync
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp__ShowAsync (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.NextLevel.NextLevelPreLevelPopUp$$ShowAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp__ShowAsync
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp__ShowAsync_16ebc88
          (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_05798298;
  if ((bRam0000000005c24b24 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c24b24 = 1;
  }
  Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp__Show_16ebc64
            (param_1);
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

