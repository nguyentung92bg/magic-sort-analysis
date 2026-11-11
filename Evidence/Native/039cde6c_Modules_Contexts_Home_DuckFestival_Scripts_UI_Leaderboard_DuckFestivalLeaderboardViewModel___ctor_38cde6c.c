/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewModel$$.ctor
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewModel___ctor (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewModel_o* __this, System_String_o* name, int32_t rank, bool isMe, int32_t score, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, System_String_o* userId, System_String_o* pictureId, System_String_o* tokenId, System_String_o* teamName, bool isClickable, System_String_o* frameId, System_String_o* nameStyleId, System_String_o* _mageUrl, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewModel$$.ctor
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewModel___ctor
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewModel_o*
   __this, System_String_o* name, int32_t rank, bool isMe, int32_t score,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, System_String_o* userId,
   System_String_o* pictureId, System_String_o* tokenId, System_String_o* teamName, bool
   isClickable, System_String_o* frameId, System_String_o* nameStyleId, System_String_o* _mageUrl,
   const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewModel___ctor_38cde6c
               (long param_1,undefined8 param_2,undefined4 param_3,byte param_4,undefined4 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,byte param_11,undefined8 param_12,undefined8 param_13,
               undefined8 param_14)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x38) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_2);
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  *(byte *)(param_1 + 0x14) = param_4 & 1;
  *(undefined8 *)(param_1 + 0x30) = param_6;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_6);
  *(undefined8 *)(param_1 + 0x40) = param_7;
  FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_7);
  *(undefined8 *)(param_1 + 0x48) = param_8;
  FUN_012d0d74((undefined8 *)(param_1 + 0x48),param_8);
  *(undefined8 *)(param_1 + 0x20) = param_9;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_9);
  *(undefined8 *)(param_1 + 0x18) = param_10;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_10);
  *(byte *)(param_1 + 0x50) = param_11 & 1;
  *(undefined8 *)(param_1 + 0x58) = param_12;
  FUN_012d0d74((undefined8 *)(param_1 + 0x58),param_12);
  *(undefined8 *)(param_1 + 0x60) = param_13;
  FUN_012d0d74();
  puVar4 = (undefined8 *)(param_1 + 0x68);
  *puVar4 = param_14;
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

