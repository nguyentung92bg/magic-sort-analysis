/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetProgressbarCurrentReward
Modules_Contexts_Application_Reward_Scripts_RewardModel_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarCurrentReward (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetProgressbarCurrentReward
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarCurrentReward
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarCurrentReward_411fb60
          (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000005c3ac81 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783728);
    FUN_012d0dc8(PTR_DAT_057a2920);
    bRam0000000005c3ac81 = 1;
  }
  iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentProgressbarRewardIndex_411fbec
                    (param_1);
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    if (iVar1 < *(int *)(lVar3 + 0x18)) {
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar1,*(undefined8 *)PTR_DAT_057a2920);
      if (lVar3 == 0) goto LAB_0421fbe8;
      uVar2 = *(undefined8 *)(lVar3 + 0x10);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
LAB_0421fbe8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

