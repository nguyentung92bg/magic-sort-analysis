/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBeforeUndoLastWaterPour
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBeforeUndoLastWaterPour (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t waterHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnBeforeUndoLastWaterPour
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBeforeUndoLastWaterPour
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t waterHeight,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBeforeUndoLastWaterPour_249df5c
               (long param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  int iStack_64;
  
  if ((bRam0000000005c2b31d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d99c8);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b31d = 1;
  }
  uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsFull_2498400(param_1);
  if (((uVar13 & 1) == 0) ||
     (lVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                         (param_1), puVar4 = PTR_DAT_05802430, puVar3 = PTR_DAT_057d99c8,
     lVar14 == 0)) {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x88);
  if (lVar15 != 0) {
    uVar19 = 0;
    iVar18 = 0;
    do {
      if (*(int *)(lVar15 + 0x18) <= iVar18) {
        if ((uVar19 & 1) != 0) {
          if ((bRam0000000005c2b31e & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_05780fc0);
            FUN_012d0dc8(PTR_DAT_057f2468);
            bRam0000000005c2b31e = 1;
          }
          puVar3 = PTR_DAT_057f2468;
          if (param_2 < 1) goto code_r0x02593ab4;
          iVar18 = 0;
          goto LAB_0259e140;
        }
        if ((bRam0000000005c2b312 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0576d788);
          FUN_012d0dc8(PTR_DAT_057f9000);
          FUN_012d0dc8(PTR_DAT_05763bd8);
          FUN_012d0dc8(PTR_DAT_057da7b0);
          FUN_012d0dc8(PTR_DAT_057db9e8);
          FUN_012d0dc8(PTR_DAT_05780fc0);
          FUN_012d0dc8(PTR_DAT_057e5fc8);
          FUN_012d0dc8(PTR_DAT_057f2468);
          FUN_012d0dc8(PTR_DAT_057c6728);
          bRam0000000005c2b312 = 1;
        }
        uStack_78 = 0;
        plStack_70 = (long *)0x0;
        uStack_80 = 0;
        lVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                           (param_1);
        puVar8 = PTR_DAT_057f9000;
        puVar7 = PTR_DAT_057f2468;
        puVar6 = PTR_DAT_057db9e8;
        puVar5 = PTR_DAT_057c6728;
        puVar4 = PTR_DAT_0576d788;
        puVar3 = PTR_DAT_05763bd8;
        if (lVar14 == 0) goto LAB_0259d70c;
        if (*(int *)(lVar14 + 0x40) != param_2) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow_1e9e860
                    (lVar14,0,0);
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__DecreaseWaterHeight_24990bc
                    (param_1,param_2);
          return;
        }
        lVar15 = *(long *)(param_1 + 0x80);
        if (lVar15 == 0) goto LAB_0259d70c;
        iVar18 = 0;
        goto LAB_0259d54c;
      }
      plVar16 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                  (lVar15,iVar18,*(undefined8 *)puVar4);
      uVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                         (lVar14,0);
      if (plVar16 == (long *)0x0) break;
      (**(code **)(*plVar16 + 0x3c8))(plVar16,param_2,uVar10,*(undefined8 *)(*plVar16 + 0x3d0));
      if (*(long *)(param_1 + 0x88) == 0) break;
      plVar16 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                  (*(long *)(param_1 + 0x88),iVar18,*(undefined8 *)puVar4);
      if (plVar16 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar3 + 300);
        if ((bVar1 <= *(byte *)(*plVar16 + 300)) &&
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
          uVar11 = Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__get_FillsFromBottom_274f51c
                             (plVar16,0);
          uVar19 = uVar19 | uVar11;
        }
      }
      lVar15 = *(long *)(param_1 + 0x88);
      iVar18 = iVar18 + 1;
    } while (lVar15 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
  while( true ) {
    lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (lVar15,iVar18,*(undefined8 *)puVar7);
    if (lVar15 == 0) break;
    if (lVar14 == *(long *)(lVar15 + 0x20)) {
      *(undefined8 *)(lVar15 + 0x20) = 0;
      FUN_012d0d74((long *)(lVar15 + 0x20),0);
      lVar15 = *(long *)(lVar15 + 0x38);
      if (lVar15 == 0) break;
      if (0 < *(int *)(lVar15 + 0x18)) {
        lVar15 = System_Linq_Enumerable__ToList_object__242f814(lVar15,*(undefined8 *)puVar4);
        if (lVar15 == 0) break;
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_98,lVar15,*(undefined8 *)puVar6);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        plStack_70 = plStack_88;
        while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_80,*(undefined8 *)puVar3), (uVar13 & 1) != 0) {
          if (plStack_70 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar5 + 300);
            if ((bVar1 <= *(byte *)(*plStack_70 + 300)) &&
               (*(long *)(*(long *)(*plStack_70 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5))
            {
              Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__Complete_274b920
                        (plStack_70,1,0);
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)puVar8);
      }
    }
    lVar15 = *(long *)(param_1 + 0x80);
    iVar18 = iVar18 + 1;
    if (lVar15 == 0) break;
LAB_0259d54c:
    if (*(int *)(lVar15 + 0x18) <= iVar18) {
      Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar14,0);
      lVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                         (param_1);
      lVar15 = *(long *)(param_1 + 0x80);
      if (lVar15 != 0) {
        iVar18 = 0;
        goto LAB_0259d6ac;
      }
      break;
    }
  }
  goto LAB_0259d70c;
  while( true ) {
    iVar17 = *(int *)(lVar14 + 0x40) + -1;
    if (iVar17 == 0) {
      Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar14,0);
    }
    else {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetHeight_1e9e2e8
                (lVar14,iVar17,0);
    }
    lVar14 = *(long *)(param_1 + 0x80);
    if (lVar14 == 0) goto LAB_0259e234;
    iVar17 = 0;
    while( true ) {
      iVar2 = *(int *)(lVar14 + 0x18) + -1;
      if (iVar2 <= iVar17) break;
      lVar14 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (lVar14,iVar17,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_0259e234;
      iVar17 = iVar17 + 1;
      lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (*(long *)(param_1 + 0x80),iVar17,*(undefined8 *)puVar3);
      if ((lVar15 == 0) || (lVar14 == 0)) goto LAB_0259e234;
      *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar15 + 0x20);
      FUN_012d0d74((undefined8 *)(lVar14 + 0x20));
      lVar14 = *(long *)(param_1 + 0x80);
      if (lVar14 == 0) goto LAB_0259e234;
    }
    lVar14 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (lVar14,iVar2,*(undefined8 *)puVar3);
    if (lVar14 == 0) goto LAB_0259e234;
    *(undefined8 *)(lVar14 + 0x20) = 0;
    FUN_012d0d74((undefined8 *)(lVar14 + 0x20),0);
    iVar18 = iVar18 + 1;
    if (iVar18 == param_2) break;
