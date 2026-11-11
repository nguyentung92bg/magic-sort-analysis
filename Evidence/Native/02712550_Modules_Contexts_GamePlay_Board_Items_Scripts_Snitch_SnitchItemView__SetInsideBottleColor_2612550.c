/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$SetInsideBottleColor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetInsideBottleColor (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$SetInsideBottleColor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetInsideBottleColor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetInsideBottleColor_2612550
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = _UNK_04359fcc;
  if (*(long *)(param_1 + 0x88) != 0) {
    UnityEngine_SpriteRenderer__set_color_4095de0
              (0x3f800000,0x3f800000,0x3f800000,_UNK_04359fcc,*(long *)(param_1 + 0x88),0);
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar2 != 0) {
      uStack_30 = 0x3f800000;
      uStack_2c = 0x3f800000;
      uStack_28 = 0x3f800000;
      uStack_24 = uVar1;
      if (pcRam0000000005c3a788 == (code *)0x0) {
        pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
      }
      (*pcRam0000000005c3a788)(lVar2,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

