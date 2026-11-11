/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$PlayCompleteAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$PlayCompleteAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayCompleteAnimation_2f5ef04
               (long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000005c308f1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05766ea8);
    FUN_012d0dc8(PTR_DAT_057f7bb8);
    FUN_012d0dc8(PTR_DAT_057c2e68);
                    /* try { // try from 0305ef64 to 0315efc3 has its CatchHandler @ 0305e7d8 */
    FUN_012d0dc8(PTR_DAT_0575b838);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05774908);
    bRam0000000005c308f1 = 1;
  }
  plVar7 = param_1 + 0xf;
  if (*plVar7 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
  }
                    /* try { // try from 0305efc4 to 0315efc7 has its CatchHandler @ 0305f060 */
  if ((param_3 != 0) &&
     (plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_3,0), puVar1 = PTR_DAT_0575a2d8, plVar2 != (long *)0x0)) {
                    /* try { // try from 0305efc8 to 0315efcf has its CatchHandler @ 0305f078 */
    lVar4 = *plVar2;
                    /* try { // try from 0305efd0 to 0315efd7 has its CatchHandler @ 0305f090 */
                    /* try { // try from 0305efd8 to 0315efdb has its CatchHandler @ 0305f05c */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                    /* try { // try from 0305efdc to 0315efe3 has its CatchHandler @ 0305f08c */
    if (uVar5 != 0) {
                    /* try { // try from 0305efe4 to 0315efe7 has its CatchHandler @ 0305f058 */
                    /* try { // try from 0305efe8 to 0315efef has its CatchHandler @ 0305f074 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 0305eff0 to 0315eff7 has its CatchHandler @ 0305f070 */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* try { // try from 0305f014 to 0315f017 has its CatchHandler @ 0305f050 */
                    /* try { // try from 0305f018 to 0315f01f has its CatchHandler @ 0305f068 */
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0305f020;
        }
                    /* try { // try from 0305eff8 to 0315efff has its CatchHandler @ 0305f06c */
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
                    /* try { // try from 0305f000 to 0315f007 has its CatchHandler @ 0305f094 */
      } while (uVar5 != 0);
    }
                    /* try { // try from 0305f008 to 0315f00b has its CatchHandler @ 0305f054 */
                    /* try { // try from 0305f00c to 0315f013 has its CatchHandler @ 0305f088 */
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0575a2d8,0);
LAB_0305f020:
                    /* try { // try from 0305f020 to 0315f027 has its CatchHandler @ 0305f084 */
                    /* try { // try from 0305f028 to 0315f02b has its CatchHandler @ 0305f04c */
    fVar9 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
                    /* try { // try from 0305f02c to 0315f02f has its CatchHandler @ 0305f048 */
                    /* try { // try from 0305f030 to 0315f033 has its CatchHandler @ 0305f044 */
                    /* try { // try from 0305f034 to 0315f037 has its CatchHandler @ 0305f040 */
                    /* try { // try from 0305f038 to 0315f03b has its CatchHandler @ 0305f03c */
                    /* catch() { ... } // from try @ 0305f038 with catch @ 0305f03c
                       try { // try from 0305f03c to 0315f0ab has its CatchHandler @ 0305e7d8 */
                    /* catch() { ... } // from try @ 0305f034 with catch @ 0305f040 */
    if ((param_2 != 0) &&
       (plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (param_2,0), plVar2 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 0305f030 with catch @ 0305f044 */
      lVar4 = *plVar2;
                    /* catch() { ... } // from try @ 0305f02c with catch @ 0305f048 */
                    /* catch() { ... } // from try @ 0305f028 with catch @ 0305f04c */
                    /* catch() { ... } // from try @ 0305f014 with catch @ 0305f050 */
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
                    /* catch() { ... } // from try @ 0305f008 with catch @ 0305f054 */
      if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 0305efe4 with catch @ 0305f058 */
                    /* catch() { ... } // from try @ 0305efd8 with catch @ 0305f05c */
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 0305efc4 with catch @ 0305f060 */
                    /* catch() { ... } // from try @ 0305e99c with catch @ 0305f064 */
                    /* catch() { ... } // from try @ 0305eea4 with catch @ 0305f068
                       catch() { ... } // from try @ 0305f018 with catch @ 0305f068 */
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                    /* catch() { ... } // from try @ 0305edb0 with catch @ 0305f088
                       catch() { ... } // from try @ 0305f00c with catch @ 0305f088 */
                    /* catch() { ... } // from try @ 0305eb34 with catch @ 0305f08c
                       catch() { ... } // from try @ 0305efdc with catch @ 0305f08c */
                    /* catch() { ... } // from try @ 0305ea84 with catch @ 0305f090
                       catch() { ... } // from try @ 0305efd0 with catch @ 0305f090 */
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0305f094;
          }
                    /* catch() { ... } // from try @ 0305ed0c with catch @ 0305f06c
                       catch() { ... } // from try @ 0305eff8 with catch @ 0305f06c */
          uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 0305eca0 with catch @ 0305f070
                       catch() { ... } // from try @ 0305eff0 with catch @ 0305f070 */
          piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 0305ec38 with catch @ 0305f074
                       catch() { ... } // from try @ 0305efe8 with catch @ 0305f074 */
        } while (uVar5 != 0);
      }
                    /* catch() { ... } // from try @ 0305ea58 with catch @ 0305f078
                       catch() { ... } // from try @ 0305efc8 with catch @ 0305f078 */
                    /* catch() { ... } // from try @ 0305e9e4 with catch @ 0305f07c */
                    /* catch() { ... } // from try @ 0305e9b8 with catch @ 0305f080 */
      puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0);
                    /* catch() { ... } // from try @ 0305eed0 with catch @ 0305f084
                       catch() { ... } // from try @ 0305f020 with catch @ 0305f084 */
