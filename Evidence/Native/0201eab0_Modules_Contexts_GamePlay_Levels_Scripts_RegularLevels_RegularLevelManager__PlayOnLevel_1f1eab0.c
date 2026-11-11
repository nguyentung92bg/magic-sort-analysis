/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevelManager$$PlayOnLevel
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager__PlayOnLevel (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager_o* __this, System_Collections_Generic_List_PlayOnBehaviourType__o* behaviours, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevelManager$$PlayOnLevel
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager__PlayOnLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager_o* __this,
   System_Collections_Generic_List_PlayOnBehaviourType__o* behaviours, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager__PlayOnLevel_1f1eab0
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = 1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x1c0));
    if (*(long *)(param_1 + 0x20) != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

