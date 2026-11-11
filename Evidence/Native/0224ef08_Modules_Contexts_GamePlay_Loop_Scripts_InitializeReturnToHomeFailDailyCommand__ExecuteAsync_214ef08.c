/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.InitializeReturnToHomeFailDailyCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeFailDailyCommand__ExecuteAsync (Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeFailDailyCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Loop.Scripts.InitializeReturnToHomeFailDailyCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeFailDailyCommand__ExecuteAsync
   (Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeFailDailyCommand_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeFailDailyCommand__ExecuteAsync_214ef08
          (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_05798298;
  if ((bRam0000000005c29b62 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c29b62 = 1;
  }
  Modules_Contexts_GamePlay_Loop_Scripts_InitializeReturnToHomeFailDailyCommand__PrepareHomeUi_214ef9c
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

