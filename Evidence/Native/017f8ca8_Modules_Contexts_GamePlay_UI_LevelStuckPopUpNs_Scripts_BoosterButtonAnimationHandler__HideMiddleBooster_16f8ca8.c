/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideMiddleBooster
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideMiddleBooster (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.BoosterButtonAnimationHandler$$HideMiddleBooster
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideMiddleBooster
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_BoosterButtonAnimationHandler__HideMiddleBooster_16f8ca8
               (long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((bRam0000000005c24b94 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bbd38);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c24b94 = 1;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x100),0,0);
  }
  puVar1 = (undefined8 *)(param_1 + 0x108);
  if (*(long *)(param_1 + 0x108) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x108),0,0);
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_012d0d74(param_1 + 0x100,0);
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_012d0d74(puVar1,0);
  lVar8 = *(long *)(param_1 + 0xa8);
  if (lVar8 != 0) {
    uVar11 = *(undefined4 *)(param_1 + 0xd0);
    uVar10 = *(undefined4 *)(param_1 + 0xd4);
    uVar9 = *(undefined4 *)(param_1 + 0xd8);
    switch(*(undefined4 *)(lVar8 + 0x54)) {
    case 0:
    case 3:
      uVar10 = *(undefined4 *)(param_1 + 0x34);
      break;
    case 1:
      uVar11 = *(undefined4 *)(param_1 + 0x3c);
      break;
    case 2:
      uVar11 = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(long *)(lVar8 + 0x60) != 0) {
      uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                        (uVar11,uVar10,uVar9,*(undefined4 *)(*(long *)(lVar8 + 0x60) + 0x10),
                         *(undefined8 *)(param_1 + 0x20),0,0);
      puVar5 = PTR_DAT_05770998;
      if ((*(long *)(param_1 + 0xa8) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60), lVar8 != 0)) {
        uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                          (uVar7,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_05770998);
        puVar6 = PTR_DAT_057bbd38;
        if ((*(long *)(param_1 + 0xa8) != 0) &&
           (lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60), lVar8 != 0)) {
          uVar7 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                            (*(undefined4 *)(lVar8 + 0x20),uVar7,*(undefined8 *)PTR_DAT_057bbd38);
          *(undefined8 *)(param_1 + 0x100) = uVar7;
          FUN_012d0d74(param_1 + 0x100,uVar7);
          if ((*(long *)(param_1 + 0xa8) != 0) &&
             (lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60), lVar8 != 0)) {
            uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                              (uVar11,uVar10,uVar9,*(undefined4 *)(lVar8 + 0x10),
                               *(undefined8 *)(param_1 + 0x88),0,0);
            if ((*(long *)(param_1 + 0xa8) != 0) &&
               (lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60), lVar8 != 0)) {
              uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                (uVar7,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)puVar5);
              if ((*(long *)(param_1 + 0xa8) != 0) &&
                 (lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60), lVar8 != 0)) {
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                                  (*(undefined4 *)(lVar8 + 0x20),uVar7,*(undefined8 *)puVar6);
                *puVar1 = uVar7;
                if (iRam0000000005c3d478 != 0) {
                  puVar2 = (ulong *)(((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar4) {
                      *puVar2 = *puVar2 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

