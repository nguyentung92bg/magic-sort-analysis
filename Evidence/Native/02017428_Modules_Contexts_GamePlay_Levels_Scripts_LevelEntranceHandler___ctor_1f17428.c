/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$.ctor
void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler___ctor (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* levelAndLevelConfigModel, Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager_o* magicBottleInGameManager, Modules_Contexts_GamePlay_Snitch_Scripts_SnitchInGameManager_o* snitchInGameManager, Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager_o* superChargerInGameManager, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$.ctor
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler___ctor
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections,
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   levelAndLevelConfigModel,
   Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager_o*
   magicBottleInGameManager, Modules_Contexts_GamePlay_Snitch_Scripts_SnitchInGameManager_o*
   snitchInGameManager, Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager_o*
   superChargerInGameManager, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler___ctor_1f17428
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2863c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2863c = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_2);
  if ((((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) &&
      (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar5,*(undefined8 *)PTR_DAT_05805608), lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x10) != 0)) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x58);
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x20) = param_3;
    FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_3);
    *(undefined8 *)(param_1 + 0x28) = param_4;
    FUN_012d0d74((undefined8 *)(param_1 + 0x28),param_4);
    *(undefined8 *)(param_1 + 0x30) = param_5;
    FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_5);
    puVar6 = (undefined8 *)(param_1 + 0x38);
    *puVar6 = param_6;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

