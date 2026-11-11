/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$SetBackgroundPath
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__SetBackgroundPath (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, System_String_o* backgroundPath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$SetBackgroundPath
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__SetBackgroundPath
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, System_String_o*
   backgroundPath, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__SetBackgroundPath_379fb8c
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_058007e8;
  if ((bRam0000000005c33e1d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058007e8);
    FUN_012d0dc8(PTR_DAT_057afe68);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05814b68);
    FUN_012d0dc8(PTR_DAT_057fcdb8);
    bRam0000000005c33e1d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if (cRam0000000005c33e8b == '\0') {
    FUN_012d0dc8(PTR_DAT_058007e8);
    cRam0000000005c33e8b = '\x01';
  }
  puVar2 = PTR_DAT_057b8520;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar3 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_057afe68;
  puVar4 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  *puVar4 = param_2;
  FUN_012d0d74(puVar4,param_2);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05814b68 + 0x20) + 0xc0) + 0x20) +
                  8))(*(long *)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_057fcdb8);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

