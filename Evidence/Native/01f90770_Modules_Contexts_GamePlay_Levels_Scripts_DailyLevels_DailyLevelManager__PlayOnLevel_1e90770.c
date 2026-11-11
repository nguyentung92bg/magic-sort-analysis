/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$PlayOnLevel
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__PlayOnLevel (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this, System_Collections_Generic_List_PlayOnBehaviourType__o* behaviours, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevelManager$$PlayOnLevel
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__PlayOnLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager_o* __this,
   System_Collections_Generic_List_PlayOnBehaviourType__o* behaviours, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevelManager__PlayOnLevel_1e90770
               (long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1c0));
    if (*(long *)(param_1 + 0x20) != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

