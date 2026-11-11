/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayBackgroundEnterAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayBackgroundEnterAnimation (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayBackgroundEnterAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayBackgroundEnterAnimation
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo*
   method); */

long * Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayBackgroundEnterAnimation_3e230c0
                 (long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  
  if ((bRam0000000005c38126 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05811760);
    FUN_012d0dc8(PTR_DAT_057dfd88);
    bRam0000000005c38126 = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) != 0) {
      UnityEngine_SpriteRenderer__set_color_4095de0(*(long *)(param_1 + 0x38),0);
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0xe8), lVar4 != 0)) {
        uVar2 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (0x3f800000,*(undefined4 *)(lVar4 + 0x10),*(undefined8 *)(param_1 + 0x38),
                           0);
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0xe8), lVar4 != 0)) {
          plVar3 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                     (uVar2,*(undefined4 *)(lVar4 + 0x18),
                                      *(undefined8 *)PTR_DAT_057dfd88);
          if ((*(long *)(param_1 + 0x58) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0xe8), lVar4 != 0)) {
            fVar5 = *(float *)(lVar4 + 0x14);
            if ((bRam0000000005c2b023 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)PTR_DAT_05811760);
              bRam0000000005c2b023 = 1;
            }
            if (((plVar3 != (long *)0x0) && ((char)plVar3[0x1d] != '\0')) &&
               ((char)plVar3[0x20] == '\0')) {
              if ((int)plVar3[2] == 1) {
                plVar1 = plVar3;
                if (*plVar3 != *(long *)PTR_DAT_058134a8) {
                  plVar1 = (long *)0x0;
                }
                DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar5,plVar1,0);
              }
              else {
                *(float *)((long)plVar3 + 0xac) = fVar5;
                *(bool *)(plVar3 + 0x23) = fVar5 <= 0.0;
              }
            }
            return plVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

