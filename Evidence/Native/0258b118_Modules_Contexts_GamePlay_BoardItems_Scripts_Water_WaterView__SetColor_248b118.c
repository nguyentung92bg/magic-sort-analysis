/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetColor
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetColor (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetColor
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetColor
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetColor_248b118
               (long param_1,long param_2)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__KillColorChangeTweens_248b1c8();
  if ((param_2 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__SetColorSprite_1e9ec14
              (*(long *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x78),0);
    if (*(long *)(param_1 + 0x48) != 0) {
      UnityEngine_SpriteRenderer__set_color_4095de0
                (*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
                 *(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
                 *(long *)(param_1 + 0x48),0);
      if (*(long *)(param_1 + 0x38) != 0) {
        UnityEngine_SpriteRenderer__set_color_4095de0
                  (*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
                   *(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
                   *(long *)(param_1 + 0x38),0);
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_SpriteRenderer__set_color_4095de0
                    (*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
                     *(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
                     *(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x28) != 0) {
            UnityEngine_SpriteRenderer__set_color_4095de0
                      (*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
                       *(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
                       *(long *)(param_1 + 0x28),0);
            lVar1 = *(long *)(param_1 + 0x30);
            if (lVar1 != 0) {
              uStack_28 = *(undefined4 *)(param_2 + 0x58);
              uStack_24 = *(undefined4 *)(param_2 + 0x5c);
              uStack_30 = *(undefined4 *)(param_2 + 0x50);
              uStack_2c = *(undefined4 *)(param_2 + 0x54);
              if (pcRam0000000005c3a788 == (code *)0x0) {
                pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
              }
              (*pcRam0000000005c3a788)(lVar1,&uStack_30);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

