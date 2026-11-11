/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$BreakAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__BreakAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, float randomDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicTargetView$$BreakAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__BreakAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, float
   randomDelay, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__BreakAnimation_2748664
          (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((bRam0000000005c2c6ac & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057df198);
    FUN_012d0dc8(PTR_DAT_057789c0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2c6ac = 1;
  }
  lVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
  if (((lVar4 != 0) &&
      (fVar12 = (float)UnityEngine_Transform__get_position_4092b08(lVar4,0), param_3 != 0)) &&
     (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_3,0), puVar1 = PTR_DAT_0575a2d8, plVar5 != (long *)0x0)) {
    lVar4 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02848768;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,0);
LAB_02848768:
    fVar13 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (cRam0000000005c23465 == '\0') {
      FUN_012d0dc8(PTR_DAT_05764ae0);
      cRam0000000005c23465 = '\x01';
    }
    puVar2 = PTR_DAT_05764ae0;
    fVar14 = _LAB_04321df0;
    fVar17 = ABS(fVar12);
    if (ABS(fVar12) <= ABS(fVar13)) {
      fVar17 = ABS(fVar13);
    }
    fVar16 = **(float **)(*(long *)PTR_DAT_05764ae0 + 0xb8) * 8.0;
    fVar19 = fVar17 * _LAB_04321df0;
    if (fVar17 * _LAB_04321df0 <= fVar16) {
      fVar19 = fVar16;
    }
    lVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
    if (lVar4 != 0) {
      UnityEngine_Transform__get_position_4092b08(lVar4,0);
      fVar17 = fVar16;
      plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_3,0);
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        lVar4 = *(long *)puVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar4) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02848854;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,lVar4,0);
LAB_02848854:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (cRam0000000005c23465 == '\0') {
          FUN_012d0dc8(PTR_DAT_05764ae0);
          cRam0000000005c23465 = '\x01';
        }
        fVar15 = ABS(fVar16);
        if (ABS(fVar16) <= ABS(fVar17)) {
          fVar15 = ABS(fVar17);
        }
        fVar18 = **(float **)(*(long *)puVar2 + 0xb8) * 8.0;
        fVar20 = fVar15 * fVar14;
        if (fVar15 * fVar14 <= fVar18) {
          fVar20 = fVar18;
        }
        if (fVar19 <= ABS(fVar13 - fVar12)) {
          lVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
          if (lVar4 == 0) goto LAB_02848a78;
          fVar14 = (float)UnityEngine_Transform__get_position_4092b08(lVar4,0);
          plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                     (param_3,0);
          if (plVar5 == (long *)0x0) goto LAB_02848a78;
          lVar9 = *plVar5;
          lVar4 = *(long *)puVar1;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0284894c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar5,lVar4,0);
LAB_0284894c:
          fVar15 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
          bVar3 = fVar15 < fVar14;
        }
        else {
          fVar14 = (float)UnityEngine_Random__get_value_383a5ac(0);
          bVar3 = fVar14 < 0.5;
        }
        puVar1 = PTR_DAT_057606c8;
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
        DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(param_1,uVar7,0);
        uVar8 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__StartTrailMove_2748a7c
                          (param_2,param_3,ABS(fVar13 - fVar12) < fVar19,bVar3,
                           ABS(fVar17 - fVar16) < fVar20);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar7,uVar8,0);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_2,*(undefined8 *)PTR_DAT_057df198,0);
          DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar7,lVar4,0);
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar4 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar4,param_2,*(undefined8 *)PTR_DAT_057789c0,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0x40600000,uVar7,lVar4,0);
            *(undefined1 *)(param_2 + 0x9c) = 1;
            return uVar7;
          }
        }
      }
    }
  }
LAB_02848a78:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

