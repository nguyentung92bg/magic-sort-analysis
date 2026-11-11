/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$EndLevel
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__EndLevel (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$EndLevel
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__EndLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__EndLevel_1e9083c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x30);
  plVar4 = (long *)*plVar5;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
  }
  *plVar5 = 0;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

