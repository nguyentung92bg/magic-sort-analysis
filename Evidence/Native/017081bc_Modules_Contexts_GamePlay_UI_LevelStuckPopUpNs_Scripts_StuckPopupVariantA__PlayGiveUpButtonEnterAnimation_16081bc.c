/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$PlayGiveUpButtonEnterAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayGiveUpButtonEnterAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$PlayGiveUpButtonEnterAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayGiveUpButtonEnterAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__PlayGiveUpButtonEnterAnimation_16081bc
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000005c24402 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c24402 = 1;
  }
  lVar6 = *(long *)(param_4 + 0x50);
  if ((lVar6 != 0) && (*(long *)(param_4 + 0x78) != 0)) {
    fVar11 = *(float *)(lVar6 + 0xd0);
    fVar9 = *(float *)(lVar6 + 0xd4);
    fVar10 = *(float *)(lVar6 + 0xcc);
    fVar8 = (float)UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_4 + 0x78),0);
    if (*(long *)(param_4 + 0x50) != 0) {
      lVar7 = *(long *)(*(long *)(param_4 + 0x50) + 0xb0);
      lVar6 = *(long *)(param_4 + 0x78);
      fVar10 = fVar10 + fVar8;
      fVar11 = fVar11 + param_2;
      fVar9 = fVar9 + param_3;
      Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__GetTargetPosition_1607f20
                (fVar10,fVar11,fVar9,param_4,1);
      if ((lVar6 != 0) &&
         (UnityEngine_Transform__set_localPosition_4092ce0(lVar6,0), puVar3 = PTR_DAT_057bbd38,
         puVar2 = PTR_DAT_05770998, lVar7 != 0)) {
        uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                          (fVar10,fVar11,fVar9,*(undefined4 *)(lVar7 + 0x10),
                           *(undefined8 *)(param_4 + 0x78),0,0);
        plVar5 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                   (uVar4,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)puVar2);
        fVar8 = *(float *)(lVar7 + 0x14);
        if ((bRam0000000005c2b023 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)puVar3);
          bRam0000000005c2b023 = 1;
        }
        if (((plVar5 != (long *)0x0) && ((char)plVar5[0x1d] != '\0')) &&
           ((char)plVar5[0x20] == '\0')) {
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

