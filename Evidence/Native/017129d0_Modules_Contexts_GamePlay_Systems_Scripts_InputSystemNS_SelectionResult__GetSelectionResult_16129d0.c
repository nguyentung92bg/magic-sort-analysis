/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionResult$$GetSelectionResult
Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult_o* Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult__GetSelectionResult (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* originBottleTopWater, System_Collections_Generic_List_Cell__o* cells, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionResult$$GetSelectionResult
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult_o*
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult__GetSelectionResult
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* originBottleTopWater,
   System_Collections_Generic_List_Cell__o* cells,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult__GetSelectionResult_16129d0
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  
  if ((bRam0000000005c24485 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a89e8);
    FUN_012d0dc8(PTR_DAT_0579a910);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_057d8be8);
    FUN_012d0dc8(PTR_DAT_057d4d30);
    FUN_012d0dc8(PTR_DAT_0579ace0);
    bRam0000000005c24485 = 1;
  }
  if ((param_4 != 0) &&
     (lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                        (param_4,0), puVar3 = PTR_DAT_057f2468, puVar2 = PTR_DAT_0579ace0,
     param_3 != 0)) {
    iVar11 = *(int *)(param_3 + 0x18);
    iVar15 = 0;
    puVar14 = (undefined8 *)PTR_DAT_057a89e8;
    while (iVar11 = iVar11 + -1, -1 < iVar11) {
      lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_3,iVar11,*(undefined8 *)puVar3);
      if (lVar6 == 0) goto LAB_01712c78;
      if (*(long *)(lVar6 + 0x20) == param_2) {
        lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_3,iVar11,*(undefined8 *)puVar3);
        if (lVar6 == 0) goto LAB_01712c78;
        uVar7 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__get_HasBlocker_1e909ac(lVar6,0);
        if ((uVar7 & 1) != 0) {
          lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (param_3,iVar11,*(undefined8 *)puVar3);
          if (lVar6 == 0) goto LAB_01712c78;
          lVar8 = *(long *)puVar2;
          uVar12 = *(undefined8 *)(lVar6 + 0x38);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar8 = *(long *)puVar2;
          }
          lVar6 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar6 == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar8 = *(long *)puVar2;
            }
            uVar13 = **(undefined8 **)(lVar8 + 0xb8);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0579a910);
            if (lVar6 == 0) goto LAB_01712c78;
            System_Func_object__bool____ctor_338137c(lVar6,uVar13,*(undefined8 *)PTR_DAT_057d4d30,0)
            ;
            plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar9 = lVar6;
            FUN_012d0d74(plVar9,lVar6);
            puVar14 = (undefined8 *)PTR_DAT_057a89e8;
          }
          uVar7 = System_Linq_Enumerable__Any_object__2417a98(uVar12,lVar6,*puVar14);
          if ((uVar7 & 1) != 0) break;
        }
        iVar15 = iVar15 + 1;
      }
    }
    puVar2 = PTR_DAT_057d8be8;
    if (lVar5 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(lVar5 + 0x40);
    }
    iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
                      (param_4,0);
    iVar1 = iVar15;
    if (iVar4 <= iVar15) {
      iVar1 = iVar4;
    }
    uVar7 = Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowRules__IsRainbowMove_2745548
                      (param_1,param_4,0);
    iVar4 = 0;
    if ((uVar7 & 1) == 0) {
      iVar4 = iVar11;
    }
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar6 != 0) && (System_Object___ctor_23dfe5c(lVar6,0), param_2 != 0)) {
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_2 + 0x58);
      FUN_012d0d74((undefined8 *)(lVar6 + 0x10));
      *(int *)(lVar6 + 0x18) = iVar1;
      *(int *)(lVar6 + 0x1c) = iVar4;
      *(int *)(lVar6 + 0x20) = iVar1 + iVar4;
      *(int *)(lVar6 + 0x24) = iVar15;
      *(int *)(lVar6 + 0x28) = iVar15 - iVar1;
      *(undefined1 *)(lVar6 + 0x2c) = *(undefined1 *)(param_2 + 0x55);
      if (lVar5 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined1 *)(lVar5 + 0x55);
      }
      *(undefined1 *)(lVar6 + 0x2d) = uVar10;
      return lVar6;
    }
  }
LAB_01712c78:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

