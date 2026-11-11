/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$StartTrailMove
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__StartTrailMove (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, bool sameX, bool fromLeft, bool sameY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$StartTrailMove
   DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__StartTrailMove
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, bool sameX,
   bool fromLeft, bool sameY, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__StartTrailMove_2f5fe38
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7,uint param_8,uint param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  puVar1 = PTR_DAT_057c21b8;
  if ((bRam0000000005c308f2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
                    /* try { // try from 0305feb0 to 0315febb has its CatchHandler @ 03060080 */
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057a34c0);
                    /* try { // try from 0305fedc to 0315ff6f has its CatchHandler @ 030600b0 */
    FUN_012d0dc8(PTR_DAT_057c21b8);
    bRam0000000005c308f2 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0576c200;
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(long *)(lVar2 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar2 + 0x18),param_4);
    lVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__GetAvailableTrail_2f6046c
                      (param_4);
    plVar8 = (long *)(lVar2 + 0x10);
    *plVar8 = lVar3;
    FUN_012d0d74(plVar8,lVar3);
    lVar3 = *plVar8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Equality_407f288(lVar3,0,0);
    puVar1 = PTR_DAT_057fc1d0;
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 0305ff70 to 0315ffcb has its CatchHandler @ 0305f7b4 */
      if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
      uVar5 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
      if ((bRam0000000005c2b026 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576c200,uVar5,*(undefined8 *)puVar1);
        FUN_012d0dc8(PTR_DAT_05794618);
        FUN_012d0dc8(PTR_DAT_058163b8);
        bRam0000000005c2b026 = 1;
      }
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) && (*(char *)(lVar2 + 0xe9) == '\0'))
      {
        if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar4 = UnityEngine_Object__op_Equality_407f288(uVar5,0,0);
        if ((uVar4 & 1) == 0) {
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05794618);
          puVar1 = PTR_DAT_058163b8;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          DG_Tweening_Core_TweenLink___ctor_332f2e4(lVar3,uVar5,6,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          DG_Tweening_Core_TweenManager__AddTweenLink_3330cfc(lVar2,lVar3,0);
        }
      }
      return lVar2;
    }
                    /* try { // try from 0305ffcc to 0315ffcf has its CatchHandler @ 03060078 */
                    /* try { // try from 0305ffd0 to 0315ffd7 has its CatchHandler @ 0306009c */
                    /* try { // try from 0305ffd8 to 0315ffdb has its CatchHandler @ 03060074 */
                    /* try { // try from 0305ffdc to 0315ffe3 has its CatchHandler @ 03060098 */
                    /* try { // try from 0305ffe4 to 0315ffe7 has its CatchHandler @ 03060070 */
                    /* try { // try from 0305ffe8 to 0315ffef has its CatchHandler @ 03060094 */
                    /* try { // try from 0305fff0 to 0315fff3 has its CatchHandler @ 0306006c */
                    /* try { // try from 0305fff4 to 0315fffb has its CatchHandler @ 03060090 */
    if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar3 != 0)) &&
       (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar3,*(undefined8 *)PTR_DAT_0575c3c8), lVar3 != 0)) {
      lVar9 = *plVar8;
                    /* try { // try from 0305fffc to 0315ffff has its CatchHandler @ 03060068 */
                    /* try { // try from 03060000 to 03160007 has its CatchHandler @ 0306008c */
      auVar14 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxKeyMovingSorting_4002b40
                          (lVar3,0);
      if (lVar9 != 0) {
                    /* try { // try from 03060008 to 0316000b has its CatchHandler @ 03060064 */
                    /* try { // try from 0306000c to 03160013 has its CatchHandler @ 03060088 */
                    /* try { // try from 03060014 to 03160017 has its CatchHandler @ 03060060 */
                    /* try { // try from 03060018 to 0316001f has its CatchHandler @ 03060084 */
        Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__SetVfxSorting_2f5f9a4
                  (lVar9,auVar14._0_8_,auVar14._8_8_);
                    /* try { // try from 03060020 to 03160027 has its CatchHandler @ 030600b8 */
                    /* try { // try from 03060028 to 0316002b has its CatchHandler @ 0306005c */
                    /* try { // try from 0306002c to 03160033 has its CatchHandler @ 030600b4 */
                    /* try { // try from 03060034 to 03160037 has its CatchHandler @ 03060058 */
                    /* try { // try from 03060038 to 0316003f has its CatchHandler @ 03060080 */
                    /* try { // try from 03060040 to 03160047 has its CatchHandler @ 030600b0 */
                    /* try { // try from 03060048 to 0316004b has its CatchHandler @ 03060054 */
                    /* try { // try from 0306004c to 0316004f has its CatchHandler @ 03060050 */
        if (((*plVar8 != 0) &&
            (lVar3 = UnityEngine_Component__get_gameObject_408b480(*plVar8,0), lVar3 != 0)) &&
           ((lVar3 = UnityEngine_GameObject__get_transform_408e25c(lVar3,0), lVar3 != 0 &&
            (UnityEngine_Transform__set_parent_40933e0(lVar3,0,0), param_5 != 0)))) {
                    /* catch() { ... } // from try @ 0306004c with catch @ 03060050
                       try { // try from 03060050 to 031600cf has its CatchHandler @ 0305f7b4 */
          lVar3 = *plVar8;
                    /* catch() { ... } // from try @ 03060048 with catch @ 03060054 */
                    /* catch() { ... } // from try @ 03060034 with catch @ 03060058 */
                    /* catch() { ... } // from try @ 03060028 with catch @ 0306005c */
          plVar8 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                     (param_5,0);
                    /* catch() { ... } // from try @ 03060014 with catch @ 03060060 */
          if (plVar8 != (long *)0x0) {
                    /* catch() { ... } // from try @ 03060008 with catch @ 03060064 */
                    /* catch() { ... } // from try @ 0305fffc with catch @ 03060068 */
            lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 0305fff0 with catch @ 0306006c */
                    /* catch() { ... } // from try @ 0305ffe4 with catch @ 03060070 */
                    /* catch() { ... } // from try @ 0305ffd8 with catch @ 03060074 */
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    /* catch() { ... } // from try @ 0305ffcc with catch @ 03060078 */
                    /* catch() { ... } // from try @ 0305f968 with catch @ 0306007c */
            if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 0305feb0 with catch @ 03060080
                       catch() { ... } // from try @ 03060038 with catch @ 03060080 */
                    /* catch() { ... } // from try @ 0305fd1c with catch @ 03060084
                       catch() { ... } // from try @ 03060018 with catch @ 03060084 */
              piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                    /* catch() { ... } // from try @ 0305fca4 with catch @ 03060088
                       catch() { ... } // from try @ 0306000c with catch @ 03060088 */
                    /* catch() { ... } // from try @ 0305fc1c with catch @ 0306008c
                       catch() { ... } // from try @ 03060000 with catch @ 0306008c */
                    /* catch() { ... } // from try @ 0305fb94 with catch @ 03060090
                       catch() { ... } // from try @ 0305fff4 with catch @ 03060090 */
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* catch() { ... } // from try @ 0305fedc with catch @ 030600b0
                       catch() { ... } // from try @ 03060040 with catch @ 030600b0 */
                    /* catch() { ... } // from try @ 0305fdbc with catch @ 030600b4
                       catch() { ... } // from try @ 0306002c with catch @ 030600b4 */
                    /* catch() { ... } // from try @ 0305fd34 with catch @ 030600b8
                       catch() { ... } // from try @ 03060020 with catch @ 030600b8 */
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_030600bc;
                }
                    /* catch() { ... } // from try @ 0305fb0c with catch @ 03060094
                       catch() { ... } // from try @ 0305ffe8 with catch @ 03060094 */
                uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 0305fa84 with catch @ 03060098
                       catch() { ... } // from try @ 0305ffdc with catch @ 03060098 */
                piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0305fa04 with catch @ 0306009c
                       catch() { ... } // from try @ 0305ffd0 with catch @ 0306009c */
              } while (uVar4 != 0);
            }
                    /* catch() { ... } // from try @ 0305fc48 with catch @ 030600a0 */
                    /* catch() { ... } // from try @ 0305fbc0 with catch @ 030600a4 */
                    /* catch() { ... } // from try @ 0305fb38 with catch @ 030600a8 */
            puVar6 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_0575a2d8,0);
                    /* catch() { ... } // from try @ 0305f988 with catch @ 030600ac */
