/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.WaterLine.WaterLineView$$PlayAnimation
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineView__PlayAnimation (Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineView_o* __this, float distanceToWater, float duration, bool leftSide, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.WaterLine.WaterLineView$$PlayAnimation
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineView__PlayAnimation
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineView_o* __this, float
   distanceToWater, float duration, bool leftSide, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineView__PlayAnimation_230835c
               (float param_1,float param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  puVar2 = PTR_DAT_05800ce0;
  if ((bRam0000000005c2a65d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057f65b8);
                    /* try { // try from 024083bc to 02508413 has its CatchHandler @ 024083bc
                       catch() { ... } // from try @ 024083bc with catch @ 024083bc
                       catch() { ... } // from try @ 0240848c with catch @ 024083bc
                       catch() { ... } // from try @ 024084bc with catch @ 024083bc
                       catch() { ... } // from try @ 02408530 with catch @ 024083bc */
    FUN_012d0dc8(PTR_DAT_05779108);
    FUN_012d0dc8(PTR_DAT_05766748);
    FUN_012d0dc8(PTR_DAT_05800ce0);
    bRam0000000005c2a65d = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(long *)(lVar5 + 0x10) = param_3;
    FUN_012d0d74((long *)(lVar5 + 0x10),param_3);
                    /* try { // try from 02408414 to 0250848b has its CatchHandler @ 0240848c */
    *(float *)(lVar5 + 0x18) = param_1;
    lVar8 = *(long *)(param_3 + 0x28);
    if (lVar8 != 0) {
      *(float *)(lVar5 + 0x18) = param_1 - *(float *)(lVar8 + 0x38);
      if (*(long *)(param_3 + 0x20) != 0) {
        fVar10 = *(float *)(lVar8 + 0x18);
        fVar9 = *(float *)(lVar8 + 0x1c);
        UnityEngine_Renderer__set_enabled_40822b8(*(long *)(param_3 + 0x20),1,0);
        if (*(long *)(param_3 + 0x20) != 0) {
          UnityEngine_SpriteRenderer__set_flipX_4095ef8(*(long *)(param_3 + 0x20),param_4 & 1,0);
          if ((*(long *)(param_3 + 0x28) != 0) &&
             (lVar8 = *(long *)(*(long *)(param_3 + 0x28) + 0x20), lVar8 != 0)) {
            if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef8();
            }
            if (*(long *)(param_3 + 0x20) != 0) {
              UnityEngine_SpriteRenderer__set_sprite_4095b64
                        (*(long *)(param_3 + 0x20),*(undefined8 *)(lVar8 + 0x20),0);
              uVar1 = _UNK_0434ccf4;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02408414 with catch @ 0240848c
                       try { // try from 0240848c to 025084a3 has its CatchHandler @ 024083bc */
              if ((*(long *)(param_3 + 0x28) != 0) && (*(long *)(param_3 + 0x20) != 0)) {
                    /* try { // try from 024084a4 to 025084bb has its CatchHandler @ 02408528 */
                UnityEngine_SpriteRenderer__set_size_4095cb8
                          (*(undefined4 *)(*(long *)(param_3 + 0x28) + 0x30),_UNK_0434ccf4,
                           *(long *)(param_3 + 0x20),0);
                if (*(long *)(param_3 + 0x20) != 0) {
                  lVar8 = UnityEngine_Component__get_transform_408b444(*(long *)(param_3 + 0x20),0);
                  puVar3 = PTR_DAT_057cc518;
                  puVar2 = PTR_DAT_057815e0;
                    /* try { // try from 024084bc to 02508517 has its CatchHandler @ 024083bc */
                  if ((*(long *)(param_3 + 0x28) != 0) && (lVar8 != 0)) {
                    UnityEngine_Transform__set_localPosition_4092ce0
                              (0,*(undefined4 *)(*(long *)(param_3 + 0x28) + 0x34),0,lVar8,0);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    lVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
                    uVar11 = *(undefined4 *)(lVar5 + 0x18);
                    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    puVar2 = PTR_DAT_057f65b8;
                    /* try { // try from 02408518 to 02508527 has its CatchHandler @ 02408528 */
                    if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 024084a4 with catch @ 02408528
                       catch() { ... } // from try @ 02408518 with catch @ 02408528 */
                    /* try { // try from 0240852c to 0250852f has its CatchHandler @ 02408538 */
                    /* try { // try from 02408530 to 0250853b has its CatchHandler @ 024083bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240852c with catch @ 02408538
                        */
                      DG_Tweening_TweenCallback_float____ctor_341f244
                                (lVar6,lVar5,*(undefined8 *)PTR_DAT_05779108,0);
                      uVar7 = DG_Tweening_DOVirtual__Float_1edbb8c(uVar1,uVar11,fVar10,lVar6,0);
                      uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                        (uVar7,1,*(undefined8 *)puVar2);
                      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar8,uVar7,0);
                      DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                                (param_2 - (fVar10 + fVar9),lVar8,0);
                      uVar11 = *(undefined4 *)(lVar5 + 0x18);
                      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                      if (lVar6 != 0) {
                        DG_Tweening_TweenCallback_float____ctor_341f244
                                  (lVar6,lVar5,*(undefined8 *)PTR_DAT_05766748,0);
                        uVar7 = DG_Tweening_DOVirtual__Float_1edbb8c(uVar11,uVar1,fVar9,lVar6,0);
                        uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                          (uVar7,1,*(undefined8 *)puVar2);
                        uVar4 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                          (lVar8,uVar7,0);
                        if ((uVar4 & 1) != 0) {
                          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          DG_Tweening_Sequence__DoInsert_1edfca4
                                    (*(undefined4 *)(lVar8 + 0xa0),lVar8,uVar7);
                        }
                        return lVar8;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

