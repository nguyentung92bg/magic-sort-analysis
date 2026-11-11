/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetProgressbarClaimedStepReward
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarClaimedStepReward (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetProgressbarClaimedStepReward
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarClaimedStepReward
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarClaimedStepReward_4120334
          (long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000005c3ac8b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783728);
    FUN_012d0dc8(PTR_DAT_057a2920);
    bRam0000000005c3ac8b = 1;
  }
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar4 != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x60), lVar2 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x20);
    if (iVar1 < *(int *)(lVar2 + 0x18)) {
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar1,*(undefined8 *)PTR_DAT_057a2920);
      if (lVar4 == 0) goto LAB_042203c0;
      uVar3 = *(undefined8 *)(lVar4 + 0x10);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
LAB_042203c0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

