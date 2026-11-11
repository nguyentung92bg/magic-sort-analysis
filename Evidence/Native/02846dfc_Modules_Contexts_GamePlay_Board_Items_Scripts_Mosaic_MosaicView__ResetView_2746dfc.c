/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$ResetView
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__ResetView (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$ResetView
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__ResetView
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__ResetView_2746dfc
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x68),0,0);
  }
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    if (pcRam0000000005c28be8 == (code *)0x0) {
      pcRam0000000005c28be8 = (code *)FUN_012d0d84(&UNK_0438d18b);
    }
                    /* WARNING: Could not recover jumptable at 0x02079ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28be8)(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

