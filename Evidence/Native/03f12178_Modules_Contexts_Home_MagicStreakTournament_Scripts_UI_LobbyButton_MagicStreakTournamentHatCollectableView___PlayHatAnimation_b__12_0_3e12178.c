/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$<PlayHatAnimation>b__12_0
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView___PlayHatAnimation_b__12_0 (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$<PlayHatAnimation>b__12_0
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView___PlayHatAnimation_b__12_0
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView___PlayHatAnimation_b__12_0_3e12178
               (long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if ((lVar2 == 0) ||
           (lVar2 = UnityEngine_Component__get_gameObject_408b480(lVar2,0), lVar2 == 0))
        goto LAB_03f121e0;
        UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    return;
  }
LAB_03f121e0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

