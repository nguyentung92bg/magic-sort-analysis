/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayBottleGiveUpAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBottleGiveUpAnimation (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantB$$PlayBottleGiveUpAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBottleGiveUpAnimation
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB_o* __this, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantB__PlayBottleGiveUpAnimation_1609fa0
                 (long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  float fVar5;
  
  if ((bRam0000000005c2441d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2441d = 1;
  }
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar4 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar2 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                      (*puVar4,puVar4[1],puVar4[2],*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x8c)
                       ,*(undefined8 *)(param_1 + 0x88),0);
    if (*(long *)(param_1 + 0x50) != 0) {
      plVar3 = (long *)DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                 (uVar2,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x98),
                                  *(undefined8 *)PTR_DAT_057874c0);
      if (*(long *)(param_1 + 0x50) != 0) {
        fVar5 = *(float *)(*(long *)(param_1 + 0x50) + 0x90);
        if ((bRam0000000005c2b023 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_058134a8,*(undefined8 *)PTR_DAT_057bbd38);
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

