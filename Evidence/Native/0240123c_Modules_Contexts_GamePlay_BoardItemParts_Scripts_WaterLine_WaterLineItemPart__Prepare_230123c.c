/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.WaterLine.WaterLineItemPart$$Prepare
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart__Prepare (Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.WaterLine.WaterLineItemPart$$Prepare
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart__Prepare
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart_o* __this,
   UnityEngine_Color_o color, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart__Prepare_230123c
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    UnityEngine_SpriteRenderer__set_color_4095de0(*(long *)(lVar1 + 0x20),0);
    if (*(long *)(lVar1 + 0x20) != 0) {
      UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar1 + 0x20),2,0);
      lVar1 = *(long *)(lVar1 + 0x20);
      if (lVar1 != 0) {
        if (pcRam0000000005c39bb8 == (code *)0x0) {
          pcRam0000000005c39bb8 = (code *)FUN_012d0d84(&UNK_043eabe3);
        }
                    /* WARNING: Could not recover jumptable at 0x041822f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c39bb8)(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

