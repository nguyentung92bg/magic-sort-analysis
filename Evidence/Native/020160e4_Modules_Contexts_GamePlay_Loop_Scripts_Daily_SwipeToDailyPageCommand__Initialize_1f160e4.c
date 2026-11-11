/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.SwipeToDailyPageCommand$$Initialize
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_SwipeToDailyPageCommand__Initialize (Modules_Contexts_GamePlay_Loop_Scripts_Daily_SwipeToDailyPageCommand_o* __this, System_Threading_CancellationToken_o cancellationToken, Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* lastWinLevelAndLevelConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.SwipeToDailyPageCommand$$Initialize
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_SwipeToDailyPageCommand__Initialize
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_SwipeToDailyPageCommand_o* __this,
   System_Threading_CancellationToken_o cancellationToken,
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   lastWinLevelAndLevelConfigModel, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_SwipeToDailyPageCommand__Initialize_1f160e4
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_3;
  *(undefined1 *)(param_1 + 0x10) = 0;
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

