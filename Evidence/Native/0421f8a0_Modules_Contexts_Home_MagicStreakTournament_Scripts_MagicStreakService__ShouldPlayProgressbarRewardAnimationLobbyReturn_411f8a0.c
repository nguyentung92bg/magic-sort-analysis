/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldPlayProgressbarRewardAnimationLobbyReturn
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldPlayProgressbarRewardAnimationLobbyReturn (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ShouldPlayProgressbarRewardAnimationLobbyReturn
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldPlayProgressbarRewardAnimationLobbyReturn
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldPlayProgressbarRewardAnimationLobbyReturn_411f8a0
               (long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x80), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      bVar1 = false;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x28);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0421f8f4;
      bVar1 = *(int *)(lVar2 + 0x2c) < *(int *)(*(long *)(lVar2 + 0x20) + 0x20);
    }
    return bVar1;
  }
LAB_0421f8f4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

