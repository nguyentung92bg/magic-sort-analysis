/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayBottleSelectedAnimation
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayBottleSelectedAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlayBottleSelectedAnimation
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayBottleSelectedAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayBottleSelectedAnimation_2495de8
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined4 uStack_24;
  
  if ((bRam0000000005c2b2d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8328);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b2d4 = 1;
  }
  uStack_24 = 0;
  uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetTopNonEmptyCellIndex_2495614
                    (param_1,&uStack_24);
  if ((((uVar5 & 1) != 0) &&
      (lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell_2495f10
                         (param_1,uStack_24), lVar6 != 0)) &&
     (lVar9 = *(long *)(lVar6 + 0x20), lVar9 != 0)) {
    uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__get_HasBlocker_1e909ac(lVar6,0);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__OnBottleSelection_1e9e3b0
              (lVar9,uVar4 & 1,0);
  }
  puVar3 = PTR_DAT_05802430;
  puVar2 = PTR_DAT_057d8328;
  lVar6 = *(long *)(param_1 + 0x88);
  if (lVar6 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar8) {
        if (*(long *)(param_1 + 0xe0) != 0) {
          Modules_Contexts_GamePlay_Board_ItemParts_Scripts_Shadow_ShadowItemPart__PlayBottleSelectedAnimation_2f609c4
                    (*(long *)(param_1 + 0xe0),0);
        }
        return;
      }
      plVar7 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar6,iVar8,*(undefined8 *)puVar3);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if ((bVar1 <= *(byte *)(*plVar7 + 300)) &&
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__PlayBottleSelectedAnimation_2f58d08
                    (plVar7,0);
        }
      }
      lVar6 = *(long *)(param_1 + 0x88);
      iVar8 = iVar8 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

