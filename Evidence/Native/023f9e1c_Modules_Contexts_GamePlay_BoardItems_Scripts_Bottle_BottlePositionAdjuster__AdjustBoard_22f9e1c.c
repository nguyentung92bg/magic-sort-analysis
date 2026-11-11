/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$AdjustBoard
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoard (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o* bottleCollectionCameraConfig, bool setOnlyData, bool useDefaultCalculation, bool isDaily, int32_t distanceBetweenTwoRowAsUnit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023fa038) */
/* WARNING: Removing unreachable block (ram,0x023fa084) */
/* WARNING: Removing unreachable block (ram,0x023fa040) */
/* WARNING: Removing unreachable block (ram,0x023fa050) */
/* WARNING: Removing unreachable block (ram,0x023fa0ac) */
/* WARNING: Removing unreachable block (ram,0x023fa0e8) */
/* WARNING: Removing unreachable block (ram,0x023fa0f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$AdjustBoard
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoard
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o*
   bottleCollectionCameraConfig, bool setOnlyData, bool useDefaultCalculation, bool isDaily, int32_t
   distanceBetweenTwoRowAsUnit, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoard_22f9e1c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               ulong param_6,ulong param_7,ulong param_8,undefined4 param_9)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles_2f6a540
                    (param_4,0);
  if (((uVar6 & 1) == 0) || ((param_8 & 1) != 0)) {
    if ((bRam0000000005c2a5ea & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05813f90);
      FUN_012d0dc8(PTR_DAT_05785108);
      FUN_012d0dc8(PTR_DAT_057b43e8);
      FUN_012d0dc8(PTR_DAT_057b0e08);
      bRam0000000005c2a5ea = 1;
    }
    puVar3 = PTR_DAT_057b43e8;
    puVar2 = PTR_DAT_057b0e08;
    uStack_b8 = 0;
    lStack_b0 = 0;
    uStack_c0 = 0;
    if (((param_4 != 0) && (lVar14 = *(long *)(param_4 + 0x18), lVar14 != 0)) && (param_5 != 0)) {
      iVar10 = *(int *)(lVar14 + 0x18);
      uStack_e0 = CONCAT44(iVar10,(undefined4)uStack_e0);
      lVar7 = 0x2c;
      if (iVar10 != 3) {
        lVar7 = 0x28;
      }
      if (0 < iVar10) {
        fVar16 = *(float *)(param_5 + lVar7);
        iVar10 = 0;
        do {
          lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar14,iVar10,*(undefined8 *)puVar2);
          if (lVar7 == 0) goto LAB_023fa7cc;
          iVar11 = *(int *)(lVar7 + 0x18);
          fVar19 = *(float *)(param_5 + 0x30);
          if ((param_7 & 1) == 0) {
            param_2 = *(float *)(param_5 + 0x24);
            fVar17 = fVar19 + param_2;
            fVar20 = fVar17 * (float)(iVar11 + -1) * -0.5;
LAB_023fa600:
            if (0 < iVar11) goto LAB_023fa608;
          }
          else {
            fVar15 = *(float *)(param_5 + 0x20) * 5.0;
            if (1 < iVar11) {
              param_3 = fVar19 * (float)(6 - iVar11);
              fVar20 = -(fVar15 * 0.5 - param_3 * 0.5);
LAB_023fa5e8:
              param_2 = (float)(iVar11 + -1);
              fVar17 = (((fVar19 + fVar15) - param_3) - fVar19) / param_2;
              goto LAB_023fa600;
            }
            fVar17 = 0.0;
            fVar20 = 0.0;
            if (iVar11 != 1) {
              param_3 = fVar19 * (float)(6 - iVar11);
              fVar20 = 0.0;
              goto LAB_023fa5e8;
            }
LAB_023fa608:
            iVar11 = 0;
            fVar19 = fVar16 * (float)iVar10;
            do {
              plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar7,iVar11,*(undefined8 *)puVar3);
              if (plVar9 == (long *)0x0) goto LAB_023fa7cc;
              param_3 = 0.0;
              param_2 = fVar19;
              (**(code **)(*plVar9 + 0x1a8))
                        (fVar20 + fVar17 * (float)iVar11,fVar19,0,plVar9,
                         *(undefined8 *)(*plVar9 + 0x1b0));
              if ((param_6 & 1) == 0) {
                (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
              }
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                        (plVar9,0);
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(lVar7 + 0x18));
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar14 + 0x18));
      }
      lVar7 = 0x1c;
      if (uStack_e0._4_4_ != 3) {
        lVar7 = 0x18;
      }
      fVar19 = *(float *)(param_5 + lVar7);
      Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds_2f68c3c
                (&uStack_d8,param_4,0);
      uStack_b8 = lStack_d0;
      uStack_c0 = uStack_d8;
      lStack_b0 = uStack_c8;
      fVar16 = (float)UnityEngine_Bounds__get_center_38374e8(&uStack_c0,0);
      if (0 < *(int *)(lVar14 + 0x18)) {
        iVar10 = 0;
        do {
          lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar14,iVar10,*(undefined8 *)puVar2);
          if (lVar7 == 0) goto LAB_023fa7cc;
          if (0 < *(int *)(lVar7 + 0x18)) {
            iVar11 = 0;
            do {
              plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar7,iVar11,*(undefined8 *)puVar3);
              if (plVar9 == (long *)0x0) goto LAB_023fa7cc;
              (**(code **)(*plVar9 + 0x1a8))
                        ((*(float *)(plVar9 + 5) - fVar16) + 0.0,
                         fVar19 + (*(float *)((long)plVar9 + 0x2c) - param_2),
                         (*(float *)(plVar9 + 6) - param_3) + 0.0,plVar9,
                         *(undefined8 *)(*plVar9 + 0x1b0));
              if ((param_6 & 1) == 0) {
                (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
              }
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                        (plVar9,0);
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(lVar7 + 0x18));
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar14 + 0x18));
      }
      return;
    }
LAB_023fa7cc:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2a5eb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c2a5eb = 1;
  }
  puVar5 = PTR_DAT_057d0ba8;
  puVar4 = PTR_DAT_057b43e8;
  puVar3 = PTR_DAT_057b41c8;
  puVar2 = PTR_DAT_05768d80;
  fVar16 = _UNK_0434cc34;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  uStack_e0 = 0;
  if (((param_4 != 0) && (lVar14 = *(long *)(param_4 + 0x18), lVar14 != 0)) && (param_5 != 0)) {
    iVar10 = *(int *)(lVar14 + 0x18);
    lVar7 = 0x2c;
    if (iVar10 != 3) {
      lVar7 = 0x28;
    }
    if (0 < iVar10) {
      iVar11 = 0;
      fVar19 = *(float *)(param_5 + lVar7);
      do {
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar14,iVar11,*(undefined8 *)PTR_DAT_057b0e08);
        lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindLongBottlesIntersectedWithRow_22fa87c
                          (lVar14,iVar11,param_9);
        if (lVar7 == 0) goto LAB_023fa434;
        iVar13 = *(int *)(lVar7 + 0x18);
        param_3 = *(float *)(param_5 + 0x24);
        param_2 = *(float *)(param_5 + 0x20) * 5.0;
        fVar20 = *(float *)(param_5 + 0x30) + param_3;
        if (lVar8 == 0) goto LAB_023fa434;
        fVar17 = fVar19 * (float)iVar11;
        if (*(int *)(lVar8 + 0x18) < 1) {
          if (0 < iVar13) {
            iVar12 = 0;
            do {
              plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar7,iVar12,*(undefined8 *)puVar4);
              if (plVar9 == (long *)0x0) goto LAB_023fa434;
              param_3 = 0.0;
              param_2 = fVar17;
              (**(code **)(*plVar9 + 0x1a8))
                        (fVar20 * (float)(iVar13 + -1) * -0.5 + fVar20 * (float)iVar12,fVar17,0,
                         plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
              if ((param_6 & 1) == 0) {
                (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
              }
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                        (plVar9,0);
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)(lVar7 + 0x18));
          }
        }
        else {
          param_2 = (float)(*(int *)(lVar8 + 0x18) + iVar13 + -1);
          fVar15 = (*(float *)(param_5 + 0x30) + param_3) * param_2;
          if (0 < iVar13) {
            iVar13 = 0;
            fVar18 = -3.4028235e+38;
            do {
              plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar7,iVar13,*(undefined8 *)puVar4);
              bVar1 = fVar18 <= -3.4028235e+38;
              fVar18 = fVar20 + fVar18;
              if (bVar1) {
                fVar18 = fVar15 * -0.5;
              }
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_f8,lVar8,*(undefined8 *)puVar2);
              uStack_b8 = uStack_f0;
              uStack_c0 = uStack_f8;
              lStack_b0 = lStack_e8;
              while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                       (&uStack_c0,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
                if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (ABS(*(float *)(lStack_b0 + 0x28) - fVar18) + fVar16 < fVar20) {
                  fVar18 = fVar20 + *(float *)(lStack_b0 + 0x28);
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_c0,*(undefined8 *)puVar5);
              if (plVar9 == (long *)0x0) goto LAB_023fa434;
              param_3 = 0.0;
              param_2 = fVar17;
              (**(code **)(*plVar9 + 0x1a8))
                        (fVar18,fVar17,0,plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
              if ((param_6 & 1) == 0) {
                (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
              }
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                        (plVar9,0);
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(lVar7 + 0x18));
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar14 + 0x18));
    }
    puVar2 = PTR_DAT_057b0e08;
    lVar7 = 0x1c;
    if (iVar10 != 3) {
      lVar7 = 0x18;
    }
    fVar19 = *(float *)(param_5 + lVar7);
    Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds_2f68c3c
              (&uStack_f8,param_4,0);
    uStack_d8 = uStack_f0;
    uStack_e0 = uStack_f8;
    lStack_d0 = lStack_e8;
    fVar16 = (float)UnityEngine_Bounds__get_center_38374e8(&uStack_e0,0);
    if (0 < *(int *)(lVar14 + 0x18)) {
      iVar10 = 0;
      do {
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar14,iVar10,*(undefined8 *)puVar2);
        if (lVar7 == 0) goto LAB_023fa434;
        if (0 < *(int *)(lVar7 + 0x18)) {
          iVar11 = 0;
          do {
            plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar7,iVar11,*(undefined8 *)puVar4);
            if (plVar9 == (long *)0x0) goto LAB_023fa434;
            (**(code **)(*plVar9 + 0x1a8))
                      ((*(float *)(plVar9 + 5) - fVar16) + 0.0,
                       fVar19 + (*(float *)((long)plVar9 + 0x2c) - param_2),
                       (*(float *)(plVar9 + 6) - param_3) + 0.0,plVar9,
                       *(undefined8 *)(*plVar9 + 0x1b0));
            if ((param_6 & 1) == 0) {
              (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
            }
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                      (plVar9,0);
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(lVar7 + 0x18));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar14 + 0x18));
    }
    return;
  }
LAB_023fa434:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

