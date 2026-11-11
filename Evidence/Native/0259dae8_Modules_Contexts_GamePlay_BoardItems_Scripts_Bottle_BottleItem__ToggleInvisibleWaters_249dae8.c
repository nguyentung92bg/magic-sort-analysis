/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ToggleInvisibleWaters
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ToggleInvisibleWaters (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ToggleInvisibleWaters
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ToggleInvisibleWaters
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ToggleInvisibleWaters_249dae8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam0000000005c2b317 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b317 = 1;
  }
  lVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                    (param_1);
  puVar1 = PTR_DAT_057f2468;
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar4,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      lVar3 = *(long *)(lVar3 + 0x20);
      if (lVar3 != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse_1e9e33c
                  (lVar3,lVar3 == lVar2,0);
      }
      lVar3 = *(long *)(param_1 + 0x80);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

