/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$PlayAnimation
void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayAnimation (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, bool isDaily, int32_t level, bool isFirstTry, int32_t streakCount, bool isHard, bool isSuperHard, bool shouldShowMultiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinEntranceAnimator$$PlayAnimation
   void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayAnimation
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator_o* __this, bool
   isDaily, int32_t level, bool isFirstTry, int32_t streakCount, bool isHard, bool isSuperHard, bool
   shouldShowMultiplier, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__PlayAnimation_16ee570
               (long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint in_w7;
  
  if ((bRam0000000005c24b42 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dd160);
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c24b42 = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x88),0,0);
  }
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x70),0), lVar4 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x78),0),
       lVar4 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
      if ((*(long *)(param_1 + 0x50) != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
         lVar4 != 0)) {
        uVar5 = UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
        uVar3 = Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinEntranceAnimator__GetCoinRewardAmount_16ee794
                          (uVar5,param_2 & 1);
        if (*(long *)(param_1 + 0x40) != 0) {
          Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__SetCoinRewardAmount_16edaa0
                    (*(long *)(param_1 + 0x40),uVar3);
          if (*(long *)(param_1 + 0x48) != 0) {
            Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinCoinRewardView__SetCoinRewardAmount_16edaa0
                      (*(long *)(param_1 + 0x48),uVar3);
            lVar4 = *(long *)(param_1 + 0x30);
            if ((in_w7 & 1) == 0) {
              if (lVar4 != 0) {
                UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
                if (*(long *)(param_1 + 0x38) != 0) {
                  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x38),0,0);
                  puVar2 = PTR_DAT_057ec790;
                  puVar1 = PTR_DAT_057b8520;
                  if (*(long *)(param_1 + 0x18) != 0) {
                    UnityEngine_Animator__Play_1f79afc
                              (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                      (*(undefined8 *)puVar2);
                    if (lVar4 != 0) {
                      if (*(long *)(lVar4 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057871c8 + 0x20)
                                                        + 0xc0) + 0x20) + 8))
                                  (*(long *)(lVar4 + 0x10),7);
                        return;
                      }
                      return;
                    }
                  }
                }
              }
            }
            else if (lVar4 != 0) {
              UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
              puVar1 = PTR_DAT_057606c8;
              if (*(long *)(param_1 + 0x38) != 0) {
                UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x38),0,0);
                lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar4 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar4,param_1,*(undefined8 *)PTR_DAT_057dd160,0);
                  DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_04339be4,lVar4,1,0);
                  lVar4 = *(long *)(param_1 + 0x80);
                  if (lVar4 != 0) {
                    if ((bRam0000000005c2d716 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_0577f088,0);
                      bRam0000000005c2d716 = 1;
                    }
                    if (*(long *)(lVar4 + 0xa0) != 0) {
                      UnityEngine_Animation__Stop_1f79e6c(*(long *)(lVar4 + 0xa0),0);
                      lVar4 = *(long *)(lVar4 + 0xa0);
                      if (lVar4 != 0) {
                        uVar5 = *(undefined8 *)PTR_DAT_0577f088;
                        if (pcRam0000000005c28c10 == (code *)0x0) {
                          pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar5,0);
                        }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000005c28c10)(lVar4,uVar5,0);
                        return;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
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

