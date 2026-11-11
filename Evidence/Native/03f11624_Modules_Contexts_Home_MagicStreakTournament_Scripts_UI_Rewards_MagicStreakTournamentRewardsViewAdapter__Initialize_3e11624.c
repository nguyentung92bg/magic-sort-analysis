/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakTournamentRewardsViewAdapter$$Initialize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter__Initialize (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakTournamentRewardsViewAdapter$$Initialize
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter__Initialize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakTournamentRewardsViewAdapter__Initialize_3e11624
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c38086 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05781470);
    FUN_012d0dc8(PTR_DAT_057c2598);
    bRam0000000005c38086 = 1;
  }
  if (((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
      (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) &&
     (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_058030e0), puVar4 = PTR_DAT_057c2598,
     lVar5 != 0)) {
    uVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetProgressbarAllRewards_411faa8
                      (lVar5,0);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar5 != 0) {
      System_Collections_Generic_List_object____ctor_21fc324
                (lVar5,uVar6,*(undefined8 *)PTR_DAT_05781470);
      plVar7 = (long *)(param_1 + 0x28);
      *plVar7 = lVar5;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

