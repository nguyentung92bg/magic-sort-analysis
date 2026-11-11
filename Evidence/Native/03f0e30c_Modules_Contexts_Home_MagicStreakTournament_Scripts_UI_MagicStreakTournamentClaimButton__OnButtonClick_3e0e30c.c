/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentClaimButton$$OnButtonClick
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentClaimButton__OnButtonClick (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentClaimButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakTournamentClaimButton$$OnButtonClick
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentClaimButton__OnButtonClick
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentClaimButton_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentClaimButton__OnButtonClick_3e0e30c
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c38069 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_057bc6b0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c38069 = 1;
  }
  lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
  if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) &&
     (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_058030e0), lVar4 != 0)) {
    lVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetTournamentReward_411fe30
                      (lVar4,0);
    if (lVar3 != 0) {
      lVar5 = **(long **)(*(long *)puVar1 + 0xb8);
      if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
         (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar5,*(undefined8 *)PTR_DAT_057bc6b0), lVar5 == 0)) goto LAB_03f0e470;
      Modules_Contexts_Application_Reward_Scripts_RewardService__QueueBulkReward_3ce9518
                (lVar5,0xb,lVar3,0);
    }
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    puVar2 = PTR_DAT_057e7410;
    puVar1 = PTR_DAT_057b8520;
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentFinishedStat_14512ec
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
      Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ClaimTournamentReward_411e460
                (lVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar4 != 0) {
        lVar3 = *(long *)(lVar4 + 0x20);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        }
        lVar3 = *(long *)(lVar4 + 0x10);
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),lVar4,0,*(undefined8 *)(lVar3 + 0x28));
          return;
        }
        return;
      }
    }
  }
LAB_03f0e470:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

