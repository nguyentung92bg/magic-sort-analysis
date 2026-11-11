/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$.ctor
void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem___ctor (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* levelEntranceHandler, Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o* levelTimer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$.ctor
   void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem___ctor
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections,
   Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* levelEntranceHandler,
   Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o* levelTimer, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem___ctor_1610008
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24463 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1238);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c24463 = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_2);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_3);
  if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057e8f70);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    FUN_012d0d74();
    if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) {
      uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_057d9070);
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      FUN_012d0d74();
      if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
         (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) {
        lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar5,*(undefined8 *)PTR_DAT_057f1238);
        plVar8 = (long *)(param_1 + 0x40);
        *plVar8 = lVar5;
        FUN_012d0d74(plVar8,lVar5);
        if (*plVar8 != 0) {
          Modules_Infrastructure_DI_CustomUpdater__AddFrameUpdate_3d2da74(*plVar8,param_1,0);
          puVar7 = (undefined8 *)(param_1 + 0x38);
          *puVar7 = param_4;
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

