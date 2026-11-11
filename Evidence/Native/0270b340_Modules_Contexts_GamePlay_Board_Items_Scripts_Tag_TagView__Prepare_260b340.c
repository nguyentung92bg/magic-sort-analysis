/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t colorId, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView__Prepare_260b340
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView__SetSorting_260c044();
  if ((*(long *)(param_1 + 0x28) != 0) && (lVar2 = *(long *)(param_1 + 0x30), lVar2 != 0)) {
    uVar1 = Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets__GetRope1Sprite_260bcd8
                      (*(long *)(param_1 + 0x28),param_4);
    UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar2,uVar1,0);
    if ((*(long *)(param_1 + 0x28) != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
      uVar1 = Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets__GetRope2Sprite_260bd98
                        (*(long *)(param_1 + 0x28),param_4);
      UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar2,uVar1,0);
      if ((*(long *)(param_1 + 0x28) != 0) && (lVar2 = *(long *)(param_1 + 0x40), lVar2 != 0)) {
        uVar1 = Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets__GetTagSprite_260be58
                          (*(long *)(param_1 + 0x28),param_4);
        if (pcRam0000000005c3a730 == (code *)0x0) {
          pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
        }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a730)(lVar2,uVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

