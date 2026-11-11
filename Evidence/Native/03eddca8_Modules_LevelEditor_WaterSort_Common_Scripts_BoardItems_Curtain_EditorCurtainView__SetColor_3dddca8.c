/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainView$$SetColor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__SetColor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain.EditorCurtainView$$SetColor
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__SetColor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView_o* __this,
   UnityEngine_Color_o color, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Curtain_EditorCurtainView__SetColor_3dddca8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 03eddcb0 to 03fddcb3 has its CatchHandler @ 03eddcdc */
  if (*(long *)(param_5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *(long *)(*(long *)(param_5 + 0x28) + 0x18);
  if (lVar1 != 0) {
    uStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    uStack_24 = param_4;
    if (pcRam0000000005c3a788 == (code *)0x0) {
      pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
    }
    (*pcRam0000000005c3a788)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,0);
}

