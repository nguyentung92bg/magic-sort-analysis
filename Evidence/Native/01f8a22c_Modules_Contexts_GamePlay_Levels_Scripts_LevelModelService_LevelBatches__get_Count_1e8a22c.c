/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$get_Count
int32_t Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_Count (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$get_Count
   int32_t Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_Count
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_Count_1e8a22c
          (long param_1)

{
  undefined4 uVar1;
  
  if ((bRam0000000005c280f5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c7458);
    bRam0000000005c280f5 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  return uVar1;
}

