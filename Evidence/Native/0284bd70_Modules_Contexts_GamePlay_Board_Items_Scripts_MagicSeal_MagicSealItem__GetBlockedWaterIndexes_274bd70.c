/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$GetBlockedWaterIndexes
System_Collections_Generic_List_int__o* Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__GetBlockedWaterIndexes (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$GetBlockedWaterIndexes
   System_Collections_Generic_List_int__o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__GetBlockedWaterIndexes
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__GetBlockedWaterIndexes_274bd70
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000005c2c6c2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580e588);
    FUN_012d0dc8(PTR_DAT_057c4090);
    FUN_012d0dc8(PTR_DAT_0578fca8);
    FUN_012d0dc8(PTR_DAT_057cfb88);
    bRam0000000005c2c6c2 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCellIndexFromTheBottom_2499948
                      (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0);
    if (*(long *)(param_1 + 0x58) != 0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterBottomCellIndex_249ea00
                          (*(long *)(param_1 + 0x50),
                           *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x20),0);
        if (*(long *)(param_1 + 0x50) != 0) {
          lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                            (*(long *)(param_1 + 0x50),0);
          if (*(long *)(param_1 + 0x58) != 0) {
            lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cfb88);
            if (lVar6 != 0) {
              if ((iVar4 < iVar3) && (lVar5 == lVar7)) {
                System_Collections_Generic_List_int____ctor_204e880
                          (lVar6,*(undefined8 *)PTR_DAT_057c4090);
              }
              else {
                System_Collections_Generic_List_int____ctor_204e8f0
                          (lVar6,iVar4,*(undefined8 *)PTR_DAT_0578fca8);
                if (*(long *)(param_1 + 0x50) == 0) goto LAB_0284bf4c;
                lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell_2495f10
                                  (*(long *)(param_1 + 0x50),iVar3 + 1,0);
                puVar2 = PTR_DAT_0580e588;
                if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
                  if (*(long *)(param_1 + 0x58) == 0) goto LAB_0284bf4c;
                  lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x20);
                  if ((*(long *)(lVar5 + 0x20) != lVar7) && (lVar7 != 0)) {
                    iVar4 = *(int *)(lVar7 + 0x40) + iVar4;
                  }
                }
                if (0 < iVar4) {
                  iVar3 = 0;
                  do {
                    lVar5 = *(long *)(lVar6 + 0x10);
                    lVar7 = *(long *)puVar2;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar5 == 0) goto LAB_0284bf4c;
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                      *(int *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = iVar3;
                    }
                    else {
                      (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))
                                (lVar6,iVar3);
                    }
                    iVar3 = iVar3 + 1;
                  } while (iVar4 != iVar3);
                }
              }
              return lVar6;
            }
          }
        }
      }
    }
  }
LAB_0284bf4c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

