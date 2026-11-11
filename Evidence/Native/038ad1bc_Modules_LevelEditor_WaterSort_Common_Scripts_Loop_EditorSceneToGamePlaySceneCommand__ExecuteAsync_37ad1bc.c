/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Loop.EditorSceneToGamePlaySceneCommand$$ExecuteAsync
System_Threading_Tasks_Task_o* Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorSceneToGamePlaySceneCommand__ExecuteAsync (Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorSceneToGamePlaySceneCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.Loop.EditorSceneToGamePlaySceneCommand$$ExecuteAsync
   System_Threading_Tasks_Task_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorSceneToGamePlaySceneCommand__ExecuteAsync
   (Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorSceneToGamePlaySceneCommand_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorSceneToGamePlaySceneCommand__ExecuteAsync_37ad1bc
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c33e39 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05777f78);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c33e39 = 1;
  }
  puVar2 = PTR_DAT_05777f78;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_88,0);
  uVar3 = (ulong)&uStack_50 | 8;
  uStack_60 = uStack_78;
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  uStack_40 = uStack_80;
  uStack_48 = uStack_88;
  uStack_38 = uStack_78;
  FUN_012d0d74(uVar3,0);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_EditorSceneToGamePlaySceneCommand__ExecuteAsync_d__0__1e60fd0
            (uVar3,&uStack_50,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

