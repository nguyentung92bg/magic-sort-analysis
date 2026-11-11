/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_SuperCharger_Strategies_KeySort_KeySortSuperChargerStrategy_o* keySortStrategy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this,
   UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_SuperCharger_Strategies_KeySort_KeySortSuperChargerStrategy_o*
   keySortStrategy, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__Prepare_260c264
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined8 *)(param_4 + 0x58) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x58),param_7);
  *(undefined8 *)(param_4 + 0x60) = param_8;
  FUN_012d0d74((undefined8 *)(param_4 + 0x60),param_8);
  *(undefined8 *)(param_4 + 0x68) = param_9;
  FUN_012d0d74((undefined8 *)(param_4 + 0x68),param_9);
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  *(undefined4 *)(param_4 + 0x80) = param_1;
  *(undefined4 *)(param_4 + 0x84) = param_2;
  *(undefined4 *)(param_4 + 0x88) = param_3;
  if (*(long *)(param_4 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__Prepare_260c318
            (*(long *)(param_4 + 0x50),param_5,param_6);
  uVar6 = *(undefined4 *)(param_4 + 0x70);
  uVar7 = *(undefined4 *)(param_4 + 0x74);
  uVar8 = *(undefined4 *)(param_4 + 0x78);
  uVar9 = *(undefined4 *)(param_4 + 0x7c);
  if ((bRam0000000005c3aa8b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8,0);
    bRam0000000005c3aa8b = 1;
  }
  if ((*(long *)(param_4 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_4 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 9) * 0x10 + 0x138);
        goto LAB_041ea250;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,9);
LAB_041ea250:
                    /* WARNING: Could not recover jumptable at 0x041ea278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(uVar6,uVar7,uVar8,uVar9,plVar5,puVar1[1]);
  return;
}

