/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, int32_t height, int32_t bottleAndWaterVariant, int32_t frontSortOrder, int32_t backSortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, int32_t height,
   int32_t bottleAndWaterVariant, int32_t frontSortOrder, int32_t backSortOrder, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Prepare_22fbf18
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__SetVariant_22fbafc
              (*(long *)(param_1 + 0x80),param_3);
    if (*(long *)(param_1 + 0x80) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__Hide_22fbce4();
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetBottleHeightAndVariant_22fbfd4
                (param_1,param_2,param_3);
      if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 023fbf74 to 024fbf7b has its CatchHandler @ 023fc0a0 */
        UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x30),param_4,0);
        if (*(long *)(param_1 + 0x38) != 0) {
          UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x38),param_5,0);
          if ((*(long *)(param_1 + 0x100) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
            UnityEngine_Renderer__set_material_4082930
                      (*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x100) + 0x38),
                       0);
            if ((*(long *)(param_1 + 0x100) != 0) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)
               ) {
              uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x38);
              if (pcRam0000000005c39b70 == (code *)0x0) {
                pcRam0000000005c39b70 = (code *)FUN_012d0d84(&UNK_043ea959);
              }
                    /* WARNING: Could not recover jumptable at 0x04182970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c39b70)(lVar1,uVar2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

