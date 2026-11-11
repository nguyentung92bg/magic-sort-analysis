/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Paint.RemoveBoardItemCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand__ExecuteAsync (Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Paint.RemoveBoardItemCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand__ExecuteAsync
   (Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand__ExecuteAsync_37a26e4(void)

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
  if ((bRam0000000005c33dfe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bf340);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c33dfe = 1;
  }
  puVar2 = PTR_DAT_057bf340;
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
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_RemoveBoardItemCommand__ExecuteAsync_d__5__1e6ea2c
            (uVar3,&uStack_40,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

