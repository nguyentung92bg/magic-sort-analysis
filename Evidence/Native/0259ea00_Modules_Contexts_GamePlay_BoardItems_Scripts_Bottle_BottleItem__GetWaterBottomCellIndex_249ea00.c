/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWaterBottomCellIndex
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterBottomCellIndex (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* waterItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWaterBottomCellIndex
   int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterBottomCellIndex
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* waterItem, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterBottomCellIndex_249ea00
              (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c2b327 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b327 = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return -1;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(long *)(lVar2 + 0x20) == param_2) {
        return iVar3;
      }
      lVar2 = *(long *)(param_1 + 0x80);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