LAB_0305f094:
                    /* catch() { ... } // from try @ 0305ed28 with catch @ 0305f094
                       catch() { ... } // from try @ 0305f000 with catch @ 0305f094 */
      fVar10 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
                    /* try { // try from 0305f0ac to 0315f0af has its CatchHandler @ 0305f0bc */
      if (cRam0000000005c23465 == '\0') {
        FUN_012d0dc8(PTR_DAT_05764ae0);
                    /* catch() { ... } // from try @ 0305f0ac with catch @ 0305f0bc */
        cRam0000000005c23465 = '\x01';
      }
                    /* try { // try from 0305f0cc to 0315f0db has its CatchHandler @ 0305f0f0 */
                    /* try { // try from 0305f0dc to 0315f0e7 has its CatchHandler @ 0305e7d8 */
      fVar11 = ABS(fVar9);
      if (ABS(fVar9) <= ABS(fVar10)) {
        fVar11 = ABS(fVar10);
      }
                    /* try { // try from 0305f0e8 to 0315f0ef has its CatchHandler @ 0305f0f0 */
                    /* catch() { ... } // from try @ 0305f0cc with catch @ 0305f0f0
                       catch() { ... } // from try @ 0305f0e8 with catch @ 0305f0f0 */
                    /* try { // try from 0305f0f4 to 0315f357 has its CatchHandler @ 0305f0f4
                       catch() { ... } // from try @ 0305f0f4 with catch @ 0305f0f4
                       catch() { ... } // from try @ 0305f688 with catch @ 0305f0f4
                       catch() { ... } // from try @ 0305f720 with catch @ 0305f0f4
                       catch() { ... } // from try @ 0305f79c with catch @ 0305f0f4 */
      fVar13 = **(float **)(*(long *)PTR_DAT_05764ae0 + 0xb8) * 8.0;
      fVar14 = fVar11 * _LAB_04321df0;
      if (fVar11 * _LAB_04321df0 <= fVar13) {
        fVar14 = fVar13;
      }
      plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_3,0);
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0305f164;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0);
LAB_0305f164:
        (*(code *)*puVar3)(plVar2,puVar3[1]);
        plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (param_2,0);
        if (plVar2 != (long *)0x0) {
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0305f1d4;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0);
LAB_0305f1d4:
          (*(code *)*puVar3)(plVar2,puVar3[1]);
          if (cRam0000000005c23465 == '\0') {
            FUN_012d0dc8(PTR_DAT_05764ae0);
            cRam0000000005c23465 = '\x01';
          }
          if (fVar14 <= ABS(fVar10 - fVar9)) {
            plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                       (param_3,0);
            if (plVar2 == (long *)0x0) goto LAB_0305f53c;
            lVar4 = *plVar2;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_0305f2b0;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0);
