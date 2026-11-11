/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$PlayEarned2XCoinAnimation
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayEarned2XCoinAnimation (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$PlayEarned2XCoinAnimation
   void 
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayEarned2XCoinAnimation
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayEarned2XCoinAnimation_16eeb9c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  
  puVar4 = PTR_DAT_057be440;
  if ((bRam0000000005c24b45 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057ace30);
    FUN_012d0dc8(PTR_DAT_057dd148);
    FUN_012d0dc8(PTR_DAT_057be440);
    bRam0000000005c24b45 = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar7 != 0) {
    System_Object___ctor_23dfe5c(lVar7,0);
    *(long *)(lVar7 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar7 + 0x10),param_1);
    plVar11 = (long *)(param_1 + 0x88);
    if (*plVar11 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar11,0,0);
    }
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar8 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
       lVar8 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
      if (*(long *)(param_1 + 0x50) != 0) {
        lVar8 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(param_1 + 0x50),0);
        if (((*(long *)(param_1 + 0x60) != 0) &&
            (lVar9 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x60),0),
            lVar9 != 0)) &&
           (UnityEngine_Transform__get_position_4092b08(lVar9,0), puVar5 = PTR_DAT_057ec790,
           puVar4 = PTR_DAT_057b8520, lVar8 != 0)) {
          uVar10 = UnityEngine_Transform__set_position_4092ba8(lVar8,0);
          uVar6 = Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__GetCoinRewardAmount_16ee794
                            (uVar10,0);
          *(undefined4 *)(lVar7 + 0x18) = uVar6;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar5);
          if (lVar8 != 0) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                      (lVar8,7,*(undefined8 *)PTR_DAT_057871c8);
            if (*(long *)(param_1 + 0x50) != 0) {
              uVar10 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(param_1 + 0x50),0);
              if ((*(long *)(param_1 + 0x40) != 0) &&
                 (lVar8 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x40),0),
                 puVar5 = PTR_DAT_057874c0, puVar4 = PTR_DAT_057606c8, lVar8 != 0)) {
                UnityEngine_Transform__get_position_4092b08(lVar8,0);
                uVar10 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98(uVar10,0,0);
                uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                   (uVar10,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)puVar5);
                lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                puVar4 = PTR_DAT_057984e0;
                if (lVar8 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar8,lVar7,*(undefined8 *)PTR_DAT_057dd148,0);
                  lVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                    (uVar10,lVar8,*(undefined8 *)puVar4);
                  *plVar11 = lVar7;
                  if (iRam0000000005c3d478 != 0) {
                    puVar1 = (ulong *)(((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  return;
                }
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

