/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBottomLeftBottle
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottomLeftBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBottomLeftBottle
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottomLeftBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottomLeftBottle_2f6b358
          (long param_1)

{
  long lVar1;
  
  if ((bRam0000000005c3092c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c3092c = 1;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar1 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),0,*(undefined8 *)PTR_DAT_057b0e08), lVar1 == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,0,*(undefined8 *)PTR_DAT_057b43e8);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      return *(undefined8 *)(lVar1 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

