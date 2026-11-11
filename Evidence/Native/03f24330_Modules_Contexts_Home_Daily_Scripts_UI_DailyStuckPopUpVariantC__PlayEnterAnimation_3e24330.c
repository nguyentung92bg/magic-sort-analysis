/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayEnterAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayEnterAnimation (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, int32_t animationDirection, UnityEngine_Transform_o* targetTransform, Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AnimationModel_o* animationModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayEnterAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayEnterAnimation
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, int32_t
   animationDirection, UnityEngine_Transform_o* targetTransform,
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AnimationModel_o* animationModel, const
   MethodInfo* method); */

long * Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayEnterAnimation_3e24330
                 (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,long param_6,long param_7)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  float fVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c38138 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c38138 = 1;
  }
  if (param_6 != 0) {
    uVar6 = UnityEngine_Transform__get_position_4092b08(param_6,0);
    Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__GetTargetPosition_3e242a4
              (param_4,param_5);
    UnityEngine_Transform__set_position_4092ba8(param_6,0);
    puVar3 = PTR_DAT_057bbd38;
    puVar2 = PTR_DAT_05770998;
    if (param_7 != 0) {
      uVar6 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                        (uVar6,param_2,param_3,*(undefined4 *)(param_7 + 0x10),param_6,0,0);
      plVar4 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                 (uVar6,*(undefined4 *)(param_7 + 0x18),*(undefined8 *)puVar2);
      fVar5 = *(float *)(param_7 + 0x14);
      if ((bRam0000000005c2b023 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)puVar3);
        bRam0000000005c2b023 = 1;
      }
      if (((plVar4 != (long *)0x0) && ((char)plVar4[0x1d] != '\0')) && ((char)plVar4[0x20] == '\0'))
      {
        if ((int)plVar4[2] == 1) {
          plVar1 = plVar4;
          if (*plVar4 != *(long *)PTR_DAT_058134a8) {
            plVar1 = (long *)0x0;
          }
          DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar5,plVar1,0);
        }
        else {
          *(float *)((long)plVar4 + 0xac) = fVar5;
          *(bool *)(plVar4 + 0x23) = fVar5 <= 0.0;
        }
      }
      return plVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

