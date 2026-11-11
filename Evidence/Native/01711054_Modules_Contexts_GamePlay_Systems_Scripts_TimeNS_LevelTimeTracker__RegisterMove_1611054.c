/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$RegisterMove
void Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__RegisterMove (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS.LevelTimeTracker$$RegisterMove
   void Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__RegisterMove
   (Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__RegisterMove_1611054
               (long param_1)

{
  double dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_18;
  
  if ((bRam0000000005c2446e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c2446e = 1;
  }
  uStack_18 = 0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  puVar2 = PTR_DAT_0576c1b8;
  if (*(char *)(param_1 + 0x20) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = System_DateTime__get_UtcNow_2100638(0);
    uStack_18 = System_DateTime__op_Subtraction_2101f60(uVar3,*(undefined8 *)(param_1 + 0x10),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    dVar1 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_18,0);
    *(float *)(param_1 + 0x24) = (float)dVar1;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

