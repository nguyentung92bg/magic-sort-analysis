/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorAItem$$Recycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorAItem$$Recycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848
               (long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
  (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  lVar2 = param_1[2];
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x038a3890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28))
    ;
    return;
  }
  return;
}

