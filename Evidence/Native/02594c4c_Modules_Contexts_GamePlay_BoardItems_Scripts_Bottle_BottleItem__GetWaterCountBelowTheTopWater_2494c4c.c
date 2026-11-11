/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWaterCountBelowTheTopWater
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterCountBelowTheTopWater (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWaterCountBelowTheTopWater
   int32_t
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterCountBelowTheTopWater
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterCountBelowTheTopWater_2494c4c
              (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  if ((bRam0000000005c2b2ca & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d99c8);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2ca = 1;
  }
  puVar4 = PTR_DAT_05802430;
  puVar3 = PTR_DAT_057f2468;
  puVar2 = PTR_DAT_057d99c8;
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 != 0) {
    lVar10 = 0;
    iVar8 = 0;
    iVar9 = 0;
    do {
      if (*(int *)(lVar6 + 0x18) <= iVar9) {
        lVar6 = *(long *)(param_1 + 0x88);
        if (lVar6 != 0) {
          iVar9 = 0;
          do {
            if (*(int *)(lVar6 + 0x18) <= iVar9) {
              return iVar8;
            }
            plVar7 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar6,iVar9,*(undefined8 *)puVar4);
            if (plVar7 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)puVar2 + 300);
              if ((bVar1 <= *(byte *)(*plVar7 + 300)) &&
                 (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
                iVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__GetWaterHeight_2751060
                                  (plVar7,0);
                iVar8 = iVar5 + iVar8;
              }
            }
            lVar6 = *(long *)(param_1 + 0x88);
            iVar9 = iVar9 + 1;
          } while (lVar6 != 0);
        }
        break;
      }
      lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar6,iVar9,*(undefined8 *)puVar3);
      if (lVar6 == 0) break;
      lVar6 = *(long *)(lVar6 + 0x20);
      if ((lVar6 != 0) && (lVar10 != lVar6)) {
        lVar10 = lVar6;
        iVar8 = iVar9;
      }
      lVar6 = *(long *)(param_1 + 0x80);
      iVar9 = iVar9 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

