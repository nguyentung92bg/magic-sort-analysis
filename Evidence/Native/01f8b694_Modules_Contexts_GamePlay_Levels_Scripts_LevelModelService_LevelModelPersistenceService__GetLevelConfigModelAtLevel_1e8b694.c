/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$GetLevelConfigModelAtLevel
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetLevelConfigModelAtLevel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$GetLevelConfigModelAtLevel
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetLevelConfigModelAtLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o*
   __this, int32_t level, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetLevelConfigModelAtLevel_1e8b694
          (long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) && (*(long *)(lVar4 + 0x18) != 0)) {
      if ((bRam0000000005c28103 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578d288);
        bRam0000000005c28103 = 1;
      }
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) ||
         (lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(int *)(lVar6 + 0x18) < param_2) {
        if ((bRam0000000005c28105 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0578d288);
          FUN_012d0dc8(PTR_DAT_057781c8);
          bRam0000000005c28105 = 1;
        }
        if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) || (*(long *)(lVar4 + 0x18) == 0)) ||
           ((lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar6 == 0 ||
            (lVar4 = *(long *)(*(long *)(lVar4 + 0x18) + 0x10), lVar4 == 0)))) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        iVar1 = *(int *)(lVar4 + 0x18);
        param_2 = ~*(uint *)(lVar6 + 0x18) + param_2;
        uVar5 = *(undefined8 *)PTR_DAT_057781c8;
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = param_2 / iVar1;
        }
        uVar2 = param_2 - iVar3 * iVar1;
      }
      else {
        if ((bRam0000000005c28104 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057781c8);
          bRam0000000005c28104 = 1;
        }
        if (((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) ||
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar2 = param_2 - 1;
        uVar5 = *(undefined8 *)PTR_DAT_057781c8;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4(0,uVar2,uVar5);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 != 0) {
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          return *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return 0;
}

