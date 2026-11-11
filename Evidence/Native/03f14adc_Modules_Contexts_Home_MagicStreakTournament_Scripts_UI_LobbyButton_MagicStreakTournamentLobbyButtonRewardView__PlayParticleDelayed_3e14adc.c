/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$PlayParticleDelayed
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__PlayParticleDelayed (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$PlayParticleDelayed
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__PlayParticleDelayed
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, UnityEngine_Vector3_o position, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__PlayParticleDelayed_3e14adc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar1 = PTR_DAT_057cdfd0;
  if ((bRam0000000005c380a5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057c8d30);
    FUN_012d0dc8(PTR_DAT_057cdfd0);
    bRam0000000005c380a5 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    System_Object___ctor_23dfe5c(lVar6,0);
    *(long *)(lVar6 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar6 + 0x10),param_4);
    *(undefined4 *)(lVar6 + 0x18) = param_1;
    *(undefined4 *)(lVar6 + 0x1c) = param_2;
    *(undefined4 *)(lVar6 + 0x20) = param_3;
    if (*(long *)(param_4 + 0x20) != 0) {
      uVar8 = *(undefined4 *)(*(long *)(param_4 + 0x20) + 0xb0);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
      if (lVar7 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,lVar6,*(undefined8 *)PTR_DAT_057c8d30,0);
        puVar1 = PTR_DAT_057815e0;
        if ((bRam0000000005c28460 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057815e0,1,0);
          FUN_012d0dc8(PTR_DAT_057d6890);
          FUN_012d0dc8(PTR_DAT_057ca968);
          FUN_012d0dc8(PTR_DAT_057f1100);
          bRam0000000005c28460 = 1;
        }
        puVar4 = PTR_DAT_057f1100;
        puVar3 = PTR_DAT_057d6890;
        puVar2 = PTR_DAT_057ca968;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        DG_Tweening_DOTween__Sequence_1eda154();
        uVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar8);
        uVar5 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                          (uVar5,lVar7,*(undefined8 *)puVar3);
        lVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                          (uVar5,0,1,*(undefined8 *)puVar4);
        uVar5 = *(undefined8 *)puVar2;
        if (((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) &&
           (*(char *)(lVar6 + 0x100) == '\0')) {
          *(undefined1 *)(lVar6 + 0x9c) = 1;
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

