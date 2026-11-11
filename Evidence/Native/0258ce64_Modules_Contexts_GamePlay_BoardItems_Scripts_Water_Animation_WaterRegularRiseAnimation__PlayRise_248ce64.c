/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRegularRiseAnimation$$PlayRise
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation__PlayRise (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation_o* __this, int32_t previousHeight, int32_t targetHeight, int32_t distanceToBottomOfTheBottle, float yPosition, bool isForGenerator, int32_t variant, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRegularRiseAnimation$$PlayRise
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation__PlayRise
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation_o*
   __this, int32_t previousHeight, int32_t targetHeight, int32_t distanceToBottomOfTheBottle, float
   yPosition, bool isForGenerator, int32_t variant, System_Action_o* onComplete, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation__PlayRise_248ce64
               (undefined8 param_1,long param_2,int param_3,int param_4,int param_5,uint param_6,
               int param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar2 = PTR_DAT_05763880;
  if ((bRam0000000005c2b283 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_057adcb8);
    FUN_012d0dc8(PTR_DAT_05763880);
    bRam0000000005c2b283 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_8;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_8);
    lVar4 = 0x18;
    if (param_7 != 0) {
      lVar4 = 0x20;
    }
    if ((param_6 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_2 + lVar4);
      if (cRam0000000005c23dd6 == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c23dd6 = '\x01';
      }
      param_5 = (param_4 - param_3) - param_5;
      lVar4 = *(long *)PTR_DAT_057d6f00;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        lVar4 = thunk_FUN_0130472c();
      }
      iVar1 = -param_5;
      if (-1 < param_5) {
        iVar1 = param_5;
      }
      lVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRegularRiseAnimation__GetDurationsByHeights_248d0b8
                        (lVar4,iVar1,uVar5);
      if (lVar4 == 0) goto LAB_0258d0ac;
      uVar8 = *(undefined4 *)(lVar4 + 0x14);
    }
    else {
      uVar8 = 0x3f000000;
    }
    puVar2 = PTR_DAT_057606c8;
    lVar4 = *(long *)(param_2 + 0x28);
    if (lVar4 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar4,0,0);
    }
    uVar5 = UnityEngine_Component__get_transform_408b444(param_2,0);
    uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (0x3f800000,0x3f800000,0x3f800000,uVar8,uVar5,0);
    *(undefined8 *)(param_2 + 0x28) = uVar5;
    FUN_012d0d74((long *)(param_2 + 0x28),uVar5);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_0578afb0;
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_057adcb8,0);
      DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                (uVar5,lVar4,*(undefined8 *)puVar2);
      plVar6 = (long *)(param_2 + 0x30);
      if (*plVar6 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
      }
      uVar5 = UnityEngine_Component__get_transform_408b444(param_2,0);
      lVar3 = UnityEngine_Component__get_transform_408b444(param_2,0);
      if (lVar3 != 0) {
        uVar7 = UnityEngine_Transform__get_localPosition_4092c40(lVar3,0);
        lVar3 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4(uVar7,param_1,0,uVar8,uVar5,0,0)
        ;
        *plVar6 = lVar3;
        FUN_012d0d74(plVar6,lVar3);
        return *plVar6;
      }
    }
  }
LAB_0258d0ac:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

