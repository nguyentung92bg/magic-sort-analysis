/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck.EditorDuckView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t duckType, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Duck_EditorDuckView__Prepare_3ddd7c8
               (long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= param_4 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x20),
                 *(undefined8 *)(lVar1 + (long)(int)(param_4 - 1U) * 8 + 0x20),0);
      if (*(long *)(param_1 + 0x20) != 0) {
        UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),param_3,0);
        lVar1 = *(long *)(param_1 + 0x20);
        if (lVar1 != 0) {
          if (pcRam0000000005c39c20 == (code *)0x0) {
            pcRam0000000005c39c20 = (code *)FUN_012d0d84(&UNK_043eaefb);
          }
                    /* WARNING: Could not recover jumptable at 0x0418263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c39c20)(lVar1,param_2);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

