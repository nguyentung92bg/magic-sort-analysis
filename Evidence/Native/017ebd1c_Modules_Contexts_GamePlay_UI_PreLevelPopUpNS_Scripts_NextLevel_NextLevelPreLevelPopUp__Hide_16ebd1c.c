/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.NextLevel.NextLevelPreLevelPopUp$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp__Hide (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.NextLevel.NextLevelPreLevelPopUp$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp__Hide
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_NextLevel_NextLevelPreLevelPopUp__Hide_16ebd1c
          (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000005c24b25 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c24b25 = 1;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

