/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlot$$Initialize
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__Initialize (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* __this, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData, UnityEngine_Vector3_o slotPosition, UnityEngine_Vector3_o slotScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlot$$Initialize
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__Initialize
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* itemData, UnityEngine_Vector3_o
   slotPosition, UnityEngine_Vector3_o slotScale, const MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__Initialize_218ad54
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  
  if ((param_5 != 0) && (*(long *)(param_4 + 0x18) != 0)) {
    UnityEngine_SpriteRenderer__set_sprite_4095b64
              (*(long *)(param_4 + 0x18),*(undefined8 *)(param_5 + 0x28),0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_localPosition_4092ce0(param_1,param_2,param_3,lVar1,0);
      lVar1 = UnityEngine_Component__get_transform_408b444(param_4,0);
      if (lVar1 != 0) {
        if (pcRam0000000005c3a650 == (code *)0x0) {
          pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
        }
        (*pcRam0000000005c3a650)(lVar1,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

