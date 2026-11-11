/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayBottleEnterAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBottleEnterAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayBottleEnterAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBottleEnterAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBottleEnterAnimation_16097b0
                 (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c24415 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c24415 = 1;
  }
  if (*(long *)(param_4 + 0x88) != 0) {
    uVar5 = UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_4 + 0x88),0);
    lVar3 = *(long *)(param_4 + 0x88);
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__GetTargetPosition_1609a20
              (param_4,0);
    if (lVar3 != 0) {
      UnityEngine_Transform__set_localPosition_4092ce0(lVar3,0);
      if (*(long *)(param_4 + 0x50) != 0) {
        uVar5 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                          (uVar5,param_2,param_3,*(undefined4 *)(*(long *)(param_4 + 0x50) + 0x74),
                           *(undefined8 *)(param_4 + 0x88),0,0);
        if (*(long *)(param_4 + 0x50) != 0) {
          plVar2 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                     (uVar5,*(undefined4 *)(*(long *)(param_4 + 0x50) + 0x7c),
                                      *(undefined8 *)PTR_DAT_05770998);
          if (*(long *)(param_4 + 0x50) != 0) {
            fVar4 = *(float *)(*(long *)(param_4 + 0x50) + 0x78);
            if ((bRam0000000005c2b023 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)PTR_DAT_057bbd38);
              bRam0000000005c2b023 = 1;
            }
            if (((plVar2 != (long *)0x0) && ((char)plVar2[0x1d] != '\0')) &&
               ((char)plVar2[0x20] == '\0')) {
              if ((int)plVar2[2] == 1) {
                plVar1 = plVar2;
                if (*plVar2 != *(long *)PTR_DAT_058134a8) {
                  plVar1 = (long *)0x0;
                }
                DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar4,plVar1,0);
              }
              else {
                *(float *)((long)plVar2 + 0xac) = fVar4;
                *(bool *)(plVar2 + 0x23) = fVar4 <= 0.0;
              }
            }
            return plVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

