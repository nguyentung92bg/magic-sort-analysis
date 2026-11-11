/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitRiseClip
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRiseClip (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitRiseClip
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRiseClip
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t index,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRiseClip_2612524
               (long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSitRiseAnimation_260e80c
                    ();
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    if (pcRam0000000005c28b88 == (code *)0x0) {
      pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar2,0xffffffff);
    }
    uVar1 = (*pcRam0000000005c28b88)(uVar2);
    if (pcRam0000000005c28b70 == (code *)0x0) {
      pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
    }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28b70)(0xff800000,lVar3,uVar1,0xffffffff);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

