/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.InitializeReturnToHomeWinDailyCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand__ExecuteAsync (Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Loop.Scripts.InitializeReturnToHomeWinDailyCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand__ExecuteAsync
   (Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand__ExecuteAsync_214f68c
          (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_05798298;
                    /* try { // try from 0224f694 to 0234f6d3 has its CatchHandler @ 0224f694
                       catch() { ... } // from try @ 0224f694 with catch @ 0224f694
                       catch() { ... } // from try @ 0224f6e8 with catch @ 0224f694
                       catch() { ... } // from try @ 0224f724 with catch @ 0224f694
                       catch() { ... } // from try @ 0224f764 with catch @ 0224f694 */
  if ((bRam0000000005c29b68 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c29b68 = 1;
  }
  Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeWinDailyCommand__PrepareHomeUi_214f720
            (param_1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 0224f6d4 to 0234f6e7 has its CatchHandler @ 0224f6f4 */
    thunk_FUN_0130472c();
  }
  if (cRam0000000005c244b5 == '\0') {
                    /* try { // try from 0224f6e8 to 0234f70b has its CatchHandler @ 0224f694 */
    FUN_012d0dc8(PTR_DAT_05798298);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0224f6d4 with catch @ 0224f6f4
                        */
    cRam0000000005c244b5 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 0224f70c to 0234f723 has its CatchHandler @ 0224f75c */
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
}

