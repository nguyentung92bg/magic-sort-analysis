/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetDailySeedIdFromConfig
System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailySeedIdFromConfig (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_DailyLevelConfigModel_o* dailyLevelConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetDailySeedIdFromConfig
   System_String_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailySeedIdFromConfig
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_DailyLevelConfigModel_o*
   dailyLevelConfigModel, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetDailySeedIdFromConfig_1e8ef54
          (undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam0000000005c28122 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dbb00);
    FUN_012d0dc8(PTR_DAT_0576cd98);
    bRam0000000005c28122 = 1;
  }
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    iVar4 = UnityEngine_Random__Range_383a650(0,100,0);
    if ((*(long *)(param_2 + 0x10) != 0) && (lVar5 != 0)) {
      iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 0x18);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar4 / iVar1;
      }
      uVar2 = iVar4 - iVar3 * iVar1;
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                  (0,uVar2,*(undefined8 *)PTR_DAT_0576cd98);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

