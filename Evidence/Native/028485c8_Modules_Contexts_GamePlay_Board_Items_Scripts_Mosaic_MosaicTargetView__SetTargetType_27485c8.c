/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$SetTargetType
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetTargetType (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, int32_t targetType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$SetTargetType
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetTargetType
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, int32_t
   targetType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__SetTargetType_27485c8
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x68) = param_2;
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar1 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x60),0), lVar1 != 0
     )) {
    UnityEngine_Transform__get_localPosition_4092c40(lVar1,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetPivotHeight_2745fc4
                (*(long *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x68));
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (lVar1 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x60),0),
         lVar1 != 0)) {
        if (pcRam0000000005c3a620 == (code *)0x0) {
          pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
        }
        (*pcRam0000000005c3a620)(lVar1,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

