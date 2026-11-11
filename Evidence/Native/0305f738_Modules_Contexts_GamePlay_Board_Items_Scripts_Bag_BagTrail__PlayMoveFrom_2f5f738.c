/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagTrail$$PlayMoveFrom
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__PlayMoveFrom (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail_o* __this, UnityEngine_Vector3_o fromPosition, UnityEngine_Transform_o* toTransform, Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagAnimationConfig_o* config, bool sameX, bool fromLeft, bool sameY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagTrail$$PlayMoveFrom
   DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__PlayMoveFrom
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail_o* __this, UnityEngine_Vector3_o
   fromPosition, UnityEngine_Transform_o* toTransform,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagAnimationConfig_o* config, bool sameX, bool
   fromLeft, bool sameY, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagTrail__PlayMoveFrom_2f5f738
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 param_5,
          long param_6,undefined8 param_7,byte param_8,byte param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
                    /* catch() { ... } // from try @ 0305f518 with catch @ 0305f738
                       catch() { ... } // from try @ 0305f700 with catch @ 0305f738 */
  puVar1 = PTR_DAT_05764898;
                    /* catch() { ... } // from try @ 0305f498 with catch @ 0305f73c
                       catch() { ... } // from try @ 0305f6f4 with catch @ 0305f73c */
                    /* catch() { ... } // from try @ 0305f428 with catch @ 0305f740
                       catch() { ... } // from try @ 0305f6e8 with catch @ 0305f740 */
                    /* catch() { ... } // from try @ 0305f3c4 with catch @ 0305f744 */
                    /* catch() { ... } // from try @ 0305f3a0 with catch @ 0305f748 */
                    /* catch() { ... } // from try @ 0305f374 with catch @ 0305f74c */
                    /* catch() { ... } // from try @ 0305f5f4 with catch @ 0305f750
                       catch() { ... } // from try @ 0305f714 with catch @ 0305f750 */
                    /* catch() { ... } // from try @ 0305f544 with catch @ 0305f754
                       catch() { ... } // from try @ 0305f708 with catch @ 0305f754 */
                    /* try { // try from 0305f76c to 0315f76f has its CatchHandler @ 0305f77c */
                    /* catch() { ... } // from try @ 0305f76c with catch @ 0305f77c */
  if ((bRam0000000005c308eb & 1) == 0) {
                    /* try { // try from 0305f78c to 0315f79b has its CatchHandler @ 0305f7b0 */
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
                    /* try { // try from 0305f79c to 0315f7a7 has its CatchHandler @ 0305f0f4 */
    FUN_012d0dc8(PTR_DAT_0579e470);
                    /* try { // try from 0305f7a8 to 0315f7af has its CatchHandler @ 0305f7b0 */
                    /* catch() { ... } // from try @ 0305f78c with catch @ 0305f7b0
                       catch() { ... } // from try @ 0305f7a8 with catch @ 0305f7b0 */
    FUN_012d0dc8(PTR_DAT_05809250);
                    /* try { // try from 0305f7b4 to 0315f967 has its CatchHandler @ 0305f7b4
                       catch() { ... } // from try @ 0305f7b4 with catch @ 0305f7b4
                       catch() { ... } // from try @ 0305ff70 with catch @ 0305f7b4
                       catch() { ... } // from try @ 03060050 with catch @ 0305f7b4
                       catch() { ... } // from try @ 03060100 with catch @ 0305f7b4 */
    FUN_012d0dc8(PTR_DAT_057f0af8);
    FUN_012d0dc8(PTR_DAT_057bcf38);
    FUN_012d0dc8(PTR_DAT_057850d0);
    FUN_012d0dc8(PTR_DAT_05764898);
    bRam0000000005c308eb = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_4);
    *(undefined4 *)(lVar3 + 0x18) = param_1;
    *(undefined4 *)(lVar3 + 0x1c) = param_2;
    *(undefined4 *)(lVar3 + 0x20) = param_3;
    *(undefined8 *)(lVar3 + 0x28) = param_5;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x28),param_5);
    *(byte *)(lVar3 + 0x30) = param_9 & 1;
    *(byte *)(lVar3 + 0x31) = param_8 & 1;
    plVar6 = (long *)(lVar3 + 0x38);
    *plVar6 = param_6;
    FUN_012d0d74(plVar6,param_6);
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x40),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    puVar1 = PTR_DAT_057606c8;
    if (*plVar6 != 0) {
      DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                (*(undefined4 *)(*plVar6 + 0x40),uVar4,0);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_057f0af8,0);
        DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar4,lVar5,0);
        if (*(long *)(lVar3 + 0x38) != 0) {
          DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                    (*(undefined4 *)(*(long *)(lVar3 + 0x38) + 0x28),uVar4,0);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_0579e470;
          if (lVar5 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_057bcf38,0);
            DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                      (uVar4,lVar5,*(undefined8 *)puVar2);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_05809250;
            if (lVar5 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar5,lVar3,*(undefined8 *)PTR_DAT_057850d0,0);
                    /* try { // try from 0305f968 to 0315f96b has its CatchHandler @ 0306007c */
              DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                        (uVar4,lVar5,*(undefined8 *)puVar1);
                    /* try { // try from 0305f988 to 0315f98f has its CatchHandler @ 030600ac */
              return uVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

