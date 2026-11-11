/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$get_IsEmpty
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_IsEmpty (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelBatches$$get_IsEmpty
   bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_IsEmpty
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches__get_IsEmpty_1e8a278
               (long param_1)

{
  bool bVar1;
  
  if ((bRam0000000005c280f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c7458);
    bRam0000000005c280f6 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x18) == 0;
  }
  return bVar1;
}

