/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$StartTrailMove
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__StartTrailMove (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, bool sameX, bool fromLeft, bool sameY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$StartTrailMove
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__StartTrailMove
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, bool sameX,
   bool fromLeft, bool sameY, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__StartTrailMove_2748a7c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               uint param_6,uint param_7,uint param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  puVar1 = PTR_DAT_0578cf80;
  if ((bRam0000000005c2c6ad & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057dfd20);
    FUN_012d0dc8(PTR_DAT_0578cf80);
    bRam0000000005c2c6ad = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0576aae0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x18),param_4);
    puVar2 = PTR_DAT_0576c200;
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) {
      lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_0575c3c8);
      plVar9 = (long *)(lVar3 + 0x10);
      *plVar9 = *(long *)(param_4 + 0x48);
      FUN_012d0d74(plVar9);
      lVar10 = *plVar9;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = UnityEngine_Object__op_Equality_407f288(lVar10,0,0);
      puVar1 = PTR_DAT_057fc1d0;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
        uVar6 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
        if ((bRam0000000005c2b026 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0576c200,uVar6,*(undefined8 *)puVar1);
          FUN_012d0dc8(PTR_DAT_05794618);
          FUN_012d0dc8(PTR_DAT_058163b8);
          bRam0000000005c2b026 = 1;
        }
        if (((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) && (*(char *)(lVar3 + 0xe9) == '\0')
           ) {
          if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar5 = UnityEngine_Object__op_Equality_407f288(uVar6,0,0);
          if ((uVar5 & 1) == 0) {
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05794618);
            puVar1 = PTR_DAT_058163b8;
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            DG_Tweening_Core_TweenLink___ctor_332f2e4(lVar4,uVar6,6,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            DG_Tweening_Core_TweenManager__AddTweenLink_3330cfc(lVar3,lVar4,0);
          }
        }
        return lVar3;
      }
      lVar10 = *(long *)(param_4 + 0x78);
      if (lVar10 != 0) {
        if (*(long *)(param_4 + 0x30) == 0) goto LAB_02848e1c;
        uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetTrailColors_27461cc
                          (*(long *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x98));
        Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailParticles__ApplyColors_274806c
                  (lVar10,uVar6);
      }
      if (lVar4 != 0) {
        lVar10 = *plVar9;
        auVar15 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxKeyMovingSorting_4002b40
                            (lVar4,0);
        if (lVar10 != 0) {
          Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__SetVfxSorting_2f5f9a4
                    (lVar10,auVar15._0_8_,auVar15._8_8_,0);
          if ((((*plVar9 != 0) &&
               (lVar4 = UnityEngine_Component__get_gameObject_408b480(*plVar9,0), lVar4 != 0)) &&
              (lVar4 = UnityEngine_GameObject__get_transform_408e25c(lVar4,0), lVar4 != 0)) &&
             (UnityEngine_Transform__set_parent_40933e0(lVar4,0,0), param_5 != 0)) {
            lVar4 = *plVar9;
            plVar9 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                       (param_5,0);
            if (plVar9 != (long *)0x0) {
              lVar10 = *plVar9;
              uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar5 != 0) {
                piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_02848d34;
                  }
                  uVar5 = uVar5 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar5 != 0);
              }
              puVar7 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0575a2d8,0);
LAB_02848d34:
              fVar11 = (float)(*(code *)*puVar7)(plVar9,puVar7[1]);
              if (*(long *)(param_4 + 0x50) != 0) {
                fVar13 = param_2;
                fVar14 = param_3;
                fVar12 = (float)Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagAnimationConfig__GetTrailSpawnOffset_2f5dff0
                                          (*(long *)(param_4 + 0x50),*(undefined4 *)(param_5 + 0x48)
                                           ,0);
                if ((*(long *)(param_4 + 0x60) != 0) &&
                   (uVar6 = UnityEngine_GameObject__get_transform_408e25c
                                      (*(long *)(param_4 + 0x60),0), puVar1 = PTR_DAT_057606c8,
                   lVar4 != 0)) {
                  lVar4 = Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__PlayMoveFrom_2f5f738
                                    (fVar11 + fVar12,param_2 + fVar13,param_3 + fVar14,lVar4,uVar6,
                                     *(undefined8 *)(param_4 + 0x50),param_6 & 1,param_7 & 1,
                                     param_8 & 1,0);
                  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar10 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar10,lVar3,*(undefined8 *)PTR_DAT_057dfd20,0);
                    DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar4,lVar10,0);
                    return lVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02848e1c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

