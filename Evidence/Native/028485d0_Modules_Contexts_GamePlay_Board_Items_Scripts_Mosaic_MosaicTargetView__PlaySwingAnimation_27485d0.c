/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$PlaySwingAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__PlaySwingAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$PlaySwingAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__PlaySwingAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__PlaySwingAnimation_27485d0
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000005c2c6ab & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e6e60);
    bRam0000000005c2c6ab = 1;
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    return;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0xa8), lVar1 != 0)) {
    lVar3 = *(long *)(param_1 + 0x70);
    lVar1 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar1,*(undefined4 *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_057e6e60);
    if ((lVar1 != 0) && (uVar2 = UnityEngine_Object__get_name_4078cb0(lVar1,0), lVar3 != 0)) {
      if (pcRam0000000005c28c10 == (code *)0x0) {
        pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28c10)(lVar3,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

