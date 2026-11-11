/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$IsSelectableAsOrigin
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__IsSelectableAsOrigin (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$IsSelectableAsOrigin
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__IsSelectableAsOrigin
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this, const MethodInfo* method);
    */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__IsSelectableAsOrigin_274c7a0
               (long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    iVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetFillAmount_2499c48
                      (*(long *)(param_1 + 0x50),0);
    return *(int *)(param_1 + 0x68) < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

