/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyChallengeLobbyButton$$SwipeToPage
void Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton__SwipeToPage (Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton_o* __this, int32_t pageType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyChallengeLobbyButton$$SwipeToPage
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton__SwipeToPage
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton_o* __this, int32_t pageType,
   const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton__SwipeToPage_3e1db64
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 auStack_50 [4];
  long lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_24;
  
  if (param_2 != 3) {
    return;
  }
  if ((bRam0000000005c380f2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c380f2 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar3 = Modules_Contexts_Home_Daily_Scripts_DailyService__IsEligibleForDaily_4104fb0
                      (*(long *)(param_1 + 0x30),0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),uVar3 & 1,0);
      puVar2 = PTR_DAT_057db748;
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        Modules_Contexts_Home_Daily_Scripts_DailyService__GetActiveDailyViewModel_4105930
                  (auStack_50,*(long *)(param_1 + 0x30),0);
        lVar6 = *(long *)(param_1 + 0x28);
        auStack_50[0] = uStack_38;
        uVar4 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,auStack_50);
        puVar1 = PTR_DAT_057c0628;
        if (lStack_40 != 0) {
          uStack_24 = (undefined4)*(undefined8 *)(lStack_40 + 0x18);
          uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_24);
          uVar4 = System_String__Format_1ed15b8(*(undefined8 *)puVar1,uVar4,uVar5,0);
          if (lVar6 != 0) {
            TMPro_TMP_Text__SetText_3dc1ab4(lVar6,uVar4,1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

