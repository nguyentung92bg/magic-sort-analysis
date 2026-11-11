/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$PlayHeaderTextMoveDownAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayHeaderTextMoveDownAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$PlayHeaderTextMoveDownAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayHeaderTextMoveDownAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__PlayHeaderTextMoveDownAnimation_160b4fc
                 (long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = *(long *)(param_1 + 0x60);
  lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0xa0);
  if ((bRam0000000005c24431 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c24431 = 1;
  }
  if (lVar6 != 0) {
    UnityEngine_Transform__get_localPosition_4092c40(lVar6,0);
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__GetTargetPosition_160aff4
              (param_1,2);
    puVar3 = PTR_DAT_057bbd38;
    puVar2 = PTR_DAT_057874c0;
    if (lVar7 != 0) {
      uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4(lVar6,0,0);
      plVar5 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                 (uVar4,*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)puVar2);
      fVar8 = *(float *)(lVar7 + 0x2c);
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
          DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar8,plVar1,0);
        }
        else {
          *(float *)((long)plVar5 + 0xac) = fVar8;
          *(bool *)(plVar5 + 0x23) = fVar8 <= 0.0;
        }
      }
      return plVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

