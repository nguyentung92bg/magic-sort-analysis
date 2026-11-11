/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleView$$Show
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__Show (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleView$$Show
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__Show
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__Show_37b28b0
               (undefined8 param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038b28d0 to 039b28d7 has its CatchHandler @ 038b2e6c */
  FUN_012d0ef0();
}

