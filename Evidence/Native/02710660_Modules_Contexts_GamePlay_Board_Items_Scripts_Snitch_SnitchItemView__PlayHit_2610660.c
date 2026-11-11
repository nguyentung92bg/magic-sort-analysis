/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayHit
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayHit (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t snitchIndex, Modules_Infrastructure_Common_Scripts_Component_AItem_o* targetMoveItem, UnityEngine_Vector3_o targetBottleRoot, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayHit
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayHit
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t
   snitchIndex, Modules_Infrastructure_Common_Scripts_Component_AItem_o* targetMoveItem,
   UnityEngine_Vector3_o targetBottleRoot, System_Action_o* onComplete, const MethodInfo* method);
    */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayHit_2610660
          (float param_1,float param_2,long param_3,undefined4 param_4,long param_5,
          undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  puVar1 = PTR_DAT_058127a8;
  fVar10 = param_2;
  if ((bRam0000000005c2b9ff & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057c3048);
    FUN_012d0dc8(PTR_DAT_057d3ae8);
    FUN_012d0dc8(PTR_DAT_058127a8);
    bRam0000000005c2b9ff = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = param_3;
    FUN_012d0d74((long *)(lVar4 + 0x10),param_3);
    *(undefined8 *)(lVar4 + 0x20) = param_6;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x20),param_6);
    puVar3 = PTR_DAT_057fc1d0;
    puVar2 = PTR_DAT_057815e0;
    puVar1 = PTR_DAT_057606c8;
    if ((param_5 != 0) && (*(long *)(param_3 + 0x38) != 0)) {
                    /* try { // try from 02710764 to 0281078b has its CatchHandler @ 02710930 */
      fVar8 = (float)Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchTargetOffsetForItemType_20fa198
                               (*(long *)(param_3 + 0x38),*(undefined4 *)(param_5 + 0x18),0);
      *(float *)(lVar4 + 0x18) = param_1 + fVar8;
      *(float *)(lVar4 + 0x1c) = param_2 + fVar10;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      uVar6 = UnityEngine_Component__get_gameObject_408b480(param_3,0);
                    /* try { // try from 027107a4 to 02810803 has its CatchHandler @ 02710934 */
      uVar5 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                        (uVar5,uVar6,*(undefined8 *)puVar3);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_05818d48;
      if (lVar7 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,lVar4,*(undefined8 *)PTR_DAT_057c3048,0);
        DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0
                  (uVar5,lVar7,*(undefined8 *)puVar2);
        uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchDynamicHitDuration_260f1e0
                          (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),0,param_3,
                           param_4);
        if (*(long *)(param_3 + 0x38) != 0) {
          uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySwayIntensity_260f504
                            (uVar9,0,param_3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x2d8));
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar6,0);
                    /* try { // try from 0271083c to 02810843 has its CatchHandler @ 0271092c */
          uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayHitScale_26108e0
                            (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),0,param_3,
                             param_4);
                    /* try { // try from 02710844 to 02810903 has its CatchHandler @ 02710644 */
          DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar6,0);
          uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchHitMoveFromPosition_2610994
                            (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),0,param_3,
                             param_4,param_5);
          DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar5,uVar6,0);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar7 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,lVar4,*(undefined8 *)PTR_DAT_057d3ae8,0);
            DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar7,0);
            return uVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

