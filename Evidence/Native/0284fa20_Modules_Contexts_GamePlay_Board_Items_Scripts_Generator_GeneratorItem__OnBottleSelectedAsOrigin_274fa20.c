/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnBottleSelectedAsOrigin
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBottleSelectedAsOrigin (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnBottleSelectedAsOrigin
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBottleSelectedAsOrigin
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBottleSelectedAsOrigin_274fa20
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                      (*(long *)(param_1 + 0x50),0);
    *(undefined4 *)(param_1 + 0x80) = uVar1;
    if (*(long *)(param_1 + 0x60) != 0) {
      auVar3 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSelectedBottleOriginSorting_4002894
                         (*(long *)(param_1 + 0x60),200,0);
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x20) != 0) {
          UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                    (*(long *)(lVar2 + 0x20),auVar3._8_8_ & 0xffffffff,0);
          lVar2 = *(long *)(lVar2 + 0x20);
          if (lVar2 != 0) {
            if (pcRam0000000005c37828 == (code *)0x0) {
              pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
            }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c37828)(lVar2,auVar3._0_8_);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

