/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnBottleDeselectedAsOrigin
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBottleDeselectedAsOrigin (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnBottleDeselectedAsOrigin
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBottleDeselectedAsOrigin
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBottleDeselectedAsOrigin_274fa78
               (long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (*(long *)(param_1 + 0x60) != 0) {
    auVar2 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                       (*(long *)(param_1 + 0x60),0);
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 0x20) != 0) {
        UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                  (*(long *)(lVar1 + 0x20),auVar2._8_8_ & 0xffffffff,0);
        lVar1 = *(long *)(lVar1 + 0x20);
        if (lVar1 != 0) {
          if (pcRam0000000005c37828 == (code *)0x0) {
            pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
          }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c37828)(lVar1,auVar2._0_8_);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

