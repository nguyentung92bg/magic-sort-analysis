/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$GetAverageMoveDuration
float Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__GetAverageMoveDuration (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$GetAverageMoveDuration
   float Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__GetAverageMoveDuration
   (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, const MethodInfo*
   method); */

float Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__GetAverageMoveDuration_1611368
                (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined *puVar4;
  float fVar5;
  undefined8 uStack_28;
  
  if ((bRam0000000005c24470 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c24470 = 1;
  }
  puVar4 = PTR_DAT_0576c1b8;
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    fVar5 = 0.0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uStack_28 = System_DateTime__op_Subtraction_2101f60(uVar2,uVar1,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar4);
    }
    dVar3 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_28,0);
    fVar5 = (float)dVar3 / (float)*(int *)(param_1 + 0x28);
  }
  return fVar5;
}

