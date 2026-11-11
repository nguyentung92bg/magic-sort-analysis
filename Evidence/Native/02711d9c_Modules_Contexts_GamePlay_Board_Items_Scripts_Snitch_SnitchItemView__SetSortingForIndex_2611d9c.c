/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$SetSortingForIndex
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetSortingForIndex (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$SetSortingForIndex
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetSortingForIndex
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t index,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetSortingForIndex_2611d9c
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSortOrderForIndex_20fa2e0
                      (*(long *)(param_1 + 0x38),param_2,0);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      if (pcRam0000000005c37840 == (code *)0x0) {
        pcRam0000000005c37840 = (code *)FUN_012d0d84(&UNK_043e4dbb);
      }
                    /* WARNING: Could not recover jumptable at 0x03e5ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c37840)(lVar2,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

