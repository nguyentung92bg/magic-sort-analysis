/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayPlayOnButtonEnterAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayPlayOnButtonEnterAnimation (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$PlayPlayOnButtonEnterAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayPlayOnButtonEnterAnimation
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, const MethodInfo*
   method); */

long * Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__PlayPlayOnButtonEnterAnimation_3e2305c
                 (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_4 + 0x78) != 0) {
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnButton__Show_16fa1fc
              (*(long *)(param_4 + 0x78),1,0);
    if (*(long *)(param_4 + 0x58) != 0) {
      lVar5 = *(long *)(param_4 + 0x68);
      lVar6 = *(long *)(*(long *)(param_4 + 0x58) + 0xa8);
      if ((bRam0000000005c38127 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057bbd38);
        FUN_012d0dc8(PTR_DAT_05770998);
        bRam0000000005c38127 = 1;
      }
      if (lVar5 != 0) {
        uVar8 = UnityEngine_Transform__get_position_4092b08(lVar5,0);
        Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__GetTargetPosition_3e2327c
                  (param_4,0);
        UnityEngine_Transform__set_position_4092ba8(lVar5,0);
        puVar3 = PTR_DAT_057bbd38;
        puVar2 = PTR_DAT_05770998;
        if (lVar6 != 0) {
          uVar8 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                            (uVar8,param_2,param_3,*(undefined4 *)(lVar6 + 0x10),lVar5,0,0);
          plVar4 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                     (uVar8,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)puVar2);
          fVar7 = *(float *)(lVar6 + 0x14);
          if ((bRam0000000005c2b023 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)puVar3);
            bRam0000000005c2b023 = 1;
          }
          if (((plVar4 != (long *)0x0) && ((char)plVar4[0x1d] != '\0')) &&
             ((char)plVar4[0x20] == '\0')) {
            if ((int)plVar4[2] == 1) {
              plVar1 = plVar4;
              if (*plVar4 != *(long *)PTR_DAT_058134a8) {
                plVar1 = (long *)0x0;
              }
              DG_Tweening_TweenSettingsExtensions__PrependInterval_1eee03c(fVar7,plVar1,0);
            }
            else {
              *(float *)((long)plVar4 + 0xac) = fVar7;
              *(bool *)(plVar4 + 0x23) = fVar7 <= 0.0;
            }
          }
          return plVar4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

