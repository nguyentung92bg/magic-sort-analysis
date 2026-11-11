/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetLevelAndLevelConfigModelWhenCheatNotEnabled
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelAndLevelConfigModelWhenCheatNotEnabled (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetLevelAndLevelConfigModelWhenCheatNotEnabled
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelAndLevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelAndLevelConfigModelWhenCheatNotEnabled
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t
   level, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelAndLevelConfigModelWhenCheatNotEnabled_1e8d598
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c28116 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c28116 = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uStack_28 = System_DateTime__get_Now_2100510(0);
  uVar2 = System_DateTime__get_Millisecond_210039c(&uStack_28,0);
  UnityEngine_Random__InitState_383a5d4(uVar2,0);
  if (param_2 == 1) {
    Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetTutorialLevelAndLevelConfigModel_1e8db18
              (param_1,1);
  }
  else {
    Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelAndLevelConfigModelInternal_1e8e114
              (param_1,param_2);
  }
  return;
}

