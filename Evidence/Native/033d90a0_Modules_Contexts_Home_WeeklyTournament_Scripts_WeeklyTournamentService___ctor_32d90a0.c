/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$.ctor
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService___ctor (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs, Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* weeklyTournamentDataService, Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService_o* remoteService, Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o* weeklyTournamentStateService, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, Modules_Infrastructure_DI_CustomUpdater_o* customUpdater, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* profileSpriteCacheService, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$.ctor
   void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService___ctor
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this,
   Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs,
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o*
   weeklyTournamentDataService,
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService_o* remoteService,
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentStateService_o*
   weeklyTournamentStateService, Modules_Contexts_Application_Player_Scripts_IPlayerService_o*
   playerService, Modules_Infrastructure_DI_CustomUpdater_o* customUpdater,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o*
   profileSpriteCacheService, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o*
   remoteConfig, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService___ctor_32d90a0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_4);
  *(undefined8 *)(param_1 + 0x18) = param_5;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_5);
  *(undefined8 *)(param_1 + 0x30) = param_6;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_6);
  *(undefined8 *)(param_1 + 0x38) = param_7;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_7);
  *(undefined8 *)(param_1 + 0x40) = param_8;
  FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_8);
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = param_9;
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

