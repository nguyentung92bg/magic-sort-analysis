/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetLevelDifficulty
int32_t Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelDifficulty (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$GetLevelDifficulty
   int32_t Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelDifficulty
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method); */

undefined1
Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetLevelDifficulty_1f0f53c(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x31) != '\0') {
      return 2;
    }
    return *(undefined1 *)(lVar1 + 0x30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

