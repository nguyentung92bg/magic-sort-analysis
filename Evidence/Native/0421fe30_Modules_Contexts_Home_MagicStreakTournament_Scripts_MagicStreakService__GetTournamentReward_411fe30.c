/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetTournamentReward
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetTournamentReward (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetTournamentReward
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetTournamentReward
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetTournamentReward_411fe30
          (long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528();
  if (iVar1 == 3) {
    if ((((*(long *)(param_1 + 0x10) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 == 0)) ||
        (lVar2 = *(long *)(lVar2 + 0x80), lVar2 == 0)) ||
       (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)) goto LAB_0421ff10;
    puVar3 = (undefined8 *)(lVar2 + 0x20);
  }
  else if (iVar1 == 2) {
    if (((*(long *)(param_1 + 0x10) == 0) ||
        (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 == 0)) ||
       ((lVar2 = *(long *)(lVar2 + 0x80), lVar2 == 0 ||
        (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)))) goto LAB_0421ff10;
    puVar3 = (undefined8 *)(lVar2 + 0x18);
  }
  else if (iVar1 == 1) {
    if ((((*(long *)(param_1 + 0x10) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 == 0)) ||
        (lVar2 = *(long *)(lVar2 + 0x80), lVar2 == 0)) ||
       (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)) {
LAB_0421ff10:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    puVar3 = (undefined8 *)(lVar2 + 0x10);
  }
  else {
    if (((*(long *)(param_1 + 0x10) == 0) ||
        (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar2 == 0)) ||
       ((lVar2 = *(long *)(lVar2 + 0x80), lVar2 == 0 ||
        (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)))) goto LAB_0421ff10;
    if (*(int *)(lVar2 + 0x30) <= iVar1) {
      return 0;
    }
    puVar3 = (undefined8 *)(lVar2 + 0x28);
  }
  return *puVar3;
}

