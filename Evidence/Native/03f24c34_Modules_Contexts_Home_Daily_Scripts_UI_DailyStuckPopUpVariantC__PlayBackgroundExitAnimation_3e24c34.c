/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayBackgroundExitAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayBackgroundExitAnimation (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayBackgroundExitAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayBackgroundExitAnimation
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo*
   method); */

long * Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayBackgroundExitAnimation_3e24c34
                 (long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  
  if ((bRam0000000005c38141 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05811760);
    FUN_012d0dc8(PTR_DAT_057dfd88);
    bRam0000000005c38141 = 1;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0xe8), lVar4 != 0)) {
    uVar2 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                      (0,*(undefined4 *)(lVar4 + 0x1c),*(undefined8 *)(param_1 + 0x38),0);
                    /* catch() { ... } // from try @ 03f24d24 with catch @ 03f24c98
                       catch() { ... } // from try @ 03f24d60 with catch @ 03f24c98
                       catch() { ... } // from try @ 03f24d94 with catch @ 03f24c98 */
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0xe8), lVar4 != 0)) {
                    /* try { // try from 03f24ca8 to 04024cab has its CatchHandler @ 03f24d30 */
      plVar3 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                 (uVar2,*(undefined4 *)(lVar4 + 0x24),
                                  *(undefined8 *)PTR_DAT_057dfd88);
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0xe8), lVar4 != 0)) {
                    /* try { // try from 03f24ccc to 04024ce3 has its CatchHandler @ 03f24d2c */
        fVar5 = *(float *)(lVar4 + 0x20);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

