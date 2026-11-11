/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldForceOpenPopup
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldForceOpenPopup (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldForceOpenPopup
   bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldForceOpenPopup
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldForceOpenPopup_411ff14
               (long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__GetState_3e07d08
                    (lVar3,0);
  if (iVar1 == 4) {
    if (*(long *)(lVar3 + 0x28) == 0) {
LAB_03f07fcc:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsRankUp_412004c
                      (*(long *)(lVar3 + 0x28),0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(lVar3 + 0x28) == 0) goto LAB_03f07fcc;
      uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsElapsedNLevelsSinceLastSeen_41200b0
                        (*(long *)(lVar3 + 0x28),0);
      if ((uVar2 & 1) != 0) {
        return true;
      }
    }
  }
  return iVar1 == 3 || iVar1 == 6;
}

