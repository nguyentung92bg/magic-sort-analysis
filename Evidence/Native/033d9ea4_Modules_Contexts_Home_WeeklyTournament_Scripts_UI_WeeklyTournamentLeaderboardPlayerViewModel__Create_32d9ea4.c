/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardPlayerViewModel$$Create
Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel_o* Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel__Create (int32_t rank, System_String_o* userName, int32_t coinReward, bool isMe, int32_t score, System_String_o* userId, System_String_o* profilePictureUrl, System_String_o* pictureId, bool isBot, System_String_o* tokenId, System_String_o* frameId, System_String_o* nameStyleId, System_String_o* teamName, bool isSelectable, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardPlayerViewModel$$Create
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel_o*
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel__Create
   (int32_t rank, System_String_o* userName, int32_t coinReward, bool isMe, int32_t score,
   System_String_o* userId, System_String_o* profilePictureUrl, System_String_o* pictureId, bool
   isBot, System_String_o* tokenId, System_String_o* frameId, System_String_o* nameStyleId,
   System_String_o* teamName, bool isSelectable,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* reward, const MethodInfo* method); */

long Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel__Create_32d9ea4
               (int param_1,undefined8 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
               byte param_14,undefined8 param_15)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_05796e60;
  if ((bRam0000000005c31da4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05796e60);
    bRam0000000005c31da4 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    iVar1 = param_1;
    if (2 < param_1 - 1U) {
      iVar1 = 0;
    }
    Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel___ctor_32def7c
              (lVar3,iVar1,param_1,param_2,param_3,param_4 & 1,param_5,param_6,param_7,param_8,
               param_9 & 1,param_10,param_11,param_12,param_13,param_14 & 1,param_15);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

