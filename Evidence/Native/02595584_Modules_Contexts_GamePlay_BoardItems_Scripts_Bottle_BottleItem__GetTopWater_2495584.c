/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetTopWater
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetTopWater
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c2b2cc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2cc = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  if (*(long *)(param_1 + 0x80) != 0) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x80) + 0x18);
    while( true ) {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 0;
      }
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_1 + 0x80),iVar3,*(undefined8 *)puVar1), lVar2 == 0))
      break;
      if (*(long *)(lVar2 + 0x20) != 0) {
        return *(long *)(lVar2 + 0x20);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

