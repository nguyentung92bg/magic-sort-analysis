/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayShineEnterAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayShineEnterAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayShineEnterAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayShineEnterAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayShineEnterAnimation_1609960
                 (long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  float fVar4;
  
  if ((bRam0000000005c24417 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05811760);
    FUN_012d0dc8(PTR_DAT_057dfd88);
    bRam0000000005c24417 = 1;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_1 + 0x98),0);
    if (*(long *)(param_1 + 0x98) != 0) {
      UnityEngine_SpriteRenderer__set_color_4095de0(*(long *)(param_1 + 0x98),0);
      if (*(long *)(param_1 + 0x50) != 0) {
        fVar4 = *(float *)(*(long *)(param_1 + 0x50) + 0x74);
        uVar2 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                          (0x3f800000,fVar4 + fVar4,*(undefined8 *)(param_1 + 0x98),0);
        if (*(long *)(param_1 + 0x50) != 0) {
          plVar3 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                     (uVar2,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x7c),
                                      *(undefined8 *)PTR_DAT_057dfd88);
          if (*(long *)(param_1 + 0x50) != 0) {
            fVar4 = *(float *)(*(long *)(param_1 + 0x50) + 0x78);
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
                DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar4,plVar1,0);
              }
              else {
                *(float *)((long)plVar3 + 0xac) = fVar4;
                *(bool *)(plVar3 + 0x23) = fVar4 <= 0.0;
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

