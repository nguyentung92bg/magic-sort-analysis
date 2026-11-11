/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$PlayRewardAnimationAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__PlayRewardAnimationAsync (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o* __this, System_Collections_Generic_List_RewardModel__o* _rewards, float lastRewardPercentage, float finalRewardPercentage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$PlayRewardAnimationAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__PlayRewardAnimationAsync
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o*
   __this, System_Collections_Generic_List_RewardModel__o* _rewards, float lastRewardPercentage,
   float finalRewardPercentage, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__PlayRewardAnimationAsync_3e12efc
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c38093 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05800778);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c38093 = 1;
  }
  puVar2 = PTR_DAT_05800778;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_b8,0);
  uVar3 = (ulong)&uStack_80 | 8;
  uStack_90 = uStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  uStack_70 = uStack_b0;
  uStack_78 = uStack_b8;
  uStack_68 = uStack_a8;
  FUN_012d0d74(uVar3,0);
  uStack_60 = param_3;
  FUN_012d0d74(&uStack_60,param_3);
  uStack_58 = param_4;
  FUN_012d0d74(&uStack_58,param_4);
  uStack_50 = CONCAT44(param_2,param_1);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MagicStreakTournamentLobbyButtonController__PlayRewardAnimationAsync_d__13__1e69af4
            (uVar3,&uStack_80,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar3,0);
  return;
}

