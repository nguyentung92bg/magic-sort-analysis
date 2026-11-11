/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.AreYouSurePopUp$$Cancel
void Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp__Cancel (Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.AreYouSurePopUp$$Cancel
   void Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp__Cancel
   (Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp_o* __this, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_UI_Scripts_AreYouSurePopUp__Cancel_379c760(long param_1)

{
  long lVar1;
  
  if ((bRam0000000005c33db7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057615d0);
    bRam0000000005c33db7 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Threading_Tasks_TaskCompletionSource_Int32Enum___SetResult_1db59d8
              (*(long *)(param_1 + 0x18),0,*(undefined8 *)PTR_DAT_057615d0);
    lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

