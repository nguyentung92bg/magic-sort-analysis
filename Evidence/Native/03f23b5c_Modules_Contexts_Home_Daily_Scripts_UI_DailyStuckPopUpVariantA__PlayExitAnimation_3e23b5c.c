/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayExitAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayExitAnimation (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, int32_t animationDirection, UnityEngine_Transform_o* targetTransform, Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AnimationModel_o* animationModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayExitAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayExitAnimation
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, int32_t
   animationDirection, UnityEngine_Transform_o* targetTransform,
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AnimationModel_o* animationModel, const
   MethodInfo* method); */

long * Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayExitAnimation_3e23b5c
                 (undefined8 param_1,undefined4 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  
  if ((bRam0000000005c38131 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c38131 = 1;
  }
  if (param_3 != 0) {
    UnityEngine_Transform__get_position_4092b08(param_3,0);
    Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__GetTargetPosition_3e2327c
              (param_1,param_2);
    puVar3 = PTR_DAT_057bbd38;
    puVar2 = PTR_DAT_05770998;
    if (param_4 != 0) {
      uVar4 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98(param_3,0,0);
      plVar5 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                 (uVar4,*(undefined4 *)(param_4 + 0x24),*(undefined8 *)puVar2);
      fVar6 = *(float *)(param_4 + 0x20);
      if ((bRam0000000005c2b023 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)puVar3);
        bRam0000000005c2b023 = 1;
      }
      if (((plVar5 != (long *)0x0) && ((char)plVar5[0x1d] != '\0')) && ((char)plVar5[0x20] == '\0'))
      {
        if ((int)plVar5[2] == 1) {
          plVar1 = plVar5;
          if (*plVar5 != *(long *)PTR_DAT_058134a8) {
            plVar1 = (long *)0x0;
          }
          DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar6,plVar1,0);
        }
        else {
          *(float *)((long)plVar5 + 0xac) = fVar6;
          *(bool *)(plVar5 + 0x23) = fVar6 <= 0.0;
        }
      }
      return plVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

