/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetScore
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetScore (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetScore
   int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetScore
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetScore_411ffe0
          (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(lVar2 + 0x2c);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

