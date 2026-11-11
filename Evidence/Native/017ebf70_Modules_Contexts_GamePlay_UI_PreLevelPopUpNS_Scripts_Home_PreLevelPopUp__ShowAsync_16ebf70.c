/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.Home.PreLevelPopUp$$ShowAsync
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp__ShowAsync (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.Home.PreLevelPopUp$$ShowAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp__ShowAsync
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp__ShowAsync_16ebf70
          (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_05798298;
                    /* try { // try from 017ebf7c to 018ebff3 has its CatchHandler @ 017ebebc */
  if ((bRam0000000005c24b28 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c24b28 = 1;
  }
  Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp__Show_16ebf4c(param_1);
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
                    /* try { // try from 017ebff4 to 018ebff7 has its CatchHandler @ 017ec000 */
                    /* try { // try from 017ebff8 to 018ec017 has its CatchHandler @ 017ebebc */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017ebf50 with catch @ 017ec000
                       catch(type#1 @ 054cbd58) { ... } // from try @ 017ebff4 with catch @ 017ec000
                        */
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
}

