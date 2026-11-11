/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUp$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp__Hide (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUp$$Hide
   System_Threading_Tasks_Task_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp__Hide
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp_o* __this, const MethodInfo* method); */

undefined8 Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp__Hide_3e22b24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000005c38121 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c38121 = 1;
  }
  puVar1 = PTR_DAT_05798298;
  if (*(long *)(param_1 + 0x28) != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
              (*(long *)(param_1 + 0x28),1,*(undefined8 *)PTR_DAT_057b3270);
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

