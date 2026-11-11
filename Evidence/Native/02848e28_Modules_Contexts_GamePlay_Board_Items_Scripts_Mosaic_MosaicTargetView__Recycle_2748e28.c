/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$Recycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__Recycle (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$Recycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__Recycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__Recycle_2748e28
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0), lVar1 != 0
     )) {
    lVar1 = UnityEngine_GameObject__get_transform_408e25c(lVar1,0);
    uVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_parent_40933e0(lVar1,uVar2,0);
      plVar3 = *(long **)(param_1 + 0x48);
      *(undefined1 *)(param_1 + 0x9c) = 0;
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02848e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

