/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterDailyRiseAnimation$$PlayRise
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation__PlayRise (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation_o* __this, int32_t previousHeight, int32_t targetHeight, int32_t distanceToBottomOfTheBottle, float yPosition, bool isForGenerator, int32_t variant, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterDailyRiseAnimation$$PlayRise
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation__PlayRise
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation_o* __this,
   int32_t previousHeight, int32_t targetHeight, int32_t distanceToBottomOfTheBottle, float
   yPosition, bool isForGenerator, int32_t variant, System_Action_o* onComplete, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterDailyRiseAnimation__PlayRise_248cb5c
               (undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_057cb2f0;
  if ((bRam0000000005c2b282 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05818b08);
    FUN_012d0dc8(PTR_DAT_057cb2f0);
    bRam0000000005c2b282 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = in_x6;
    FUN_012d0d74((undefined8 *)(lVar2 + 0x10),in_x6);
    lVar5 = *(long *)(param_2 + 0x18);
    if (lVar5 != 0) {
      fVar7 = (float)param_4 / 12.0;
      fVar8 = fVar7;
      if (1.0 < fVar7) {
        fVar8 = 1.0;
      }
      lVar3 = *(long *)(param_2 + 0x20);
      if (fVar7 < 0.0) {
        fVar8 = 0.0;
      }
      fVar8 = *(float *)(lVar5 + 0x20) +
              fVar8 * (*(float *)(lVar5 + 0x24) - *(float *)(lVar5 + 0x20));
      if (lVar3 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar3,0,0);
      }
      uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
      uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (0x3f800000,0x3f800000,0x3f800000,fVar8,uVar4,0);
      *(undefined8 *)(param_2 + 0x20) = uVar4;
      FUN_012d0d74((long *)(param_2 + 0x20),uVar4);
      plVar6 = (long *)(param_2 + 0x28);
      if (*plVar6 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar6,0,0);
      }
      uVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
      lVar5 = UnityEngine_Component__get_transform_408b444(param_2,0);
      if (lVar5 != 0) {
        uVar9 = UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
        uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4(uVar9,param_1,0,fVar8,uVar4,0,0)
        ;
        puVar1 = PTR_DAT_057606c8;
        if (*(long *)(param_2 + 0x18) != 0) {
          lVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar4,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x18),
                             *(undefined8 *)PTR_DAT_057874c0);
          *plVar6 = lVar5;
          FUN_012d0d74(plVar6,lVar5);
          lVar3 = *plVar6;
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_0578afb0;
          if (lVar5 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar2,*(undefined8 *)PTR_DAT_05818b08,0);
            DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                      (lVar3,lVar5,*(undefined8 *)puVar1);
            return *plVar6;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

