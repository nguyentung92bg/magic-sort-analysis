/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyChallengeLobbyButton$$UpdateView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton__UpdateView (Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyChallengeLobbyButton$$UpdateView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton__UpdateView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton__UpdateView_3e1d764
               (long param_1)

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
  
                    /* try { // try from 03f1d768 to 0401d787 has its CatchHandler @ 03f1da94 */
  if ((bRam0000000005c380f2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c380f2 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 03f1d7b0 to 0401d7b3 has its CatchHandler @ 03f1db14 */
    uVar3 = Modules_Contexts_Home_Daily_Scripts_DailyService__IsEligibleForDaily_4104fb0
                      (*(long *)(param_1 + 0x30),0);
    if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 03f1d7c8 to 0401d7cf has its CatchHandler @ 03f1db10 */
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),uVar3 & 1,0);
      puVar2 = PTR_DAT_057db748;
                    /* try { // try from 03f1d7d0 to 0401d853 has its CatchHandler @ 03f1d5a0 */
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 03f1d86c to 0401d873 has its CatchHandler @ 03f1da7c */
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
                    /* try { // try from 03f1d854 to 0401d85b has its CatchHandler @ 03f1da80 */
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

