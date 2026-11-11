/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$ReturnCurrencyViews
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ReturnCurrencyViews (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$ReturnCurrencyViews
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ReturnCurrencyViews
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__ReturnCurrencyViews_3e14e2c
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  if ((bRam0000000005c380a8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c1488);
    FUN_012d0dc8(PTR_DAT_057ad868);
    FUN_012d0dc8(PTR_DAT_0575f210);
    FUN_012d0dc8(PTR_DAT_05780dd8);
    FUN_012d0dc8(PTR_DAT_057aff58);
    bRam0000000005c380a8 = 1;
  }
  puVar3 = PTR_DAT_057c1488;
  puVar2 = PTR_DAT_057ad868;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_78,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_057aff58);
    puVar4 = PTR_DAT_05805c10;
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    plStack_50 = plStack_68;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_60,*(undefined8 *)puVar2), plVar5 = plStack_50,
          (uVar6 & 1) != 0) {
      if (plStack_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      (**(code **)(*plStack_50 + 0x1b8))(plStack_50,*(undefined8 *)(*plStack_50 + 0x1c0));
      lVar7 = UnityEngine_Component__get_transform_408b444(plVar5,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_Transform__set_parent_40933e0(lVar7,0,0);
      lVar7 = UnityEngine_Component__get_transform_408b444(plVar5,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(puVar4);
        cRam0000000005c230a9 = '\x01';
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
      UnityEngine_Transform__set_localScale_40932d0
                (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                 *(undefined4 *)(lVar8 + 0x14),lVar7,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_60,*(undefined8 *)puVar3);
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

