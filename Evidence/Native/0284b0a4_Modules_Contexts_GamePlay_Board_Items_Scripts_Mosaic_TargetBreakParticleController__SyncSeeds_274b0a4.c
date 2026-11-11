/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.TargetBreakParticleController$$SyncSeeds
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__SyncSeeds (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.TargetBreakParticleController$$SyncSeeds
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__SyncSeeds
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__SyncSeeds_274b0a4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c2c6bc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05768d48);
    FUN_012d0dc8(PTR_DAT_057b0a60);
    FUN_012d0dc8(PTR_DAT_057accc8);
    FUN_012d0dc8(PTR_DAT_057db9c8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2c6bc = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uVar5 = UnityEngine_Random__Range_383a650(1,0x7fffffff,0);
  puVar3 = PTR_DAT_057b0a60;
  puVar2 = PTR_DAT_0576c200;
  puVar1 = PTR_DAT_05768d48;
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057db9c8);
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar3), uVar4 = uStack_38, (uVar6 & 1) != 0
          ) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = UnityEngine_Object__op_Equality_407f288(uVar4,0,0);
      if ((uVar6 & 1) == 0) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_TargetBreakParticleController__ApplySeed_274b238
                  (uVar6,uVar4,uVar5);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

