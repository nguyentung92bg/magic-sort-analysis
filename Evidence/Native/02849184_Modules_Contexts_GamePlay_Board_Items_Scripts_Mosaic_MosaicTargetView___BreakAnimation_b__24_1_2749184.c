/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$<BreakAnimation>b__24_1
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView___BreakAnimation_b__24_1 (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$<BreakAnimation>b__24_1
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView___BreakAnimation_b__24_1
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView___BreakAnimation_b__24_1_2749184
               (long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
      lVar1 != 0)) && (lVar1 = UnityEngine_GameObject__get_transform_408e25c(lVar1,0), lVar1 != 0))
  {
    UnityEngine_Transform__set_parent_40933e0(lVar1,*(undefined8 *)(param_1 + 0x90),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar1 != 0) {
        puVar2 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uStack_30 = *puVar2;
        uStack_2c = puVar2[1];
        uStack_28 = puVar2[2];
        if (pcRam0000000005c3a620 == (code *)0x0) {
          pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
        }
        (*pcRam0000000005c3a620)(lVar1,&uStack_30);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

