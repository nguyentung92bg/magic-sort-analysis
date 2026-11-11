/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$.ctor
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService___ctor (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* stateService, Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakRemoteService_o* remoteService, Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* dataService, Modules_Infrastructure_DI_CustomUpdater_o* customUpdater, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, Modules_Contexts_Application_Notification_Scripts_NotificationService_o* notificationService, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* profileSpriteCacheService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$.ctor
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService___ctor
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService_o* stateService,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakRemoteService_o* remoteService,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService_o* dataService,
   Modules_Infrastructure_DI_CustomUpdater_o* customUpdater,
   Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs,
   Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService,
   Modules_Contexts_Application_Notification_Scripts_NotificationService_o* notificationService,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o*
   profileSpriteCacheService, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService___ctor_411db00
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_4);
  *(undefined8 *)(param_1 + 0x30) = param_5;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_5);
  *(undefined8 *)(param_1 + 0x10) = param_6;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_6);
  *(undefined8 *)(param_1 + 0x38) = param_7;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_7);
  *(undefined8 *)(param_1 + 0x40) = param_8;
  FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_8);
  puVar4 = (undefined8 *)(param_1 + 0x48);
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

