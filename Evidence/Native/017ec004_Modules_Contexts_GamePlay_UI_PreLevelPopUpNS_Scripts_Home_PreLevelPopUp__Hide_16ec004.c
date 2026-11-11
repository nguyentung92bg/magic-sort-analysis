/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.Home.PreLevelPopUp$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp__Hide (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.Home.PreLevelPopUp$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp__Hide
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_Home_PreLevelPopUp__Hide_16ec004
          (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 017ec018 to 018ec01b has its CatchHandler @ 017ec094 */
  if ((bRam0000000005c24b29 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c24b29 = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  puVar1 = PTR_DAT_05798298;
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
                    /* try { // try from 017ec058 to 018ec07f has its CatchHandler @ 017ec0a0 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c244b5 == '\0') {
      FUN_012d0dc8(PTR_DAT_05798298);
                    /* try { // try from 017ec080 to 018ec08b has its CatchHandler @ 017ebebc */
      cRam0000000005c244b5 = '\x01';
    }
    lVar2 = *(long *)puVar1;
                    /* try { // try from 017ec08c to 018ec093 has its CatchHandler @ 017ec0a0 */
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
                    /* catch() { ... } // from try @ 017ec018 with catch @ 017ec094 */
      lVar2 = *(long *)puVar1;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 017ec058 with catch @ 017ec0a0
                       catch(type#2 @ 00000000) { ... } // from try @ 017ec08c with catch @ 017ec0a0
                        */
                    /* try { // try from 017ec0a4 to 018ec137 has its CatchHandler @ 017ec0a4
                       catch() { ... } // from try @ 017ec0a4 with catch @ 017ec0a4
                       catch() { ... } // from try @ 017ec168 with catch @ 017ec0a4
                       catch() { ... } // from try @ 017ec1e4 with catch @ 017ec0a4
                       catch() { ... } // from try @ 017ec26c with catch @ 017ec0a4 */
    return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

