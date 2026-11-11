/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Plaster.EditorPlasterView$$HidePlasterStaticView
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__HidePlasterStaticView (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Plaster.EditorPlasterView$$HidePlasterStaticView
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__HidePlasterStaticView
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__HidePlasterStaticView_37b3d54
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a730 == (code *)0x0) {
      pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
    }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a730)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

