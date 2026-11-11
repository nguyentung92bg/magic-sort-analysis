/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$SetToggleItemSorting
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetToggleItemSorting (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$SetToggleItemSorting
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetToggleItemSorting
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetToggleItemSorting_260ae30
               (long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    lVar1 = 0xb8;
    if (*(char *)(param_1 + 0x118) != '\0') {
      lVar1 = 0xa8;
    }
    uVar2 = *(undefined4 *)(param_1 + lVar1);
    if (pcRam0000000005c37840 == (code *)0x0) {
      pcRam0000000005c37840 = (code *)FUN_012d0d84(&UNK_043e4dbb);
    }
                    /* WARNING: Could not recover jumptable at 0x03e5ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c37840)(lVar3,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

