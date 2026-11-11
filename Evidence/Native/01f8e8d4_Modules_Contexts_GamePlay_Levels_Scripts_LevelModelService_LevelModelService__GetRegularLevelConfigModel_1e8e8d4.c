/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetRegularLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o* remoteRegularLevelsConfigs, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetRegularLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this,
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o*
   remoteRegularLevelsConfigs, int32_t level, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelConfigModel_1e8e8d4
          (undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000005c2811d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057781c8);
    bRam0000000005c2811d = 1;
  }
  if (((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
     (lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = param_3 - 1;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,uVar1,*(undefined8 *)PTR_DAT_057781c8);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 != 0) {
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

