/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySnitchHitMoveFromPosition
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchHitMoveFromPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o targetPosition, int32_t index, Modules_Infrastructure_Common_Scripts_Component_AItem_o* targetItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySnitchHitMoveFromPosition
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchHitMoveFromPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o targetPosition, int32_t index,
   Modules_Infrastructure_Common_Scripts_Component_AItem_o* targetItem, const MethodInfo* method);
    */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchHitMoveFromPosition_2610994
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5,
          undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar1 = PTR_DAT_057a38a0;
                    /* try { // try from 027109b4 to 028109bf has its CatchHandler @ 02710644 */
                    /* try { // try from 027109c0 to 028109c7 has its CatchHandler @ 027109d4 */
                    /* catch() { ... } // from try @ 0271094c with catch @ 027109c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0271098c with catch @ 027109d4
                       catch(type#2 @ 00000000) { ... } // from try @ 027109c0 with catch @ 027109d4
                        */
  if ((bRam0000000005c2ba02 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_0576f878);
    FUN_012d0dc8(PTR_DAT_057b0578);
    FUN_012d0dc8(PTR_DAT_057a38a0);
    bRam0000000005c2ba02 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057fc1d0;
  puVar1 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_6;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_6);
    *(long *)(lVar3 + 0x18) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x18),param_4);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar5 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                      (uVar4,uVar5,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_057874c0;
    puVar1 = PTR_DAT_057606c8;
    if (*(long *)(param_4 + 0x38) != 0) {
      Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseWorldTargetPositionsByIndex_20fa0e8
                (*(long *)(param_4 + 0x38),param_5,0);
      auVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchHitCurvesForPosition_2611a04
                         (param_4);
      uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
      uVar8 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchDynamicHitDuration_260f1e0
                        (param_1,param_2,param_3,param_4,param_5);
      uVar5 = DG_Tweening_ShortcutExtensions__DOMoveX_1ee516c(param_1,uVar8,uVar5,0,0);
      uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar5,auVar9._0_8_,*(undefined8 *)puVar2);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
      uVar5 = UnityEngine_Component__get_transform_408b444(param_4,0);
      uVar8 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchDynamicHitDuration_260f1e0
                        (param_1,param_2,param_3,param_4,param_5);
      uVar5 = DG_Tweening_ShortcutExtensions__DOMoveY_1ee533c(param_2,uVar8,uVar5,0,0);
      uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar5,auVar9._8_8_,*(undefined8 *)puVar2);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
      fVar7 = (float)Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchDynamicHitDuration_260f1e0
                               (param_1,param_2,param_3,param_4,param_5);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar6 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar3,*(undefined8 *)PTR_DAT_0576f878,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                  (fVar7 + _UNK_0438ebc0,uVar4,lVar6,0);
        uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchDynamicHitDuration_260f1e0
                          (param_1,param_2,param_3,param_4,param_5);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar6 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar3,*(undefined8 *)PTR_DAT_057b0578,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar5,uVar4,lVar6,0);
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

