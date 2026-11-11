/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$UnmarkAsBeingFilled
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__UnmarkAsBeingFilled (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$UnmarkAsBeingFilled
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__UnmarkAsBeingFilled
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__UnmarkAsBeingFilled_274e5b8
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000005c2c6d6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057beca8);
    FUN_012d0dc8(PTR_DAT_05813f90);
    bRam0000000005c2c6d6 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    System_Collections_Generic_List_object___Remove_21fe044
              (*(long *)(param_1 + 0x78),param_2,*(undefined8 *)PTR_DAT_057beca8);
    if (*(long *)(param_1 + 0x78) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x78) + 0x18) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        auVar2 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                           (*(long *)(param_1 + 0x80),0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

