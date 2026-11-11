/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetLoopLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLoopLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o* remoteRegularLevelsConfigs, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetLoopLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLoopLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this,
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o*
   remoteRegularLevelsConfigs, int32_t level, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLoopLevelConfigModel_1e8e938
          (undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000005c2811e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578d288);
    FUN_012d0dc8(PTR_DAT_057781c8);
    bRam0000000005c2811e = 1;
  }
  if ((((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) || (*(long *)(param_2 + 0x18) == 0)) ||
     ((lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar5 == 0 ||
      (lVar4 = *(long *)(*(long *)(param_2 + 0x18) + 0x10), lVar4 == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = *(int *)(lVar4 + 0x18);
  param_3 = ~*(uint *)(lVar5 + 0x18) + param_3;
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_3 / iVar1;
  }
  uVar2 = param_3 - iVar3 * iVar1;
  if (*(uint *)(lVar4 + 0x18) <= uVar2) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,uVar2,*(undefined8 *)PTR_DAT_057781c8);
  }
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      return *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

