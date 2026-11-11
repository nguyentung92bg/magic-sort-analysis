/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.LevelTimer$$Stop
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__Stop (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.LevelTimer$$Stop
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__Stop
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__Stop_1e901cc(long param_1)

{
  if (*(char *)(param_1 + 0x1d) != '\0') {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_DI_CustomUpdater__RemoveSecondUpdate_3d2dc2c
              (*(long *)(param_1 + 0x10),param_1,0);
  }
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

