/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorExtensions$$InitializeEditor
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorExtensions__InitializeEditor (Modules_Infrastructure_Common_Scripts_Component_AItem_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorExtensions$$InitializeEditor
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorExtensions__InitializeEditor
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* item, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorExtensions__InitializeEditor_37a38d4
               (long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
                    /* WARNING: Could not recover jumptable at 0x041e9d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,0);
}

