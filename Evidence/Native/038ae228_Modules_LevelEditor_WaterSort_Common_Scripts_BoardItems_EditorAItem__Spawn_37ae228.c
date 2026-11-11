/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorAItem$$Spawn
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Spawn (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorAItem$$Spawn
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Spawn
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Spawn_37ae228
               (long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
                    /* WARNING: Could not recover jumptable at 0x038ae254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

