/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayRise
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayRise (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t snitchIndex, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayRise
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayRise
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t
   snitchIndex, UnityEngine_Vector3_o targetPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayRise_260f674
          (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_057a3190;
  if ((bRam0000000005c2b9fc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_05785838);
    FUN_012d0dc8(PTR_DAT_057a6760);
    FUN_012d0dc8(PTR_DAT_057ba358);
    FUN_012d0dc8(PTR_DAT_057a3190);
    bRam0000000005c2b9fc = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057fc1d0;
  puVar1 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_1);
    *(undefined4 *)(lVar3 + 0x18) = param_2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar5 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                      (uVar4,uVar5,*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_057606c8;
                    /* try { // try from 0270f77c to 0280f7cf has its CatchHandler @ 0270f77c
                       catch() { ... } // from try @ 0270f77c with catch @ 0270f77c
                       catch() { ... } // from try @ 0270f838 with catch @ 0270f77c
                       catch() { ... } // from try @ 0270f868 with catch @ 0270f77c
                       catch() { ... } // from try @ 0270f8e4 with catch @ 0270f77c */
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x134);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
      if (lVar6 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar3,*(undefined8 *)PTR_DAT_05785838,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar7,uVar4,lVar6,0);
                    /* try { // try from 0270f7d0 to 0280f837 has its CatchHandler @ 0270f838 */
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x2e0);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar6 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar3,*(undefined8 *)PTR_DAT_057a6760,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar7,uVar4,lVar6,0);
            if (*(long *)(param_1 + 0x38) != 0) {
              uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x130);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar6 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270f7d0 with catch @ 0270f838
                       try { // try from 0270f838 to 0280f84f has its CatchHandler @ 0270f77c */
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar6,lVar3,*(undefined8 *)PTR_DAT_057ba358,0);
                    /* try { // try from 0270f850 to 0280f867 has its CatchHandler @ 0270f8dc */
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar7,uVar4,lVar6,0);
                lVar6 = *(long *)(param_1 + 0x38);
                if (lVar6 != 0) {
                    /* try { // try from 0270f868 to 0280f8cb has its CatchHandler @ 0270f77c */
                  uVar7 = *(undefined4 *)(lVar6 + 0x130);
                  uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySwayIntensity_260f504
                                    (*(undefined4 *)(lVar6 + 0x2cc),0x3f800000,param_1,
                                     *(undefined8 *)(lVar6 + 0x2d0));
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar7,uVar4,uVar5,0);
                  if (*(long *)(param_1 + 0x38) != 0) {
                    uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x130);
                    uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayRiseScale_260f90c
                                      (param_1);
                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar7,uVar4,uVar5,0);
                    if (*(long *)(param_1 + 0x38) != 0) {
                      uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x130);
                    /* try { // try from 0270f8cc to 0280f8db has its CatchHandler @ 0270f8dc */
                      uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchRiseMove_260f9ac
                                        (param_1,*(undefined4 *)(lVar3 + 0x18));
                    /* catch() { ... } // from try @ 0270f850 with catch @ 0270f8dc
                       catch() { ... } // from try @ 0270f8cc with catch @ 0270f8dc */
                    /* try { // try from 0270f8e0 to 0280f8e3 has its CatchHandler @ 0270f8ec */
                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar7,uVar4,uVar5,0);
                    /* try { // try from 0270f8e4 to 0280f8ef has its CatchHandler @ 0270f77c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270f8e0 with catch @ 0270f8ec
                        */
                    /* try { // try from 0270f8f0 to 0280fbff has its CatchHandler @ 0270f8f0
                       catch() { ... } // from try @ 0270f8f0 with catch @ 0270f8f0
                       catch() { ... } // from try @ 0270fcc0 with catch @ 0270f8f0
                       catch() { ... } // from try @ 0270fd84 with catch @ 0270f8f0
                       catch() { ... } // from try @ 0270fe20 with catch @ 0270f8f0 */
                      return uVar4;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

