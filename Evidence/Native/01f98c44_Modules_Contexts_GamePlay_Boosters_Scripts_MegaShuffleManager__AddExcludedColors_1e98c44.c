/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$AddExcludedColors
void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__AddExcludedColors (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBoard_o* board, System_Collections_Generic_List_BottleItem__o* candidates, System_Collections_Generic_HashSet_ColorId__o* duplicatedTopColors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$AddExcludedColors
   void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__AddExcludedColors
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBoard_o* board,
   System_Collections_Generic_List_BottleItem__o* candidates,
   System_Collections_Generic_HashSet_ColorId__o* duplicatedTopColors, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__AddExcludedColors_1e98c44
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  bool bVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000005c2816a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_05796248);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_0575aab8);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_05767220);
    bRam0000000005c2816a = 1;
  }
  puVar5 = PTR_DAT_057f2468;
  puVar4 = PTR_DAT_057a7f80;
  puVar3 = PTR_DAT_05767220;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  if (param_3 == 0) {
LAB_01f9906c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (0 < *(int *)(param_3 + 0x18)) {
    iVar12 = 0;
    do {
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_3,iVar12,*(undefined8 *)PTR_DAT_057b43e8);
      if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
         (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_2 + 0x10),iVar12,*(undefined8 *)PTR_DAT_0575aab8),
         lVar7 == 0)) goto LAB_01f9906c;
      uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                        (lVar7,7,0);
      if ((uVar9 & 1) == 0) {
LAB_01f98ef4:
        lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                           (lVar7,0);
        lVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater_24956b8
                          (lVar7,0);
        if (lVar11 != 0) {
          if ((*(long *)(lVar11 + 0x58) == 0) || (param_4 == 0)) goto LAB_01f9906c;
          uVar9 = System_Collections_Generic_HashSet_Int32Enum___Contains_33b3c3c
                            (param_4,*(undefined4 *)(*(long *)(lVar11 + 0x58) + 0x70),
                             *(undefined8 *)PTR_DAT_05796248);
          if ((uVar9 & 1) != 0) {
            if ((*(long *)(lVar11 + 0x58) == 0) || (lVar8 == 0)) goto LAB_01f9906c;
            Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle__AppendColor_1e99d1c
                      (lVar8,*(undefined4 *)(*(long *)(lVar11 + 0x58) + 0x70),
                       *(undefined4 *)(lVar11 + 0x40));
            if (lVar7 != 0) {
              if ((*(long *)(lVar11 + 0x58) == 0) || (*(long *)(lVar7 + 0x58) == 0))
              goto LAB_01f9906c;
              iVar1 = *(int *)(*(long *)(lVar11 + 0x58) + 0x70);
              if (iVar1 == *(int *)(*(long *)(lVar7 + 0x58) + 0x70)) {
                Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle__AppendColor_1e99d1c
                          (lVar8,iVar1,*(undefined4 *)(lVar7 + 0x40));
              }
            }
          }
        }
      }
      else {
        if (*(long *)(lVar7 + 0x88) == 0) goto LAB_01f9906c;
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_98,*(long *)(lVar7 + 0x88),*(undefined8 *)PTR_DAT_057b7918);
        bVar13 = false;
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        plStack_70 = plStack_88;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_80,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          if (plStack_70 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)puVar3 + 300);
            if ((bVar2 <= *(byte *)(*plStack_70 + 300)) &&
               (*(long *)(*(long *)(*plStack_70 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3))
            {
              if (*(long *)(lVar7 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              lVar11 = plStack_70[0xb];
              lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                 (*(long *)(lVar7 + 0x80),0,*(undefined8 *)puVar5);
              if (lVar10 != 0) {
                if (*(long *)(lVar7 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (*(long *)(lVar7 + 0x80),0,*(undefined8 *)puVar5);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (*(long *)(lVar10 + 0x20) != 0) {
                  if (*(long *)(lVar7 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (*(long *)(lVar7 + 0x80),0,*(undefined8 *)puVar5);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0x20) + 0x58);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  if ((int)lVar11 == *(int *)(lVar10 + 0x70)) {
                    uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottomSameColorHeight_249591c
                                      (lVar7,0);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    bVar13 = true;
                    Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle__PrependColor_1e99c8c
                              (lVar8,(int)lVar11,uVar6);
                  }
                }
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)PTR_DAT_057605b8);
        if (!bVar13) goto LAB_01f98ef4;
        lVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                           (lVar7,0);
        if ((*(long *)(lVar7 + 0x80) == 0) ||
           (lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(lVar7 + 0x80),0,*(undefined8 *)puVar5), lVar10 == 0))
        goto LAB_01f9906c;
        if (lVar11 != *(long *)(lVar10 + 0x20)) goto LAB_01f98ef4;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_3 + 0x18));
  }
  return;
}

