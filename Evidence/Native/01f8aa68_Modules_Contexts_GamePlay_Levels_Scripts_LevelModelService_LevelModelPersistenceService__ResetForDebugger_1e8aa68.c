/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$ResetForDebugger
void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__ResetForDebugger (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$ResetForDebugger
   void 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__ResetForDebugger
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__ResetForDebugger_1e8aa68
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c280fe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c280fe = 1;
  }
  puVar1 = PTR_DAT_0580b9d0;
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x18) = 0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = System_DateTime__get_UtcNow_2100638(0);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = 0x40000000;
  return;
}

