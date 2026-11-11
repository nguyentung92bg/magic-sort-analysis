/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.StreakTournamentRewardImage$$UpdateDisplay
void Modules_Contexts_Home_UI_Common_Scripts_StreakTournamentRewardImage__UpdateDisplay (Modules_Contexts_Home_UI_Common_Scripts_StreakTournamentRewardImage_o* __this, int32_t rewardAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.StreakTournamentRewardImage$$UpdateDisplay
   void Modules_Contexts_Home_UI_Common_Scripts_StreakTournamentRewardImage__UpdateDisplay
   (Modules_Contexts_Home_UI_Common_Scripts_StreakTournamentRewardImage_o* __this, int32_t
   rewardAmount, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Common_Scripts_StreakTournamentRewardImage__UpdateDisplay_2980c98
               (long param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  int iStack_14;
  
  iStack_14 = param_2;
  if (*(long *)(param_1 + 0x20) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0 < param_2,0);
    if (0 < param_2) {
      plVar2 = *(long **)(param_1 + 0x18);
      uVar1 = System_Int32__ToString_26c9768(&iStack_14,0);
      if (plVar2 == (long *)0x0) goto LAB_02a80d04;
      (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    }
    return;
  }
LAB_02a80d04:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

