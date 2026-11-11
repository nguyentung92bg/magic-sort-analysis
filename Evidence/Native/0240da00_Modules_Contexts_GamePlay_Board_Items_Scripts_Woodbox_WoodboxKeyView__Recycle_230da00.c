/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$Recycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__Recycle (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$Recycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__Recycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__Recycle_230da00
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000005c2a67f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578cf48);
    bRam0000000005c2a67f = 1;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)PTR_DAT_0578cf48;
    if (pcRam0000000005c28b88 == (code *)0x0) {
      pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar3,0,0);
    }
    uVar1 = (*pcRam0000000005c28b88)(uVar3);
    if (pcRam0000000005c28b70 == (code *)0x0) {
      pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
    }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28b70)(0,lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

