/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.TestButton$$OnClick
void Modules_LevelEditor_WaterSort_UI_Scripts_TestButton__OnClick (Modules_LevelEditor_WaterSort_UI_Scripts_TestButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.TestButton$$OnClick
   void Modules_LevelEditor_WaterSort_UI_Scripts_TestButton__OnClick
   (Modules_LevelEditor_WaterSort_UI_Scripts_TestButton_o* __this, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_TestButton__OnClick_379ff1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33dd4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789328);
    FUN_012d0dc8(PTR_DAT_05765be8);
    FUN_012d0dc8(PTR_DAT_057f4dd8);
    FUN_012d0dc8(PTR_DAT_05783010);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c33dd4 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 == 0)) ||
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_05783010), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__IsLevelValid_379edf0();
  puVar2 = PTR_DAT_05789328;
  puVar1 = PTR_DAT_05765be8;
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_057f4dd8 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = Modules_Infrastructure_Common_Scripts_CommandNS_CommandPool__GetCommand_object__27202f8
                    (*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  puVar1 = PTR_DAT_05789328;
  if ((bRam0000000005c3aa9b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789328,0);
    FUN_012d0dc8(PTR_DAT_057d7510);
    bRam0000000005c3aa9b = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    System_Collections_Generic_Queue_object___Enqueue_3368ec8
              (**(long **)(lVar3 + 0xb8),uVar5,*(undefined8 *)PTR_DAT_057d7510);
    if (*(char *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) != '\0') {
      return;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar1 = PTR_DAT_057c1ea0;
    if ((bRam0000000005c3aa9c & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057c1ea0);
      bRam0000000005c3aa9c = 1;
    }
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_a0,0);
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    uStack_50 = uStack_98;
    uStack_58 = uStack_a0;
    uStack_40 = uStack_88;
    uStack_48 = uStack_90;
    FUN_012d0d74((ulong)&uStack_60 | 8,0);
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_CommandExecutor__ExecuteNextCommand_d__3__216c1d4
              ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

