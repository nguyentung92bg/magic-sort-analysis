/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$PauseLevel
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__PauseLevel (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$PauseLevel
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__PauseLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__PauseLevel_1e906bc
               (long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = 7;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
    if (*(long *)(param_1 + 0x20) != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

