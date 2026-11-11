/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__Prepare_260b2c4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined8 *)(param_4 + 0x50) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  if (param_8 != 0) {
    uVar1 = *(undefined4 *)(param_8 + 0x70);
    lVar2 = *(long *)(param_4 + 0x48);
    *(undefined4 *)(param_4 + 0x34) = param_1;
    *(undefined4 *)(param_4 + 0x38) = param_2;
    *(undefined4 *)(param_4 + 0x3c) = param_3;
    *(undefined4 *)(param_4 + 0x58) = uVar1;
    if (lVar2 != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView__SetSorting_260c044
                (lVar2,param_5,param_6);
      if ((*(long *)(lVar2 + 0x28) != 0) && (lVar4 = *(long *)(lVar2 + 0x30), lVar4 != 0)) {
        uVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets__GetRope1Sprite_260bcd8
                          (*(long *)(lVar2 + 0x28),uVar1);
        UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar4,uVar3,0);
        if ((*(long *)(lVar2 + 0x28) != 0) && (lVar4 = *(long *)(lVar2 + 0x38), lVar4 != 0)) {
          uVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets__GetRope2Sprite_260bd98
                            (*(long *)(lVar2 + 0x28),uVar1);
          UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar4,uVar3,0);
          if ((*(long *)(lVar2 + 0x28) != 0) && (lVar4 = *(long *)(lVar2 + 0x40), lVar4 != 0)) {
            uVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets__GetTagSprite_260be58
                              (*(long *)(lVar2 + 0x28),uVar1);
            if (pcRam0000000005c3a730 == (code *)0x0) {
              pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
            }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a730)(lVar4,uVar3);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

