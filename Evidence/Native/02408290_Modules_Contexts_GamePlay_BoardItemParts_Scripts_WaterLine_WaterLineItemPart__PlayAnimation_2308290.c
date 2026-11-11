/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.WaterLine.WaterLineItemPart$$PlayAnimation
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart__PlayAnimation (Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart_o* __this, float distanceToWater, float duration, bool leftSide, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItemParts.Scripts.WaterLine.WaterLineItemPart$$PlayAnimation
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart__PlayAnimation
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart_o* __this, float
   distanceToWater, float duration, bool leftSide, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart__PlayAnimation_2308290
               (float param_1,float param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  puVar2 = PTR_DAT_05805c10;
  lVar7 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalScale_40ea8f8
            (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
             *(undefined4 *)(lVar7 + 0x14),param_3,0);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar8 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
  Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalPosition_40ea748
            (*puVar8,puVar8[1],puVar8[2],param_3,0);
  puVar2 = PTR_DAT_05800ce0;
  lVar7 = *(long *)(param_3 + 0x28);
  if (lVar7 != 0) {
    if ((bRam0000000005c2a65d & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057815e0);
      FUN_012d0dc8(PTR_DAT_057cc518);
      FUN_012d0dc8(PTR_DAT_057f65b8);
      FUN_012d0dc8(PTR_DAT_05779108);
      FUN_012d0dc8(PTR_DAT_05766748);
      FUN_012d0dc8(PTR_DAT_05800ce0);
      bRam0000000005c2a65d = 1;
    }
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      System_Object___ctor_23dfe5c(lVar5,0);
      *(long *)(lVar5 + 0x10) = lVar7;
      FUN_012d0d74((long *)(lVar5 + 0x10),lVar7);
      *(float *)(lVar5 + 0x18) = param_1;
      lVar9 = *(long *)(lVar7 + 0x28);
      if (lVar9 != 0) {
        *(float *)(lVar5 + 0x18) = param_1 - *(float *)(lVar9 + 0x38);
        if (*(long *)(lVar7 + 0x20) != 0) {
          fVar11 = *(float *)(lVar9 + 0x18);
          fVar10 = *(float *)(lVar9 + 0x1c);
          UnityEngine_Renderer__set_enabled_40822b8(*(long *)(lVar7 + 0x20),1,0);
          if (*(long *)(lVar7 + 0x20) != 0) {
            UnityEngine_SpriteRenderer__set_flipX_4095ef8(*(long *)(lVar7 + 0x20),param_4 & 1,0);
            if ((*(long *)(lVar7 + 0x28) != 0) &&
               (lVar9 = *(long *)(*(long *)(lVar7 + 0x28) + 0x20), lVar9 != 0)) {
              if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef8();
              }
              if (*(long *)(lVar7 + 0x20) != 0) {
                UnityEngine_SpriteRenderer__set_sprite_4095b64
                          (*(long *)(lVar7 + 0x20),*(undefined8 *)(lVar9 + 0x20),0);
                uVar1 = _UNK_0434ccf4;
                if ((*(long *)(lVar7 + 0x28) != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
                  UnityEngine_SpriteRenderer__set_size_4095cb8
                            (*(undefined4 *)(*(long *)(lVar7 + 0x28) + 0x30),_UNK_0434ccf4,
                             *(long *)(lVar7 + 0x20),0);
                  if (*(long *)(lVar7 + 0x20) != 0) {
                    lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(lVar7 + 0x20),0);
                    puVar3 = PTR_DAT_057cc518;
                    puVar2 = PTR_DAT_057815e0;
                    if ((*(long *)(lVar7 + 0x28) != 0) && (lVar9 != 0)) {
                      UnityEngine_Transform__set_localPosition_4092ce0
                                (0,*(undefined4 *)(*(long *)(lVar7 + 0x28) + 0x34),0,lVar9,0);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                      }
                      lVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
                      uVar12 = *(undefined4 *)(lVar5 + 0x18);
                      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                      puVar2 = PTR_DAT_057f65b8;
                      if (lVar9 != 0) {
                        DG_Tweening_TweenCallback_float____ctor_341f244
                                  (lVar9,lVar5,*(undefined8 *)PTR_DAT_05779108,0);
                        uVar6 = DG_Tweening_DOVirtual__Float_1edbb8c(uVar1,uVar12,fVar11,lVar9,0);
                        uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                          (uVar6,1,*(undefined8 *)puVar2);
                        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar7,uVar6,0);
                        DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                                  (param_2 - (fVar11 + fVar10),lVar7,0);
                        uVar12 = *(undefined4 *)(lVar5 + 0x18);
                        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                        if (lVar9 != 0) {
                          DG_Tweening_TweenCallback_float____ctor_341f244
                                    (lVar9,lVar5,*(undefined8 *)PTR_DAT_05766748,0);
                          uVar6 = DG_Tweening_DOVirtual__Float_1edbb8c(uVar12,uVar1,fVar10,lVar9,0);
                          uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                            (uVar6,1,*(undefined8 *)puVar2);
                          uVar4 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                            (lVar7,uVar6,0);
                          if ((uVar4 & 1) != 0) {
                            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            DG_Tweening_Sequence__DoInsert_1edfca4
                                      (*(undefined4 *)(lVar7 + 0xa0),lVar7,uVar6);
                          }
                          return lVar7;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

