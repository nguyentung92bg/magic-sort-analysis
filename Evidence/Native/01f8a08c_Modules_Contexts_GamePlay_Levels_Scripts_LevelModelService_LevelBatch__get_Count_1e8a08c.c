/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatch$$get_Count
int32_t Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch__get_Count (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatch$$get_Count
   int32_t Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch__get_Count
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatch__get_Count_1e8a08c
          (long param_1)

{
  if ((bRam0000000005c280f2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dbb00);
    bRam0000000005c280f2 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

