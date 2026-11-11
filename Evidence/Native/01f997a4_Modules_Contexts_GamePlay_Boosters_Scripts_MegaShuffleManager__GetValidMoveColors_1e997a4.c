/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$GetValidMoveColors
System_Collections_Generic_HashSet_ColorId__o* Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetValidMoveColors (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01f99b04) */
/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$GetValidMoveColors
   System_Collections_Generic_HashSet_ColorId__o*
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetValidMoveColors
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetValidMoveColors_1e997a4
               (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar2 = PTR_DAT_057a45f8;
  if ((bRam0000000005c28168 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575d1b8);
    FUN_012d0dc8(PTR_DAT_057e3780);
    FUN_012d0dc8(PTR_DAT_0577e498);
    FUN_012d0dc8(PTR_DAT_05764960);
    FUN_012d0dc8(PTR_DAT_057a45f8);
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057a2960);
    FUN_012d0dc8(PTR_DAT_058066c8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_057be708);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_058034c0);
    FUN_012d0dc8(PTR_DAT_057d5360);
    FUN_012d0dc8(PTR_DAT_05766c78);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057db558);
    bRam0000000005c28168 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05766c78;
  if (lVar12 != 0) {
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor_36d0988
              (lVar12,*(undefined8 *)PTR_DAT_057e3780);
    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (((lVar13 != 0) &&
        (System_Collections_Generic_HashSet_Int32Enum____ctor_33b35d4
                   (lVar13,*(undefined8 *)PTR_DAT_057d5360), puVar5 = PTR_DAT_057b41c8,
        puVar4 = PTR_DAT_0577e498, puVar3 = PTR_DAT_05764960, puVar2 = PTR_DAT_0575d1b8,
        param_2 != 0)) && (*(long *)(param_2 + 0x18) != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_b8,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_057db558);
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      lStack_70 = lStack_a8;
      while( true ) {
        uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_80,*(undefined8 *)PTR_DAT_058066c8);
        if ((uVar14 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)PTR_DAT_057a2960);
          return lVar13;
        }
        if (lStack_70 == 0) break;
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_b8,lStack_70,*(undefined8 *)PTR_DAT_05768d80);
        uStack_98 = uStack_b0;
        uStack_a0 = uStack_b8;
        lStack_90 = lStack_a8;
        while (uVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_a0,*(undefined8 *)puVar5), lVar6 = lStack_90,
              (uVar14 & 1) != 0) {
          if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar15 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                             (lStack_90,0);
          if (lVar15 != 0) {
            if (*(long *)(lVar15 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar1 = *(undefined4 *)(*(long *)(lVar15 + 0x58) + 0x70);
            uVar14 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey_36d1608
                               (lVar12,uVar1,*(undefined8 *)puVar2);
            if ((uVar14 & 1) == 0) {
              System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_36d13f0
                        (lVar12,uVar1,lVar6,*(undefined8 *)puVar3);
            }
            else {
              lVar15 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item_36d1354
                                 (lVar12,uVar1,*(undefined8 *)puVar4);
              iVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                                (lVar6,0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              iVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
                                (lVar15,0);
              if ((iVar8 < iVar7) ||
                 (uVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                                     (lVar6,0), (uVar14 & 1) == 0)) {
                uVar10 = 0;
              }
              else {
                uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                  (lVar6,0);
                uVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation_24980f0
                                   (lVar15,lVar6,uVar9,0);
                uVar10 = uVar10 & 1;
              }
              iVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                                (lVar15,0);
              iVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
                                (lVar6,0);
              if ((iVar8 < iVar7) ||
                 (uVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                                     (lVar15,0), (uVar14 & 1) == 0)) {
                uVar11 = 0;
              }
              else {
                uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                  (lVar15,0);
                uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation_24980f0
                                   (lVar6,lVar15,uVar9,0);
                uVar11 = uVar11 & 1;
              }
              if (uVar11 != 0 || uVar10 != 0) {
                System_Collections_Generic_HashSet_Int32Enum___Add_33b47a4
                          (lVar13,uVar1,*(undefined8 *)PTR_DAT_058034c0);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_a0,*(undefined8 *)PTR_DAT_057d0ba8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

