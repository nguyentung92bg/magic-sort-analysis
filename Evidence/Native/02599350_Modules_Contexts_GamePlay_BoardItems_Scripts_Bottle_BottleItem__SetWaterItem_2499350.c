/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetWaterItem
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetWaterItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t index, int32_t height, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* waterItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetWaterItem
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetWaterItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t index, int32_t
   height, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* waterItem, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetWaterItem_2499350
               (long param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam0000000005c2b2e5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2e5 = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  if (param_2 < param_3 + param_2) {
    do {
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_1 + 0x80),param_2,*(undefined8 *)puVar1), lVar2 == 0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined8 *)(lVar2 + 0x20) = param_4;
      FUN_012d0d74((undefined8 *)(lVar2 + 0x20),param_4);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  if ((bRam0000000005c2b2ec & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2ec = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 0x18) + -1;
    if (iVar3 < 0) {
      return;
    }
    lVar5 = 0;
    iVar4 = -1;
    do {
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      lVar2 = *(long *)(lVar2 + 0x20);
      if ((lVar2 != 0) && (lVar2 != lVar5)) {
        iVar4 = iVar4 + 1;
        *(int *)(lVar2 + 0x50) = iVar4;
        lVar5 = lVar2;
      }
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x80);
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

