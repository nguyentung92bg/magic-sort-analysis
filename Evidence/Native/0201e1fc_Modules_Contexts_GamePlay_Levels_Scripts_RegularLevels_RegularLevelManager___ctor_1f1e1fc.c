/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevelManager$$.ctor
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager___ctor (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager_o* __this, Modules_Contexts_Application_Ads_Scripts_AdService_o* adService, Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_ILevelModelService_o* levelModelService, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* magicBottleService, Modules_Contexts_Home_Snitch_Scripts_SnitchService_o* snitchService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevelManager$$.ctor
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager___ctor
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager_o* __this,
   Modules_Contexts_Application_Ads_Scripts_AdService_o* adService,
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_ILevelModelService_o*
   levelModelService, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService,
   Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* magicBottleService,
   Modules_Contexts_Home_Snitch_Scripts_SnitchService_o* snitchService, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager___ctor_1f1e1fc
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_3);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_4);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_2);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_5);
  puVar4 = (undefined8 *)(param_1 + 0x30);
  *puVar4 = param_6;
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