LAB_0305f2b0:
            (*(code *)*puVar3)(plVar2,puVar3[1]);
            plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                       (param_2,0);
            if (plVar2 == (long *)0x0) goto LAB_0305f53c;
            lVar4 = *plVar2;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_0305f320;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0);
LAB_0305f320:
            (*(code *)*puVar3)(plVar2,puVar3[1]);
          }
          else {
            UnityEngine_Random__get_value_383a5ac(0);
          }
          puVar1 = PTR_DAT_057606c8;
          if (param_1[8] != 0) {
                    /* try { // try from 0305f358 to 0315f35b has its CatchHandler @ 0305f734 */
            uVar12 = UnityEngine_Random__Range_383a610(0,*(undefined4 *)(param_1[8] + 0x44),0);
                    /* try { // try from 0305f374 to 0315f383 has its CatchHandler @ 0305f74c */
            lVar4 = Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__StartTrailMove_2f5fe38
                              (param_1,param_2);
            param_1[0xf] = lVar4;
            FUN_012d0d74(plVar7,lVar4);
            lVar8 = param_1[0xf];
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 0305f3a0 to 0315f3a7 has its CatchHandler @ 0305f748 */
            if (lVar4 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar4,param_1,*(undefined8 *)PTR_DAT_05766ea8,0);
                    /* try { // try from 0305f3c4 to 0315f3cb has its CatchHandler @ 0305f744 */
              DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar8,lVar4,0);
              lVar8 = param_1[0xf];
              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar4 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar4,param_1,*(undefined8 *)PTR_DAT_057f7bb8,0);
                DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar8,lVar4,0);
                uVar12 = DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c
                                   (uVar12,param_1[0xf],0);
                Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__AppendBottleSortingRestore_2f60198
                          (uVar12,param_1[0xf],param_3);
                    /* try { // try from 0305f428 to 0315f42f has its CatchHandler @ 0305f740 */
                lVar8 = param_1[0xf];
                lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar4 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar4,param_1,*(undefined8 *)PTR_DAT_057c2e68,0);
                  DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar8,lVar4,0);
                  lVar8 = param_1[0xf];
                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar4 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar4,param_1,*(undefined8 *)PTR_DAT_0575b838,0);
                    /* try { // try from 0305f498 to 0315f4ab has its CatchHandler @ 0305f73c */
                    DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar8,lVar4,0);
                    if (param_1[9] != 0) {
                      lVar8 = param_1[0xf];
                      lVar4 = UnityEngine_Animation__get_Item_1f79fb0
                                        (param_1[9],*(undefined8 *)PTR_DAT_05774908,0);
                      if (lVar4 != 0) {
                        UnityEngine_AnimationState__get_length_1f7a5bc(lVar4,0);
                        DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(lVar8,0);
                        lVar8 = *plVar7;
                        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                        if (lVar4 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar4,param_1,*(undefined8 *)(*param_1 + 0x1d0),0);
                          DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar8,lVar4,0)
                          ;
                    /* try { // try from 0305f518 to 0315f523 has its CatchHandler @ 0305f738 */
                          return param_1[0xf];
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0305f53c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

