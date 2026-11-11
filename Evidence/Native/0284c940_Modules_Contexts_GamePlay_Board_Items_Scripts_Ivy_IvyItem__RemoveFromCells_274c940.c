/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$RemoveFromCells
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__RemoveFromCells (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$RemoveFromCells
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__RemoveFromCells
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__RemoveFromCells_274c940
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam0000000005c2c6cb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2c6cb = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x80), lVar3 != 0)) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar4 = 0;
      do {
        if (*(int *)(param_1 + 0x68) <= iVar4) {
          lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar3,iVar4,*(undefined8 *)puVar1);
          if (lVar2 == 0) goto LAB_0284c9f0;
          Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__RemoveBlocker_1e90d64(lVar2,param_1,0)
          ;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar3 + 0x18));
    }
    return;
  }
LAB_0284c9f0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

