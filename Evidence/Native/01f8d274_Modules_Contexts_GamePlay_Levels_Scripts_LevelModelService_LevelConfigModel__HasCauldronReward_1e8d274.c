/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelConfigModel$$HasCauldronReward
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__HasCauldronReward (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelConfigModel$$HasCauldronReward
   bool 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__HasCauldronReward
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel__HasCauldronReward_1e8d274
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c28111 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c28111 = 1;
  }
  puVar1 = PTR_DAT_0576c1b8;
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    if (*(int *)(lVar3 + 0x14) < 1) {
      lVar4 = *(long *)(lVar3 + 0x18);
      lVar3 = *(long *)PTR_DAT_0576c1b8;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar1;
      }
      return lVar4 != **(long **)(lVar3 + 0xb8);
    }
    bVar2 = true;
  }
  return bVar2;
}

