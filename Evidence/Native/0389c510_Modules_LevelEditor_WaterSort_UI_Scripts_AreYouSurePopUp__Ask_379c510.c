/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.AreYouSurePopUp$$Ask
System_Threading_Tasks_Task_AreYouSurePopUpResult__o* Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp__Ask (Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp_o* __this, System_String_o* message, System_String_o* yesText, System_String_o* noText, System_String_o* cancelText, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.AreYouSurePopUp$$Ask
   System_Threading_Tasks_Task_AreYouSurePopUpResult__o*
   Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp__Ask
   (Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp_o* __this, System_String_o* message,
   System_String_o* yesText, System_String_o* noText, System_String_o* cancelText, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp__Ask_379c510
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  puVar2 = PTR_DAT_057f1b20;
  if ((bRam0000000005c33db4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058147a0);
    FUN_012d0dc8(PTR_DAT_05806548);
    FUN_012d0dc8(PTR_DAT_057abf98);
    FUN_012d0dc8(PTR_DAT_057f1b20);
    bRam0000000005c33db4 = 1;
  }
  puVar4 = PTR_DAT_058147a0;
  puVar3 = PTR_DAT_05806548;
  puVar1 = PTR_DAT_057abf98;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Int32Enum___Create_1af29cc
            (&uStack_b8,*(undefined8 *)puVar4);
  uVar5 = (ulong)&uStack_a0 | 8;
  uStack_90 = uStack_b0;
  uStack_98 = uStack_b8;
  uStack_88 = uStack_a8;
  FUN_012d0d74(uVar5,0);
  uStack_80 = param_1;
  FUN_012d0d74(&uStack_80,param_1);
  uStack_60 = param_2;
  FUN_012d0d74(&uStack_60,param_2);
  uStack_78 = param_3;
  FUN_012d0d74(&uStack_78,param_3);
  uStack_70 = param_4;
  FUN_012d0d74(&uStack_70,param_4);
  uStack_68 = param_5;
  FUN_012d0d74(&uStack_68,param_5);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Int32Enum___Start_AreYouSurePopUp__Ask_d__5__35e0b00
            (uVar5,&uStack_a0,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Int32Enum___get_Task_1af29e0
            (uVar5,*(undefined8 *)puVar1);
  return;
}

