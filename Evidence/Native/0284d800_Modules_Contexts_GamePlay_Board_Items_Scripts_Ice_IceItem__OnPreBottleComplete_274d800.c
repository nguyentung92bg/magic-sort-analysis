/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$OnPreBottleComplete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__OnPreBottleComplete (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$OnPreBottleComplete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__OnPreBottleComplete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__OnPreBottleComplete_274d800
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c2c6d3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c2c6d3 = 1;
  }
  puVar1 = PTR_DAT_057b43e8;
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == param_2) {
        *(int *)(param_1 + 0x68) = iVar3;
        return;
      }
      lVar2 = *(long *)(param_1 + 0x58);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

