/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$GetLevelEndType
int32_t Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__GetLevelEndType (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, int32_t gamePlayStateType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$GetLevelEndType
   int32_t Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__GetLevelEndType
   (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, int32_t
   gamePlayStateType, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__GetLevelEndType_1611338
          (undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 5) {
    return 2;
  }
  if (param_2 == 7) {
    return 1;
  }
  uVar1 = 3;
  if (param_2 != 0xc) {
    uVar1 = 0;
  }
  return uVar1;
}

