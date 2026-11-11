/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$ShouldPlaySuperChargerMagicBottleAnimations
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__ShouldPlaySuperChargerMagicBottleAnimations (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$ShouldPlaySuperChargerMagicBottleAnimations
   bool 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__ShouldPlaySuperChargerMagicBottleAnimations
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__ShouldPlaySuperChargerMagicBottleAnimations_1f17c94
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c28641 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a0c88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c28641 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = 0;
    if (*(long *)(*(long *)(param_1 + 0x40) + 0x68) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Equality_407f288(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) == 0) ||
            (lVar3 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar3 == 0))
           || (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_057a0c88), lVar3 == 0))
        goto LAB_02017d70;
        uVar1 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__ShouldShowInLevelActivationPopup_29700c8
                          (lVar3,0);
        uVar1 = uVar1 ^ 1;
      }
      else {
        uVar1 = 0;
      }
    }
    return uVar1 & 1;
  }
LAB_02017d70:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

