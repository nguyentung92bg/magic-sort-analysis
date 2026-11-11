/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$BuildVirtualBoardFromColorBlocksRandom
void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__BuildVirtualBoardFromColorBlocksRandom (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBoard_o* board, System_Collections_Generic_List_MegaShuffleManager_ColorBlock__o* colorBlocks, System_Collections_Generic_List_ValueTuple_int__bool___o* bottleSizes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$BuildVirtualBoardFromColorBlocksRandom
   void 
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__BuildVirtualBoardFromColorBlocksRandom
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBoard_o* board,
   System_Collections_Generic_List_MegaShuffleManager_ColorBlock__o* colorBlocks,
   System_Collections_Generic_List_ValueTuple_int__bool___o* bottleSizes, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__BuildVirtualBoardFromColorBlocksRandom_1e99f7c
               (long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c2816e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f51e0);
    FUN_012d0dc8(PTR_DAT_0575c628);
    FUN_012d0dc8(PTR_DAT_057d2fe8);
    FUN_012d0dc8(PTR_DAT_057efd68);
    FUN_012d0dc8(PTR_DAT_05784c88);
    FUN_012d0dc8(PTR_DAT_05818938);
    FUN_012d0dc8(PTR_DAT_05808310);
    FUN_012d0dc8(PTR_DAT_057e8bc0);
    FUN_012d0dc8(PTR_DAT_0577d5e8);
    FUN_012d0dc8(PTR_DAT_0575ceb0);
    FUN_012d0dc8(PTR_DAT_057c8088);
    FUN_012d0dc8(PTR_DAT_05759dc8);
    FUN_012d0dc8(PTR_DAT_057f55a8);
    FUN_012d0dc8(PTR_DAT_0575aab8);
    FUN_012d0dc8(PTR_DAT_0577b108);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_05791040);
    FUN_012d0dc8(PTR_DAT_057b7508);
    FUN_012d0dc8(PTR_DAT_057ef1a0);
    bRam0000000005c2816e = 1;
  }
  puVar2 = PTR_DAT_057ef1a0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  if (*(char *)(param_1 + 0x14) != '\0') {
    Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__MinimizeOneBottle_1e9a668
              (param_4,4);
  }
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar8 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_0575c628;
  lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar13 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar8 = *(long *)puVar2;
    }
    uVar15 = **(undefined8 **)(lVar8 + 0xb8);
    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (lVar13 == 0) goto LAB_01f9a4c0;
    System_Comparison_object____ctor_14ec6c0(lVar13,uVar15,*(undefined8 *)PTR_DAT_057b7508,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar9 = lVar13;
    FUN_012d0d74(plVar9,lVar13);
  }
  if (((param_3 != 0) &&
      (System_Collections_Generic_List_object___Sort_21fe6b8
                 (param_3,lVar13,*(undefined8 *)PTR_DAT_057c8088), puVar4 = PTR_DAT_0577d5e8,
      puVar3 = PTR_DAT_0577b108, puVar2 = PTR_DAT_0575aab8, param_2 != 0)) &&
     (lVar8 = *(long *)(param_2 + 0x10), lVar8 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_b8,lVar8,*(undefined8 *)PTR_DAT_0575ceb0);
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    lStack_70 = lStack_a8;
    while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_80,*(undefined8 *)PTR_DAT_05818938), (uVar10 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle__ClearColors_1e9a8b8
                ();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)PTR_DAT_057efd68);
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_b8,param_3,*(undefined8 *)puVar4);
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    lStack_90 = lStack_a8;
LAB_01f9a210:
    do {
      while( true ) {
        uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_a0,*(undefined8 *)PTR_DAT_05784c88);
        lVar13 = lStack_90;
        if ((uVar10 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_a0,*(undefined8 *)PTR_DAT_057d2fe8);
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_b8,lVar8,*(undefined8 *)PTR_DAT_0575ceb0);
          uStack_78 = uStack_b0;
          uStack_80 = uStack_b8;
          lStack_70 = lStack_a8;
          while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_80,*(undefined8 *)PTR_DAT_05818938), (uVar10 & 1) != 0)
          {
            Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleBlocksInBottle_1e9a9d8
                      (param_1,lStack_70);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)PTR_DAT_057efd68);
          return;
        }
        uVar1 = *(undefined4 *)(lVar8 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_05791040 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        iVar5 = Modules_Infrastructure_Common_Scripts_RandomUtil__GetRandomFromTo_40e4ab0(0,uVar1,0)
        ;
        iVar14 = *(int *)(lVar8 + 0x18);
        if (0 < iVar14) break;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar7 = 0;
      do {
        iVar6 = 0;
        if (iVar14 != 0) {
          iVar6 = (iVar5 + iVar7) / iVar14;
        }
        iVar14 = (iVar5 + iVar7) - iVar6 * iVar14;
        iVar6 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                          (param_4,iVar14,*(undefined8 *)puVar3);
        lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (lVar8,iVar14,*(undefined8 *)puVar2);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (*(int *)(lVar13 + 0x14) <= iVar6 - *(int *)(*(long *)(lVar11 + 0x10) + 0x18)) {
          lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar8,iVar14,*(undefined8 *)puVar2);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle__AddColorBlock_1e9a908
                    (lVar11,lVar13);
          goto LAB_01f9a210;
        }
        iVar14 = *(int *)(lVar8 + 0x18);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar14);
      iVar5 = *(int *)(lVar13 + 0x14);
      if ((0 < iVar5) && (0 < iVar14)) {
        if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        iVar14 = 0;
        do {
          iVar7 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                            (param_4,iVar14,*(undefined8 *)puVar3);
          lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar8,iVar14,*(undefined8 *)puVar2);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          iVar7 = iVar7 - *(int *)(*(long *)(lVar11 + 0x10) + 0x18);
          if (0 < iVar7) {
            if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            iVar7 = System_Math__Min_26cd444(iVar7,iVar5,0);
            lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar8,iVar14,*(undefined8 *)puVar2);
            uVar1 = *(undefined4 *)(lVar13 + 0x10);
            lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f51e0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            System_Object___ctor_23dfe5c(lVar12,0);
            *(undefined4 *)(lVar12 + 0x10) = uVar1;
            *(int *)(lVar12 + 0x14) = iVar7;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle__AddColorBlock_1e9a908
                      (lVar11,lVar12);
            iVar5 = iVar5 - iVar7;
          }
          iVar14 = iVar14 + 1;
        } while ((0 < iVar5) && (iVar14 < *(int *)(lVar8 + 0x18)));
      }
    } while( true );
  }
LAB_01f9a4c0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

