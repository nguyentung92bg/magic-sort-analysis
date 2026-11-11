/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Loop.BootstrapEditorContextCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_LevelEditor_WaterSort_Common_Loop_BootstrapEditorContextCommand__ExecuteAsync (Modules_LevelEditor_WaterSort_Common_Loop_BootstrapEditorContextCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Loop.BootstrapEditorContextCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_LevelEditor_WaterSort_Common_Loop_BootstrapEditorContextCommand__ExecuteAsync
   (Modules_LevelEditor_WaterSort_Common_Loop_BootstrapEditorContextCommand_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Loop_BootstrapEditorContextCommand__ExecuteAsync_37a2940
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c33e02 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579e568);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c33e02 = 1;
  }
  puVar2 = PTR_DAT_0579e568;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_78,0);
  uVar3 = (ulong)&uStack_40 | 8;
  uStack_50 = uStack_68;
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  uStack_30 = uStack_70;
  uStack_38 = uStack_78;
  uStack_28 = uStack_68;
  FUN_012d0d74(uVar3,0);
  uStack_40 = CONCAT44(uStack_40._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_BootstrapEditorContextCommand__ExecuteAsync_d__0__1f638bc
            (uVar3,&uStack_40,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

