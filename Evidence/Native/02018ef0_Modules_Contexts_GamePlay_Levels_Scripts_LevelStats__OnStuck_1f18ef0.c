/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$OnStuck
void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__OnStuck (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$OnStuck
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__OnStuck
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, int32_t stuckType, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__OnStuck_1f18ef0
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__GetRemainingTime_1e90948
                      (*(long *)(param_1 + 0x28),0);
    *(undefined4 *)(param_1 + 0xf0) = uVar1;
    *(undefined4 *)(param_1 + 0xf4) = param_2;
  }
  return;
}

