/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.InLevel.InLevelPreLevelPopUp$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevel_InLevelPreLevelPopUp__Hide (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevel_InLevelPreLevelPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.InLevel.InLevelPreLevelPopUp$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevel_InLevelPreLevelPopUp__Hide
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevel_InLevelPreLevelPopUp_o* __this,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevel_InLevelPreLevelPopUp__Hide_16ebe90
          (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000005c24b27 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c24b27 = 1;
  }
                    /* try { // try from 017ebebc to 018ebf4f has its CatchHandler @ 017ebebc
                       catch() { ... } // from try @ 017ebebc with catch @ 017ebebc
                       catch() { ... } // from try @ 017ebf7c with catch @ 017ebebc
                       catch() { ... } // from try @ 017ebff8 with catch @ 017ebebc
                       catch() { ... } // from try @ 017ec080 with catch @ 017ebebc */
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

