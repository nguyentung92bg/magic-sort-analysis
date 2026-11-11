/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayView$$SetSprite
void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__SetSprite (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayView$$SetSprite
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__SetSprite
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__SetSprite_2491e60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    UnityEngine_SpriteRenderer__set_sprite_4095b64
              (*(long *)(param_1 + 0x20),*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),0);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x20),0);
      lVar2 = *(long *)(param_1 + 0x40);
      if ((lVar2 != 0) && (lVar1 != 0)) {
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x30),
                   *(undefined4 *)(lVar2 + 0x34),lVar1,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x20),0);
          lVar2 = *(long *)(param_1 + 0x40);
          if ((lVar2 != 0) && (lVar1 != 0)) {
            uStack_2c = *(undefined4 *)(lVar2 + 0x24);
            uStack_28 = *(undefined4 *)(lVar2 + 0x28);
            uStack_30 = *(undefined4 *)(lVar2 + 0x20);
            if (pcRam0000000005c3a620 == (code *)0x0) {
              pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
            }
            (*pcRam0000000005c3a620)(lVar1,&uStack_30);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

