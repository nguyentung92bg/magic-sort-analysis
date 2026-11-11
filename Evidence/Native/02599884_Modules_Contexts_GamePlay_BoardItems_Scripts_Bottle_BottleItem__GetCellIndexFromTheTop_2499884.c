/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetCellIndexFromTheTop
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCellIndexFromTheTop (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetCellIndexFromTheTop
   int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCellIndexFromTheTop
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method); */

int Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCellIndexFromTheTop_2499884
              (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if ((bRam0000000005c2b2f5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2f5 = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + 0x18) + -1;
    if (iVar4 < 0) {
      return 0;
    }
    iVar3 = 0;
    do {
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar4,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      if (*(long *)(lVar2 + 0x20) != 0) {
        if (*(long *)(param_1 + 0x80) == 0) break;
        lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x80),iVar4,*(undefined8 *)puVar1);
        if (lVar2 == param_2) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) {
        return 0;
      }
      lVar2 = *(long *)(param_1 + 0x80);
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

