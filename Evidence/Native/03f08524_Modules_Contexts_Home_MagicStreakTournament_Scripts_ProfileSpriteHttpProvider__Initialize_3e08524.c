/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteHttpProvider$$Initialize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider__Initialize (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* profileSpriteCacheService, Modules_Infrastructure_DI_CustomUpdater_o* customUpdater, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteHttpProvider$$Initialize
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider__Initialize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o*
   profileSpriteCacheService, Modules_Infrastructure_DI_CustomUpdater_o* customUpdater,
   Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider__Initialize_3e08524
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_05801560;
  if ((bRam0000000005c38035 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05801560);
    bRam0000000005c38035 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Threading_CancellationTokenSource___ctor_2a9cf74(lVar3,0);
    *(long *)(param_1 + 0x38) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x38),lVar3);
    *(undefined8 *)(param_1 + 0x40) = param_2;
    FUN_012d0d74((undefined8 *)(param_1 + 0x40),param_2);
    uVar1 = _UNK_043994b8;
    *(undefined4 *)(param_1 + 0x18) = 0x43480000;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

