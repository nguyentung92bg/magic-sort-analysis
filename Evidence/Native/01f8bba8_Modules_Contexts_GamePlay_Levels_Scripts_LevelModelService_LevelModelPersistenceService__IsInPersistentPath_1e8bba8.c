/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$IsInPersistentPath
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o* __this, System_String_o* seedName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$IsInPersistentPath
   bool 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o*
   __this, System_String_o* seedName, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000005c2810a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05771d70);
    bRam0000000005c2810a = 1;
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05771d70 + 0x20) + 0xc0) +
                                    0xa0) + 8))(lVar3,param_2);
      bVar1 = iVar2 != -1;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

