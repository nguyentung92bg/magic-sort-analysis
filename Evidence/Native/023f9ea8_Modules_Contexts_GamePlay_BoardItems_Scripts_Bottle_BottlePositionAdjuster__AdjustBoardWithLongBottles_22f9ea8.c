/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$AdjustBoardWithLongBottles
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithLongBottles (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o* bottleCollectionCameraConfig, bool setOnlyData, bool useDefaultCalculation, int32_t distanceBetweenRowsAsUnit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$AdjustBoardWithLongBottles
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithLongBottles
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o*
   bottleCollectionCameraConfig, bool setOnlyData, bool useDefaultCalculation, int32_t
   distanceBetweenRowsAsUnit, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithLongBottles_22f9ea8
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               ulong param_6,uint param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
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
  puVar6 = PTR_DAT_057d0ba8;
  puVar5 = PTR_DAT_057b43e8;
  puVar4 = PTR_DAT_057b41c8;
  puVar3 = PTR_DAT_05768d80;
  fVar16 = _UNK_0434cc34;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  uStack_e0 = 0;
  if (((param_4 != 0) && (lVar14 = *(long *)(param_4 + 0x18), lVar14 != 0)) && (param_5 != 0)) {
    iVar11 = *(int *)(lVar14 + 0x18);
    lVar7 = 0x2c;
    if (iVar11 != 3) {
      lVar7 = 0x28;
    }
    if (0 < iVar11) {
      iVar12 = 0;
      fVar19 = *(float *)(param_5 + lVar7);
      do {
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar14,iVar12,*(undefined8 *)PTR_DAT_057b0e08);
        lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindLongBottlesIntersectedWithRow_22fa87c
                          (lVar14,iVar12,param_8);
        if (lVar7 == 0) goto LAB_023fa434;
        iVar13 = *(int *)(lVar7 + 0x18);
        param_3 = *(float *)(param_5 + 0x24);
        fVar15 = *(float *)(param_5 + 0x30);
        param_2 = *(float *)(param_5 + 0x20) * 5.0;
        if ((param_7 & 1) == 0) {
          fVar17 = fVar15 + param_3;
          fVar20 = fVar17 * (float)(iVar13 + -1) * -0.5;
        }
        else {
          if (iVar13 < 2) {
            fVar20 = 0.0;
            fVar17 = 0.0;
            if (iVar13 == 1) goto joined_r0x023fa07c;
            fVar17 = fVar15 * (float)(6 - iVar13);
            fVar20 = 0.0;
          }
          else {
            fVar17 = fVar15 * (float)(6 - iVar13);
            fVar20 = -(param_2 * 0.5 - fVar17 * 0.5);
          }
                    /* try { // try from 023fa0c0 to 024fa0d3 has its CatchHandler @ 023fa0e0 */
          fVar17 = (((fVar15 + param_2) - fVar17) - fVar15) / (float)(iVar13 + -1);
        }
joined_r0x023fa07c:
        if (lVar8 == 0) goto LAB_023fa434;
        fVar18 = fVar19 * (float)iVar12;
                    /* try { // try from 023fa0d4 to 024fa0f7 has its CatchHandler @ 023fa080 */
        if (*(int *)(lVar8 + 0x18) < 1) {
          if (0 < iVar13) {
            iVar13 = 0;
            do {
                    /* try { // try from 023fa138 to 024fa147 has its CatchHandler @ 023fa148 */
              plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar7,iVar13,*(undefined8 *)puVar5);
              if (plVar9 == (long *)0x0) goto LAB_023fa434;
                    /* catch() { ... } // from try @ 023fa0f8 with catch @ 023fa148
                       catch() { ... } // from try @ 023fa138 with catch @ 023fa148 */
                    /* try { // try from 023fa14c to 024fa14f has its CatchHandler @ 023fa158 */
                    /* try { // try from 023fa150 to 024fa15b has its CatchHandler @ 023fa080 */
              param_3 = 0.0;
              param_2 = fVar18;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fa14c with catch @ 023fa158
                        */
              (**(code **)(*plVar9 + 0x1a8))
                        (fVar20 + fVar17 * (float)iVar13,fVar18,0,plVar9,
                         *(undefined8 *)(*plVar9 + 0x1b0));
              if ((param_6 & 1) == 0) {
                (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
              }
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                        (plVar9,0);
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(lVar7 + 0x18));
          }
        }
        else {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fa0c0 with catch @ 023fa0e0
                        */
          iVar2 = *(int *)(lVar8 + 0x18) + iVar13;
          if ((param_7 & 1) == 0) {
            param_2 = (float)(iVar2 + -1);
            fVar20 = (fVar15 + param_3) * param_2 * -0.5;
          }
          else {
            fVar20 = 0.0;
            if (1 < iVar2) {
                    /* try { // try from 023fa0f8 to 024fa10f has its CatchHandler @ 023fa148 */
              param_2 = param_2 * 0.5;
              param_3 = (float)(6 - iVar2);
                    /* try { // try from 023fa110 to 024fa137 has its CatchHandler @ 023fa080 */
              fVar20 = -(param_2 - fVar15 * param_3 * 0.5);
            }
          }
          if (0 < iVar13) {
            iVar13 = 0;
            fVar15 = -3.4028235e+38;
            do {
              plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar7,iVar13,*(undefined8 *)puVar5);
              bVar1 = fVar15 <= -3.4028235e+38;
              fVar15 = fVar17 + fVar15;
              if (bVar1) {
                fVar15 = fVar20;
              }
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_f8,lVar8,*(undefined8 *)puVar3);
              uStack_b8 = uStack_f0;
              uStack_c0 = uStack_f8;
              lStack_b0 = lStack_e8;
              while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                        (&uStack_c0,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
                if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (ABS(*(float *)(lStack_b0 + 0x28) - fVar15) + fVar16 < fVar17) {
                  fVar15 = fVar17 + *(float *)(lStack_b0 + 0x28);
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_c0,*(undefined8 *)puVar6);
              if (plVar9 == (long *)0x0) goto LAB_023fa434;
              param_3 = 0.0;
              param_2 = fVar18;
              (**(code **)(*plVar9 + 0x1a8))
                        (fVar15,fVar18,0,plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
              if ((param_6 & 1) == 0) {
                (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
              }
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                        (plVar9,0);
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(lVar7 + 0x18));
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar14 + 0x18));
    }
    puVar3 = PTR_DAT_057b0e08;
    lVar7 = 0x1c;
    if (iVar11 != 3) {
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
      iVar11 = 0;
      do {
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar14,iVar11,*(undefined8 *)puVar3);
        if (lVar7 == 0) goto LAB_023fa434;
        if (0 < *(int *)(lVar7 + 0x18)) {
          iVar12 = 0;
          do {
            plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar7,iVar12,*(undefined8 *)puVar5);
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
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(lVar7 + 0x18));
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar14 + 0x18));
    }
    return;
  }
LAB_023fa434:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

