/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$Dispose
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__Dispose (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$Dispose
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__Dispose
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__Dispose_3e085f8
               (long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x38);
    if (lVar2 != 0) {
      System_Threading_CancellationTokenSource__Cancel_2a9d0fc(lVar2,0);
    }
    if ((*(long *)(param_1 + 0x48) != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
      if ((bRam0000000005c373d6 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057f50b8,param_1,0);
        bRam0000000005c373d6 = 1;
      }
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar3 = *(long *)PTR_DAT_057f50b8;
      iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0xa0) + 8))
                        (lVar2,param_1);
      if (-1 < iVar1) {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x158) + 8))(lVar2,iVar1)
        ;
      }
      return -1 < iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

