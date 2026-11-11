/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Plaster.EditorPlasterView$$Initialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__Initialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Plaster.EditorPlasterView$$Initialize
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__Initialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__Initialize_37b3d10
               (long *param_1)

{
  long lVar1;
  
  if ((param_1[4] != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1[4],0), lVar1 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x038b3d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

