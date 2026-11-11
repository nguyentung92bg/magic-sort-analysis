/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardPlayerViewModel$$.ctor
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel___ctor (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel_o* __this, int32_t medalType, int32_t rank, System_String_o* userName, int32_t coinReward, bool isMe, int32_t score, System_String_o* userId, System_String_o* profilePictureUrl, System_String_o* pictureId, bool isBot, System_String_o* tokenId, System_String_o* frameId, System_String_o* nameStyleId, System_String_o* teamName, bool isSelectable, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardPlayerViewModel$$.ctor
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel___ctor
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel_o*
   __this, int32_t medalType, int32_t rank, System_String_o* userName, int32_t coinReward, bool
   isMe, int32_t score, System_String_o* userId, System_String_o* profilePictureUrl,
   System_String_o* pictureId, bool isBot, System_String_o* tokenId, System_String_o* frameId,
   System_String_o* nameStyleId, System_String_o* teamName, bool isSelectable,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo*
   method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel___ctor_32def7c
               (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,byte param_6,undefined4 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,byte param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined8 param_15,byte param_16,
               undefined8 param_17)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_4);
  *(undefined4 *)(param_1 + 0x20) = param_5;
  *(byte *)(param_1 + 0x28) = param_6 & 1;
  *(byte *)(param_1 + 0x29) = param_11 & 1;
  *(undefined4 *)(param_1 + 0x24) = param_7;
  *(undefined8 *)(param_1 + 0x30) = param_8;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_8);
  *(undefined8 *)(param_1 + 0x38) = param_9;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_9);
  *(undefined8 *)(param_1 + 0x40) = param_10;
  FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_10);
  *(undefined8 *)(param_1 + 0x48) = param_12;
  FUN_012d0d74((undefined8 *)(param_1 + 0x48),param_12);
  *(undefined8 *)(param_1 + 0x50) = param_13;
  FUN_012d0d74((undefined8 *)(param_1 + 0x50),param_13);
  *(undefined8 *)(param_1 + 0x58) = param_14;
  FUN_012d0d74();
  *(undefined8 *)(param_1 + 0x60) = param_15;
  FUN_012d0d74();
  puVar4 = (undefined8 *)(param_1 + 0x70);
  *puVar4 = param_17;
  *(byte *)(param_1 + 0x68) = param_16 & 1;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

