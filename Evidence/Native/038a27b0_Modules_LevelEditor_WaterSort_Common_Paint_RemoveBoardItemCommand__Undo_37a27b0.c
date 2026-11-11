/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Paint.RemoveBoardItemCommand$$Undo
void Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand__Undo (Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Paint.RemoveBoardItemCommand$$Undo
   void Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand__Undo
   (Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Paint_RemoveBoardItemCommand__Undo_37a27b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
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
  
  puVar1 = PTR_DAT_057ddb30;
  if ((bRam0000000005c33dff & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ddb30);
    bRam0000000005c33dff = 1;
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x18) = uStack_28;
    *(undefined8 *)(lVar3 + 0x10) = uStack_30;
    *(undefined8 *)(lVar3 + 0x28) = uStack_38;
    *(undefined8 *)(lVar3 + 0x20) = uStack_40;
    puVar1 = PTR_DAT_0576e800;
    if ((bRam0000000005c33df5 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05793d48);
      FUN_012d0dc8(PTR_DAT_0576e800);
      bRam0000000005c33df5 = 1;
    }
    puVar2 = PTR_DAT_05793d48;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_78,0);
    uVar4 = (ulong)&uStack_40 | 8;
    uStack_50 = uStack_68;
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    uStack_30 = uStack_70;
    uStack_38 = uStack_78;
    uStack_28 = uStack_68;
    FUN_012d0d74(uVar4,0);
    uStack_40 = CONCAT44(uStack_40._4_4_,0xffffffff);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_AddBoardItemCommand__ExecuteAsync_d__5__1f61b48
              (uVar4,&uStack_40,*(undefined8 *)puVar2);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

