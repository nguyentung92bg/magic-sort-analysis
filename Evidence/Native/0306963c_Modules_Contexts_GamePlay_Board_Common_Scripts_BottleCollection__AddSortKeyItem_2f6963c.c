/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSortKeyItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSortKeyItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* water, Modules_Contexts_GamePlay_SuperCharger_Strategies_KeySort_KeySortSuperChargerStrategy_o* keySortStrategy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSortKeyItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSortKeyItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* water,
   Modules_Contexts_GamePlay_SuperCharger_Strategies_KeySort_KeySortSuperChargerStrategy_o*
   keySortStrategy, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSortKeyItem_2f6963c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  if (param_7 == 0) {
LAB_030697f0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  fVar7 = (float)Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                           (param_7,0);
  if (param_5 == 0) goto LAB_030697f0;
  fVar8 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBottomPivotPosition_1e9e5a0
                           (param_7,*(undefined4 *)(param_5 + 0x48),0);
  if (cRam0000000005c230ac == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230ac = '\x01';
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  uVar11 = *(undefined8 *)(lVar6 + 0x18);
  fVar9 = (float)uVar11 * fVar8;
  fVar10 = (float)((ulong)uVar11 >> 0x20) * fVar8;
  fVar8 = fVar8 * *(float *)(lVar6 + 0x20);
  fVar7 = fVar7 + fVar9;
  param_2 = param_2 + fVar10;
  uVar3 = CONCAT44(param_2,fVar7);
  param_3 = param_3 + fVar8;
  if (1 < *(int *)(param_7 + 0x40)) {
    if (param_6 == 0) goto LAB_030697f0;
    uVar3 = CONCAT44(param_2 + ((float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20) - fVar10),
                     fVar7 + ((float)*(undefined8 *)(param_6 + 0x10) - fVar9));
    param_3 = param_3 + (*(float *)(param_6 + 0x18) - fVar8);
  }
  if (*(long *)(param_5 + 0xa0) == 0) goto LAB_030697f0;
  if (*(long *)(param_4 + 0x50) == 0) goto LAB_030697f0;
  lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  fVar7 = *(float *)(*(long *)(param_5 + 0xa0) + 0xdc);
  fVar8 = *(float *)(lVar6 + 0x18);
  fVar9 = *(float *)(lVar6 + 0x1c);
  fVar10 = *(float *)(lVar6 + 0x20);
  auVar12 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSnitchItemIdleSorting_4002cc0
                      (*(long *)(param_4 + 0x50),0,0);
  lVar6 = *(long *)(param_4 + 0x28);
  uVar11 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_7,0);
  if (lVar6 == 0) goto LAB_030697f0;
  lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetSortKeyItem_230332c
                    (uVar3,uVar3 >> 0x20,param_3,fVar7 * fVar8,fVar7 * fVar9,fVar7 * fVar10,lVar6,
                     uVar11,auVar12._0_8_,auVar12._8_8_,param_6,param_5,param_8,0);
  Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8(param_4,lVar6)
  ;
  puVar1 = PTR_DAT_0576c200;
  if (lVar6 == 0) goto LAB_030697f0;
  lVar6 = *(long *)(lVar6 + 0x50);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0(0,0);
  }
  if ((bRam0000000005c2b9ea & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c2b9ea = 1;
  }
  uVar11 = *(undefined8 *)(lVar6 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar11,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(lVar6 + 0x28) == 0) goto LAB_0270cf08;
    lVar4 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(lVar6 + 0x28),0);
    DG_Tweening_ShortcutExtensions__DOKill_1eeb1dc(lVar4,0,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    puVar2 = PTR_DAT_05770998;
    if (lVar4 == 0) goto LAB_0270cf08;
    lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(float *)(lVar5 + 0xc) * _DAT_04321768,*(float *)(lVar5 + 0x10) * _DAT_04321768,
               *(float *)(lVar5 + 0x14) * _DAT_04321768,lVar4,0);
    uVar11 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c(0x3f800000,_UNK_04359fc0,lVar4,0);
    DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0(uVar11,6,*(undefined8 *)puVar2);
  }
  uVar11 = *(undefined8 *)(lVar6 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar11,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)(lVar6 + 0x50);
  if (lVar6 != 0) {
    if (pcRam0000000005c35e30 == (code *)0x0) {
      pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e30)(lVar6,1);
    return;
  }
LAB_0270cf08:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

