/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$<TryPlayToggleAnimation>b__25_3
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___TryPlayToggleAnimation_b__25_3 (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$<TryPlayToggleAnimation>b__25_3
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___TryPlayToggleAnimation_b__25_3
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem___TryPlayToggleAnimation_b__25_3_260a304
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x40), lVar1 != 0)) {
    Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00(lVar1,param_1,0);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelected_2497284
                        (*(long *)(param_1 + 0x50),0);
      if ((uVar2 & 1) != 0) {
        return;
      }
      lVar1 = *(long *)(param_1 + 0x50);
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0xd8) != '\0') {
          return;
        }
        if (*(long *)(param_1 + 0x60) != 0) {
          auVar3 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleSittingSorting_4002958
                             (*(long *)(param_1 + 0x60),*(undefined4 *)(lVar1 + 0xc0),0);
          lVar1 = *(long *)(lVar1 + 0x50);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(long *)(lVar1 + 0x58) != 0) {
            UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                      (*(long *)(lVar1 + 0x58),auVar3._8_8_ & 0xffffffff,0,0);
            lVar1 = *(long *)(lVar1 + 0x58);
            if (lVar1 != 0) {
              if (pcRam0000000005c37828 == (code *)0x0) {
                pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
              }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c37828)(lVar1,auVar3._0_8_);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

