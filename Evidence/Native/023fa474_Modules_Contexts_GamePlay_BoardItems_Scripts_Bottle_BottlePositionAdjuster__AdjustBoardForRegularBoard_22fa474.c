/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$AdjustBoardForRegularBoard
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardForRegularBoard (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o* bottleCollectionCameraConfig, bool setOnlyData, bool useDefaultCalculation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$AdjustBoardForRegularBoard
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardForRegularBoard
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o*
   bottleCollectionCameraConfig, bool setOnlyData, bool useDefaultCalculation, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__AdjustBoardForRegularBoard_22fa474
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               ulong param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam0000000005c2a5ea & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c2a5ea = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  if (((param_4 != 0) && (lVar5 = *(long *)(param_4 + 0x18), lVar5 != 0)) && (param_5 != 0)) {
    iVar6 = *(int *)(lVar5 + 0x18);
    lVar3 = 0x2c;
    if (iVar6 != 3) {
      lVar3 = 0x28;
    }
    if (0 < iVar6) {
      fVar11 = *(float *)(param_5 + lVar3);
      iVar7 = 0;
      do {
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar5,iVar7,*(undefined8 *)puVar1);
        if (lVar3 == 0) goto LAB_023fa7cc;
        iVar8 = *(int *)(lVar3 + 0x18);
        fVar9 = *(float *)(param_5 + 0x30);
        if ((param_7 & 1) == 0) {
          param_2 = *(float *)(param_5 + 0x24);
          fVar13 = fVar9 + param_2;
          fVar12 = fVar13 * (float)(iVar8 + -1) * -0.5;
LAB_023fa600:
          if (0 < iVar8) goto LAB_023fa608;
        }
        else {
          fVar10 = *(float *)(param_5 + 0x20) * 5.0;
          if (1 < iVar8) {
            param_3 = fVar9 * (float)(6 - iVar8);
            fVar12 = -(fVar10 * 0.5 - param_3 * 0.5);
LAB_023fa5e8:
            param_2 = (float)(iVar8 + -1);
            fVar13 = (((fVar9 + fVar10) - param_3) - fVar9) / param_2;
            goto LAB_023fa600;
          }
          fVar13 = 0.0;
          fVar12 = 0.0;
          if (iVar8 != 1) {
            param_3 = fVar9 * (float)(6 - iVar8);
            fVar12 = 0.0;
            goto LAB_023fa5e8;
          }
LAB_023fa608:
          iVar8 = 0;
          fVar9 = fVar11 * (float)iVar7;
          do {
            plVar4 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar3,iVar8,*(undefined8 *)puVar2);
            if (plVar4 == (long *)0x0) goto LAB_023fa7cc;
            param_3 = 0.0;
            param_2 = fVar9;
            (**(code **)(*plVar4 + 0x1a8))
                      (fVar12 + fVar13 * (float)iVar8,fVar9,0,plVar4,
                       *(undefined8 *)(*plVar4 + 0x1b0));
            if ((param_6 & 1) == 0) {
              (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
            }
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                      (plVar4,0);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(lVar3 + 0x18));
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar5 + 0x18));
    }
    lVar3 = 0x1c;
    if (iVar6 != 3) {
      lVar3 = 0x18;
    }
    fVar9 = *(float *)(param_5 + lVar3);
    Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds_2f68c3c
              (&uStack_d8,param_4,0);
    uStack_b8 = uStack_d0;
    uStack_c0 = uStack_d8;
    uStack_b0 = uStack_c8;
    fVar11 = (float)UnityEngine_Bounds__get_center_38374e8(&uStack_c0,0);
    if (0 < *(int *)(lVar5 + 0x18)) {
      iVar6 = 0;
      do {
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar5,iVar6,*(undefined8 *)puVar1);
        if (lVar3 == 0) goto LAB_023fa7cc;
        if (0 < *(int *)(lVar3 + 0x18)) {
          iVar7 = 0;
          do {
            plVar4 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar3,iVar7,*(undefined8 *)puVar2);
            if (plVar4 == (long *)0x0) goto LAB_023fa7cc;
            (**(code **)(*plVar4 + 0x1a8))
                      ((*(float *)(plVar4 + 5) - fVar11) + 0.0,
                       fVar9 + (*(float *)((long)plVar4 + 0x2c) - param_2),
                       (*(float *)(plVar4 + 6) - param_3) + 0.0,plVar4,
                       *(undefined8 *)(*plVar4 + 0x1b0));
            if ((param_6 & 1) == 0) {
              (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
            }
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
                      (plVar4,0);
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar3 + 0x18));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar5 + 0x18));
    }
    return;
  }
LAB_023fa7cc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

