/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$Awake
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__Awake (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonController$$Awake
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__Awake
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonController__Awake_3e124d8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_0578b048;
  if ((bRam0000000005c38090 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575f710);
    FUN_012d0dc8(PTR_DAT_057d3720);
    FUN_012d0dc8(PTR_DAT_0576cb20);
    FUN_012d0dc8(PTR_DAT_057b0e30);
    FUN_012d0dc8(PTR_DAT_0579de10);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c38090 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar6 != 0) &&
     (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_0575f710,0),
     puVar1 = PTR_DAT_0576aae0, lVar10 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar10,lVar6,0);
    puVar4 = PTR_DAT_057b8520;
    puVar3 = PTR_DAT_0579de10;
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) {
      uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_058030e0);
      *(undefined8 *)(param_1 + 0x48) = uVar7;
      FUN_012d0d74();
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar3);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar10 != 0) &&
         (System_Action___ctor_21239bc(lVar10,param_1,*(undefined8 *)PTR_DAT_0576cb20,0),
         puVar1 = PTR_DAT_057b0e30, lVar6 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar6,lVar10,0);
        lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar10 != 0) &&
           (System_Action___ctor_21239bc(lVar10,param_1,*(undefined8 *)PTR_DAT_057d3720,0),
           lVar6 != 0)) {
          if ((bRam0000000005c3aa34 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048,lVar10,0);
            bRam0000000005c3aa34 = 1;
          }
          puVar2 = PTR_DAT_0578b048;
          lVar11 = *(long *)(lVar6 + 0x20);
          while ((plVar8 = (long *)System_Delegate__Combine_23e3964(lVar11,lVar10,0),
                 plVar8 == (long *)0x0 || (*plVar8 == *(long *)puVar2))) {
            lVar9 = FUN_01351224((long *)(lVar6 + 0x20),plVar8,lVar11);
            bVar5 = lVar11 == lVar9;
            lVar11 = lVar9;
            if (bVar5) {
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(plVar8);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

