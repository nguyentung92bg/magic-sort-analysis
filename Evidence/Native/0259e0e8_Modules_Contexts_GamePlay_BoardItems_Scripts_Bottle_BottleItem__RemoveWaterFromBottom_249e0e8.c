/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$RemoveWaterFromBottom
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveWaterFromBottom (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$RemoveWaterFromBottom
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveWaterFromBottom
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t height, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveWaterFromBottom_249e0e8
               (long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  int iStack_64;
  
  if ((bRam0000000005c2b31e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b31e = 1;
  }
  puVar2 = PTR_DAT_057f2468;
  if (0 < param_2) {
    iVar11 = 0;
    do {
      if (((*(long *)(param_1 + 0x80) == 0) ||
          (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (*(long *)(param_1 + 0x80),0,*(undefined8 *)puVar2), lVar8 == 0)) ||
         (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) {
LAB_0259e234:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar10 = *(int *)(lVar8 + 0x40) + -1;
      if (iVar10 == 0) {
        Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar8,0);
      }
      else {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetHeight_1e9e2e8
                  (lVar8,iVar10,0);
      }
      lVar8 = *(long *)(param_1 + 0x80);
      if (lVar8 == 0) goto LAB_0259e234;
      iVar10 = 0;
      while( true ) {
        iVar1 = *(int *)(lVar8 + 0x18) + -1;
        if (iVar1 <= iVar10) break;
        lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar8,iVar10,*(undefined8 *)puVar2);
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_0259e234;
        iVar10 = iVar10 + 1;
        lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x80),iVar10,*(undefined8 *)puVar2);
        if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_0259e234;
        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
        FUN_012d0d74((undefined8 *)(lVar8 + 0x20));
        lVar8 = *(long *)(param_1 + 0x80);
        if (lVar8 == 0) goto LAB_0259e234;
      }
      lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar8,iVar1,*(undefined8 *)puVar2);
      if (lVar8 == 0) goto LAB_0259e234;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      FUN_012d0d74((undefined8 *)(lVar8 + 0x20),0);
      iVar11 = iVar11 + 1;
    } while (iVar11 != param_2);
  }
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateFillAmountsWithoutAnimation_249670c
            (param_1);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents_249665c
            (param_1);
  if ((bRam0000000005c2b2ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9000);
    FUN_012d0dc8(PTR_DAT_05763bd8);
    FUN_012d0dc8(PTR_DAT_057da7b0);
    FUN_012d0dc8(PTR_DAT_057db9e8);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2ed = 1;
  }
  iStack_64 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                    (param_1);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetTopNonEmptyCellIndex_2495614
            (param_1,&iStack_64);
  iVar11 = iStack_64;
  puVar3 = PTR_DAT_057f2468;
  puVar2 = PTR_DAT_05763bd8;
  lVar9 = *(long *)(param_1 + 0x80);
  if (lVar9 == 0) {
LAB_02593d54:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar10 = 0;
  do {
    if (*(int *)(lVar9 + 0x18) <= iVar10) {
      return;
    }
    lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar9,iVar10,*(undefined8 *)puVar3);
    if (lVar9 == 0) goto LAB_02593d54;
    lVar12 = *(long *)(lVar9 + 0x20);
    if (lVar12 != 0) {
      lVar6 = *(long *)(param_1 + 200);
      if (lVar6 == 0) goto LAB_02593d54;
      if (lVar8 == lVar12) {
        uVar4 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetTopEclipseSortOrder_4002848
                          (lVar6,iVar10,0);
      }
      else {
        uVar4 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetEclipseSortOrder_4002840
                          (lVar6,iVar10,0);
      }
      if (*(long *)(param_1 + 200) == 0) goto LAB_02593d54;
      uVar5 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBackWaterSortOrder_40027a8
                        (*(long *)(param_1 + 200),iVar10,0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetEclipseSortOrder_1e9e448
                (lVar12,uVar4,0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetBackSortOrder_1e9e7c0
                (lVar12,uVar5,0);
      if (*(long *)(lVar9 + 0x38) == 0) goto LAB_02593d54;
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_98,*(long *)(lVar9 + 0x38),*(undefined8 *)PTR_DAT_057db9e8);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      plStack_70 = plStack_88;
      while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_80,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
        if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        (**(code **)(*plStack_70 + 0x268))
                  (plStack_70,uVar4,uVar5,iVar10 == iVar11,iVar10 == 0,
                   *(undefined8 *)(*plStack_70 + 0x270));
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)PTR_DAT_057f9000);
    }
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x80),iVar10,*(undefined8 *)puVar3), lVar9 == 0))
    goto LAB_02593d54;
    lVar9 = *(long *)(lVar9 + 0x28);
    if (lVar9 != 0) {
      if ((*(long *)(param_1 + 200) == 0) ||
         (uVar4 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetQuestionMarkSortOrder_4002850
                            (*(long *)(param_1 + 200),iVar10,0), lVar9 == 0)) goto LAB_02593d54;
      Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__SetSortOrder_2745a1c
                (lVar9,uVar4,0);
    }
    lVar9 = *(long *)(param_1 + 0x80);
    iVar10 = iVar10 + 1;
    if (lVar9 == 0) goto LAB_02593d54;
  } while( true );
}

