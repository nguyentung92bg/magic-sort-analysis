/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.RewardedButton$$ShowLoadingBarIfRewardedNotReady
void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__ShowLoadingBarIfRewardedNotReady (Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.RewardedButton$$ShowLoadingBarIfRewardedNotReady
   void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__ShowLoadingBarIfRewardedNotReady
   (Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_RewardedButton__ShowLoadingBarIfRewardedNotReady_4105ff0
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c3aba0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a2938);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c3aba0 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
     (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar2,*(undefined8 *)PTR_DAT_057a2938), lVar2 != 0)) {
    uVar3 = Modules_Contexts_Application_Ads_Scripts_AdService__IsRewardedReady_1b5f73c(lVar2,0);
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      if ((uVar3 & 1) == 0) {
        Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LoadingbarView__Show_16e9050(lVar2,0);
        lVar2 = *(long *)(param_1 + 0x20);
        if (lVar2 == 0) goto LAB_042060b4;
        uVar4 = 0;
      }
      else {
        Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LoadingbarView__Hide_16e9010(lVar2,0);
        lVar2 = *(long *)(param_1 + 0x20);
        if (lVar2 == 0) goto LAB_042060b4;
        uVar4 = 1;
      }
      if (pcRam0000000005c39bb8 == (code *)0x0) {
        pcRam0000000005c39bb8 = (code *)FUN_012d0d84(&UNK_043eabe3);
      }
                    /* WARNING: Could not recover jumptable at 0x041822f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c39bb8)(lVar2,uVar4);
      return;
    }
  }
LAB_042060b4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