LAB_030600bc:
            fVar10 = (float)(*(code *)*puVar6)(plVar8,puVar6[1]);
            if (*(long *)(param_4 + 0x40) != 0) {
                    /* try { // try from 030600d0 to 031600d3 has its CatchHandler @ 030600e0 */
              fVar12 = param_2;
              fVar13 = param_3;
                    /* catch() { ... } // from try @ 030600d0 with catch @ 030600e0 */
              fVar11 = (float)Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagAnimationConfig__GetTrailSpawnOffset_2f5dff0
                                        (*(long *)(param_4 + 0x40),*(undefined4 *)(param_5 + 0x48));
                    /* try { // try from 030600f0 to 031600ff has its CatchHandler @ 03060114 */
              uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
              puVar1 = PTR_DAT_057606c8;
              if (lVar3 != 0) {
                    /* try { // try from 03060100 to 0316010b has its CatchHandler @ 0305f7b4 */
                    /* try { // try from 0306010c to 03160113 has its CatchHandler @ 03060114 */
                    /* catch() { ... } // from try @ 030600f0 with catch @ 03060114
                       catch() { ... } // from try @ 0306010c with catch @ 03060114 */
                    /* try { // try from 03060118 to 031602a7 has its CatchHandler @ 03060118
                       catch() { ... } // from try @ 03060118 with catch @ 03060118
                       catch() { ... } // from try @ 030606d0 with catch @ 03060118
                       catch() { ... } // from try @ 03060784 with catch @ 03060118
                       catch() { ... } // from try @ 03060820 with catch @ 03060118 */
                lVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__PlayMoveFrom_2f5f738
                                  (fVar10 + fVar11,param_2 + fVar12,param_3 + fVar13,lVar3,uVar5,
                                   *(undefined8 *)(param_4 + 0x40),0,param_8 & 1,param_9 & 1);
                lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar9 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar9,lVar2,*(undefined8 *)PTR_DAT_057a34c0,0);
                  DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar3,lVar9,0);
                  return lVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

