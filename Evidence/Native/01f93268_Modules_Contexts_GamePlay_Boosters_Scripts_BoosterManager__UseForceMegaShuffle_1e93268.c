/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$UseForceMegaShuffle
System_Threading_Tasks_Task_bool__o* Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseForceMegaShuffle (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$UseForceMegaShuffle
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseForceMegaShuffle
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, float delay, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__UseForceMegaShuffle_1e93268
               (undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_05766da0;
  if ((bRam0000000005c28149 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577b428);
    FUN_012d0dc8(PTR_DAT_0579d9a0);
    FUN_012d0dc8(PTR_DAT_057f5ad8);
    FUN_012d0dc8(PTR_DAT_05766da0);
    bRam0000000005c28149 = 1;
  }
  puVar4 = PTR_DAT_057f5ad8;
  puVar3 = PTR_DAT_0579d9a0;
  puVar2 = PTR_DAT_0577b428;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Create_1aeddc8
            (&uStack_d8,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_a0 | 8;
  uStack_b0 = uStack_c8;
  uStack_b8 = uStack_d0;
  uStack_c0 = uStack_d8;
  uStack_90 = uStack_d0;
  uStack_98 = uStack_d8;
  uStack_88 = uStack_c8;
  FUN_012d0d74(uVar5,0);
  uStack_78 = param_2;
  FUN_012d0d74(&uStack_78,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,param_1);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Start_BoosterManager__UseForceMegaShuffle_d__28__3c5ebac
            (uVar5,&uStack_a0,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___get_Task_1aedddc
            (uVar5,*(undefined8 *)puVar4);
  return;
}