LAB_0259e140:
    if (((*(long *)(param_1 + 0x80) == 0) ||
        (lVar14 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_1 + 0x80),0,*(undefined8 *)puVar3), lVar14 == 0)) ||
       (lVar14 = *(long *)(lVar14 + 0x20), lVar14 == 0)) {
LAB_0259e234:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
code_r0x02593ab4:
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
  lVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                     (param_1);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetTopNonEmptyCellIndex_2495614
            (param_1,&iStack_64);
  iVar18 = iStack_64;
  puVar4 = PTR_DAT_057f2468;
  puVar3 = PTR_DAT_05763bd8;
  lVar15 = *(long *)(param_1 + 0x80);
  if (lVar15 != 0) {
    iVar17 = 0;
    do {
      if (*(int *)(lVar15 + 0x18) <= iVar17) {
        return;
      }
      lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (lVar15,iVar17,*(undefined8 *)puVar4);
      if (lVar15 == 0) break;
      lVar20 = *(long *)(lVar15 + 0x20);
      if (lVar20 != 0) {
        lVar12 = *(long *)(param_1 + 200);
        if (lVar12 == 0) break;
        if (lVar14 == lVar20) {
          uVar10 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetTopEclipseSortOrder_4002848
                             (lVar12,iVar17,0);
        }
        else {
          uVar10 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetEclipseSortOrder_4002840
                             (lVar12,iVar17,0);
        }
        if (*(long *)(param_1 + 200) == 0) break;
        uVar9 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBackWaterSortOrder_40027a8
                          (*(long *)(param_1 + 200),iVar17,0);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetEclipseSortOrder_1e9e448
                  (lVar20,uVar10,0);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetBackSortOrder_1e9e7c0
                  (lVar20,uVar9,0);
        if (*(long *)(lVar15 + 0x38) == 0) break;
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_98,*(long *)(lVar15 + 0x38),*(undefined8 *)PTR_DAT_057db9e8);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        plStack_70 = plStack_88;
        while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_80,*(undefined8 *)puVar3), (uVar13 & 1) != 0) {
          if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          (**(code **)(*plStack_70 + 0x268))
                    (plStack_70,uVar10,uVar9,iVar17 == iVar18,iVar17 == 0,
                     *(undefined8 *)(*plStack_70 + 0x270));
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)PTR_DAT_057f9000);
      }
      if ((*(long *)(param_1 + 0x80) == 0) ||
         (lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (*(long *)(param_1 + 0x80),iVar17,*(undefined8 *)puVar4), lVar15 == 0))
      break;
      lVar15 = *(long *)(lVar15 + 0x28);
      if (lVar15 != 0) {
        if ((*(long *)(param_1 + 200) == 0) ||
           (uVar10 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetQuestionMarkSortOrder_4002850
                               (*(long *)(param_1 + 200),iVar17,0), lVar15 == 0)) break;
        Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__SetSortOrder_2745a1c
                  (lVar15,uVar10,0);
      }
      lVar15 = *(long *)(param_1 + 0x80);
      iVar17 = iVar17 + 1;
      if (lVar15 == 0) break;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
LAB_0259d6ac:
  do {
    if (*(int *)(lVar15 + 0x18) <= iVar18) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents_249665c
                (param_1);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateSortOrders_2493ab4
                (param_1);
      return;
    }
    lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (lVar15,iVar18,*(undefined8 *)puVar7);
    if (lVar14 != 0) {
      if (lVar15 == 0) break;
      lVar15 = *(long *)(lVar15 + 0x20);
      if (lVar15 != 0) {
        uVar10 = *(undefined4 *)(lVar15 + 0x40);
        uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                          (param_1,lVar15);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                  (lVar15,uVar10,uVar9,*(undefined4 *)(param_1 + 0x48),0);
      }
    }
    lVar15 = *(long *)(param_1 + 0x80);
    iVar18 = iVar18 + 1;
  } while (lVar15 != 0);
LAB_0259d70c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

