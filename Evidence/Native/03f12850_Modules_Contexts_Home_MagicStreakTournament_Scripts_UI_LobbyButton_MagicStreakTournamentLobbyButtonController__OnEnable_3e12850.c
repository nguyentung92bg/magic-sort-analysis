/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$OnEnable
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__OnEnable (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$OnEnable
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__OnEnable
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__OnEnable_3e12850
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000005c38095 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ffcc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c38095 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldShowLobbyIcon_411ff30
                      (*(long *)(param_1 + 0x48),0);
    puVar2 = PTR_DAT_057ffcc8;
    puVar1 = PTR_DAT_057b8520;
    if (*(long *)(param_1 + 0x40) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),uVar3 & 1,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar4 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakTournamentTimer__UpdateTimerView_3e10d08
                    ();
          uVar5 = extraout_x1;
          if ((bRam0000000005c38096 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057aec28);
            bRam0000000005c38096 = 1;
            uVar5 = extraout_x1_00;
          }
          uVar6 = 0;
          if (*(long *)(param_1 + 0x48) != 0) {
            plVar7 = *(long **)(param_1 + 0x20);
            auVar8 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                               (*(long *)(param_1 + 0x48),0);
            uVar5 = auVar8._8_8_;
            if (auVar8._0_4_ == 0) {
              uVar5 = *(undefined8 *)PTR_DAT_057aec28;
              uVar6 = auVar8._0_8_;
            }
            else {
              uVar6 = 0;
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_03f130b0;
              Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                        (*(long *)(param_1 + 0x48),0);
              uVar5 = System_Int32__ToString_26c9768(&stack0xffffffffffffffec,0);
              uVar6 = uVar5;
            }
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
              return;
            }
          }
LAB_03f130b0:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0(uVar6,uVar5);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

