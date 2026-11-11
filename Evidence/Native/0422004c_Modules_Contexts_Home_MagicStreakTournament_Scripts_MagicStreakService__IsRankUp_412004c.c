/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IsRankUp
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsRankUp (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$IsRankUp
   bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsRankUp
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__IsRankUp_412004c
               (long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x80), lVar3 != 0)) {
    if (*(char *)(lVar3 + 0x1d) != '\0') {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_042200ac;
      iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x38);
      iVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                        ();
      if (((iVar1 != iVar2) && (iVar1 != 0)) && (iVar2 != 0)) {
        return iVar2 <= iVar1 + -10;
      }
    }
    return false;
  }
LAB_042200ac:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

