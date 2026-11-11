/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$StuckLevel
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__StuckLevel (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$StuckLevel
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__StuckLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this, int32_t
   stuckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__StuckLevel_1e90734
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = 4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1,param_2,*(undefined8 *)(*plVar1 + 400));
    if (*(long *)(param_1 + 0x20) != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

