/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$MarkAsBeingFilled
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__MarkAsBeingFilled (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$MarkAsBeingFilled
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__MarkAsBeingFilled
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__MarkAsBeingFilled_274e4e0
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000005c2c6d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e0d0);
    bRam0000000005c2c6d5 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar5 = *(long *)PTR_DAT_0577e0d0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = param_2;
        FUN_012d0d74(puVar4,param_2);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar2,param_2);
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        auVar6 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetIceFillingSorting_4002ae0
                           (*(long *)(param_1 + 0x80),0);
        lVar2 = *(long *)(param_1 + 0x48);
        if (lVar2 != 0) {
          if (*(long *)(lVar2 + 0x20) != 0) {
            UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                      (*(long *)(lVar2 + 0x20),auVar6._8_8_ & 0xffffffff,0);
            lVar2 = *(long *)(lVar2 + 0x20);
            if (lVar2 != 0) {
              if (pcRam0000000005c37828 == (code *)0x0) {
                pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
              }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c37828)(lVar2,auVar6._0_8_);
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

