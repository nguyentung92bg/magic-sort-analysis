/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowView$$Hide
void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView__Hide (Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow.RainbowView$$Hide
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView__Hide
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowView__Hide_27457b4
               (undefined8 param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

