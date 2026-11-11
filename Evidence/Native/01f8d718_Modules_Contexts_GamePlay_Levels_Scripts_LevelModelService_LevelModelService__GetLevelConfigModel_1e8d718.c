/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetLevelConfigModel
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetLevelConfigModel
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, int32_t
   level, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetLevelConfigModel_1e8d718
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c28114 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c28114 = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uStack_28 = System_DateTime__get_Now_2100510(0);
  uVar2 = System_DateTime__get_Millisecond_210039c(&uStack_28,0);
  UnityEngine_Random__InitState_383a5d4(uVar2,0);
  if (param_2 == 1) {
    Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetTutorialLevelConfigModel_1e8d7c0
              (param_1,1);
  }
  else {
    Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetRegularLevelConfigModel_1e8d960
              (param_1,param_2);
  }
  return;
}

