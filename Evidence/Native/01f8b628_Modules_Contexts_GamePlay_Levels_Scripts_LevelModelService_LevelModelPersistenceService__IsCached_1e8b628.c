/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$IsCached
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsCached (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o* __this, System_String_o* seedName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$IsCached
   bool 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsCached
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o*
   __this, System_String_o* seedName, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsCached_1e8b628
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = System_String__IsNullOrEmpty_1ed04ac(param_2,0);
  if ((((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x38) != 0))
  {
    uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__IsInPersistentPath_1e8bba8
                      (param_1,param_2);
    if ((uVar3 & 1) == 0) {
      if ((bRam0000000005c28109 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05771d70);
        bRam0000000005c28109 = 1;
      }
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x18) == 0) {
          bVar1 = false;
        }
        else {
          iVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05771d70 + 0x20) +
                                                  0xc0) + 0xa0) + 8))(lVar4,param_2);
          bVar1 = iVar2 != -1;
        }
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

