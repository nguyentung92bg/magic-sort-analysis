/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$.ctor
void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService___ctor (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this, Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs, Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* dataService, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.MagicBottleService$$.ctor
   void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService___ctor
   (Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService_o* __this,
   Modules_Contexts_Application_RemoteConfig_Scripts_RemoteConfigs_o* remoteConfigs,
   Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleDataService_o* dataService,
   Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService___ctor_375d2b0
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_3);
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_4;
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

