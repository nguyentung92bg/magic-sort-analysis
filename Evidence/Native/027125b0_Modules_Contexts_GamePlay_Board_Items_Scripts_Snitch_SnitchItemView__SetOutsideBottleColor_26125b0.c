/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$SetOutsideBottleColor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetOutsideBottleColor (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$SetOutsideBottleColor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetOutsideBottleColor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetOutsideBottleColor_26125b0
               (long param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    UnityEngine_SpriteRenderer__set_color_4095de0
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(long *)(param_1 + 0x88),0);
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar1 != 0) {
      uStack_30 = 0x3f800000;
      uStack_2c = 0x3f800000;
      uStack_28 = 0x3f800000;
      uStack_24 = 0x3f800000;
      if (pcRam0000000005c3a788 == (code *)0x0) {
        pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
      }
      (*pcRam0000000005c3a788)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

