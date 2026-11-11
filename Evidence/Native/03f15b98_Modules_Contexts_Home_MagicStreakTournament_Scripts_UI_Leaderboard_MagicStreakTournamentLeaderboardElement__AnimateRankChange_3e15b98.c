/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$AnimateRankChange
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__AnimateRankChange (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o* __this, int32_t currentRankIndex, int32_t newRankIndex, float calculateScrollDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard.MagicStreakTournamentLeaderboardElement$$AnimateRankChange
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__AnimateRankChange
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement_o*
   __this, int32_t currentRankIndex, int32_t newRankIndex, float calculateScrollDuration, const
   MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Leaderboard_MagicStreakTournamentLeaderboardElement__AnimateRankChange_3e15b98
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               int param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_05771830;
  lVar3 = *(long *)(param_4 + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c380b0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0577fe10);
    FUN_012d0dc8(PTR_DAT_057f65b8);
    FUN_012d0dc8(PTR_DAT_05785930);
    FUN_012d0dc8(PTR_DAT_057ef2b0);
    FUN_012d0dc8(PTR_DAT_05771830);
    bRam0000000005c380b0 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = lVar3;
    FUN_012d0d74((long *)(lVar4 + 0x10),lVar3);
    lVar5 = UnityEngine_Component__get_gameObject_408b480(lVar3,0);
    if (lVar5 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar5,0 < param_6,0);
      if ((*(long *)(lVar3 + 0x50) != 0) &&
         (lVar5 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(lVar3 + 0x50),0), lVar5 != 0))
      {
        uVar7 = UnityEngine_Transform__get_localScale_4093230(lVar5,0);
        *(undefined4 *)(lVar4 + 0x18) = uVar7;
        *(undefined4 *)(lVar4 + 0x1c) = param_2;
        *(undefined4 *)(lVar4 + 0x20) = param_3;
        puVar1 = PTR_DAT_057cc518;
        if (*(long *)(lVar3 + 0x50) != 0) {
          uVar6 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(lVar3 + 0x50),0);
          DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                    (_UNK_0432e0b4,_UNK_0432e0b4,_UNK_0432e0b4,param_1._0_4_ * 0.5,uVar6,0);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057f65b8;
          puVar1 = PTR_DAT_057606c8;
          if (lVar3 != 0) {
            DG_Tweening_TweenCallback_float____ctor_341f244
                      (lVar3,lVar4,*(undefined8 *)PTR_DAT_05785930,0);
            uVar6 = DG_Tweening_DOVirtual__Float_1edbb8c
                              ((float)param_5,(float)param_6,param_1._0_8_,lVar3,0);
            lVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                              (uVar6,3,*(undefined8 *)puVar2);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_0577fe10;
            if (lVar5 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar5,lVar4,*(undefined8 *)PTR_DAT_057ef2b0,0);
              uVar6 = *(undefined8 *)puVar1;
              if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
                *(long *)(lVar3 + 0x80) = lVar5;
                FUN_012d0d74((long *)(lVar3 + 0x80),lVar5,uVar6);
              }
              return lVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

