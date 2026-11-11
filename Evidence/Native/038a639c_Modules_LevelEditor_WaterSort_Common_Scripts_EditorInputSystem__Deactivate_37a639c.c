/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Deactivate
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Deactivate (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Deactivate
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Deactivate
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Deactivate_37a639c
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    Modules_Infrastructure_Input_InputService__Deactivate_3d2bce0(*(long *)(param_1 + 0x68),0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a310 == (code *)0x0) {
        pcRam0000000005c3a310 = (code *)FUN_012d0d84(&UNK_043edb77);
      }
                    /* WARNING: Could not recover jumptable at 0x0418d7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a310)(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

