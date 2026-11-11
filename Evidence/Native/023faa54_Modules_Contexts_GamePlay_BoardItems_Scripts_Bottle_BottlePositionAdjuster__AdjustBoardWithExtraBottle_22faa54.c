/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$AdjustBoardWithExtraBottle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithExtraBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o* bottleCollectionCameraConfig, int32_t insertionPosX, int32_t insertionPosY, int32_t distanceBetweenRowsAsUnit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$AdjustBoardWithExtraBottle
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithExtraBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o*
   bottleCollectionCameraConfig, int32_t insertionPosX, int32_t insertionPosY, int32_t
   distanceBetweenRowsAsUnit, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardWithExtraBottle_22faa54
               (undefined1 param_1 [16],float param_2,ulong param_3,long param_4,long param_5,
               int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined8 extraout_d0;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000005c2a5ec & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c2a5ec = 1;
  }
  puVar3 = PTR_DAT_057b43e8;
  fVar16 = _UNK_0438e154;
  fVar15 = (float)param_3;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  if ((param_4 != 0) && (lVar10 = *(long *)(param_4 + 0x18), lVar10 != 0)) {
    iVar1 = *(int *)(lVar10 + 0x18);
    if (0 < iVar1) {
      iVar11 = 0;
      fVar17 = -3.4028235e+38;
      fVar9 = 3.4028235e+38;
      do {
        lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar10,iVar11,*(undefined8 *)PTR_DAT_057b0e08);
        lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindLongBottlesIntersectedWithRow_22fa87c
                          (lVar10,iVar11,param_8);
        if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_023faddc;
        iVar12 = *(int *)(lVar5 + 0x18);
        iVar2 = *(int *)(lVar6 + 0x18);
        lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar5,0,*(undefined8 *)puVar3);
        if (lVar5 == 0) goto LAB_023faddc;
        fVar13 = (float)Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                                  (lVar5,0);
        fVar15 = (float)param_3;
        param_2 = (float)(iVar2 + iVar12) * fVar16 + fVar13;
        uVar14 = (ulong)(uint)param_2;
        fVar13 = (param_2 - fVar13) * 0.5;
        iVar11 = iVar11 + 1;
        fVar4 = fVar13;
        if (fVar9 <= fVar13) {
          fVar4 = fVar9;
        }
        fVar9 = fVar4;
        if (fVar13 <= fVar17) {
          fVar13 = fVar17;
        }
        fVar17 = fVar13;
      } while (iVar1 != iVar11);
      if ((0.0 < fVar17 - fVar9) && (0 < iVar1)) {
        iVar11 = 0;
        do {
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar10,iVar11,*(undefined8 *)PTR_DAT_057b0e08);
          uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__RowHasLongBottle_22fadec
                            ();
          if ((uVar7 & 1) == 0) {
            lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindLongBottlesIntersectedWithRow_22fa87c
                              (lVar10,iVar11,param_8);
            if (lVar6 == 0) goto LAB_023faddc;
            if (0 < *(int *)(lVar6 + 0x18)) goto LAB_023fac10;
          }
          else {
LAB_023fac10:
            if (lVar5 == 0) goto LAB_023faddc;
            if (0 < *(int *)(lVar5 + 0x18)) {
              iVar12 = 0;
              do {
                plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                           (lVar5,iVar12,*(undefined8 *)puVar3);
                if (plVar8 == (long *)0x0) goto LAB_023faddc;
                fVar16 = *(float *)(plVar8 + 5);
                uVar14 = (ulong)*(uint *)((long)plVar8 + 0x2c);
                param_3 = (ulong)*(uint *)(plVar8 + 6);
                if ((iVar11 == param_7) && (param_6 == iVar12)) {
                  uVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindYPosForExtraBottle_22faf48
                                     (extraout_d0,uVar14,param_4,param_6,param_7);
                }
                (**(code **)(*plVar8 + 0x1a8))
                          (fVar16 - (fVar17 - fVar9),uVar14,param_3,plVar8,
                           *(undefined8 *)(*plVar8 + 0x1b0));
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                          (plVar8,0);
                iVar12 = iVar12 + 1;
              } while (iVar12 < *(int *)(lVar5 + 0x18));
            }
          }
          fVar15 = (float)param_3;
          param_2 = (float)uVar14;
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar1);
      }
    }
    if (param_5 != 0) {
      lVar5 = 0x1c;
      if (iVar1 != 3) {
        lVar5 = 0x18;
      }
      fVar17 = *(float *)(param_5 + lVar5);
      Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds_2f68c3c
                (&uStack_c8,param_4,0);
                    /* try { // try from 023facd8 to 024fad2f has its CatchHandler @ 023facd8
                       catch() { ... } // from try @ 023facd8 with catch @ 023facd8
                       catch() { ... } // from try @ 023fadb0 with catch @ 023facd8
                       catch() { ... } // from try @ 023fade0 with catch @ 023facd8
                       catch() { ... } // from try @ 023fae54 with catch @ 023facd8 */
      uStack_a8 = uStack_c0;
      uStack_b0 = uStack_c8;
      uStack_a0 = uStack_b8;
      fVar16 = (float)UnityEngine_Bounds__get_center_38374e8(&uStack_b0,0);
      if (0 < iVar1) {
        iVar11 = 0;
        do {
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar10,iVar11,*(undefined8 *)PTR_DAT_057b0e08);
          if (lVar5 == 0) goto LAB_023faddc;
                    /* try { // try from 023fad30 to 024fadaf has its CatchHandler @ 023fadb0 */
          if (0 < *(int *)(lVar5 + 0x18)) {
            iVar12 = 0;
            do {
              plVar8 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar5,iVar12,*(undefined8 *)puVar3);
              if (plVar8 == (long *)0x0) goto LAB_023faddc;
              (**(code **)(*plVar8 + 0x1a8))
                        ((*(float *)(plVar8 + 5) - fVar16) + 0.0,
                         fVar17 + (*(float *)((long)plVar8 + 0x2c) - param_2),
                         (*(float *)(plVar8 + 6) - fVar15) + 0.0,plVar8,
                         *(undefined8 *)(*plVar8 + 0x1b0));
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                        (plVar8,0);
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)(lVar5 + 0x18));
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar1);
      }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fad30 with catch @ 023fadb0
                       try { // try from 023fadb0 to 024fadc7 has its CatchHandler @ 023facd8 */
                    /* try { // try from 023fadc8 to 024faddf has its CatchHandler @ 023fae4c */
      return;
    }
  }
LAB_023faddc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

