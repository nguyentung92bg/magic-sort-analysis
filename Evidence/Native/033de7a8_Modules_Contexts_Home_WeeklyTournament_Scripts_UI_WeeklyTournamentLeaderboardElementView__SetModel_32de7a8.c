/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardElementView$$SetModel
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__SetModel (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView_o* __this, Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel_o* model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardElementView$$SetModel
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__SetModel
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView_o*
   __this,
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardPlayerViewModel_o*
   model, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__SetModel_32de7a8
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    Modules_Contexts_Home_UI_Common_Scripts_RankView__SetRank_297ff7c
              (*(long *)(param_1 + 0x30),*(undefined4 *)(param_2 + 0x14),
               *(undefined1 *)(param_2 + 0x28),0);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
       lVar1 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar1,*(char *)(param_2 + 0x28) == '\0',0);
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x58),0),
         lVar1 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar1,*(undefined1 *)(param_2 + 0x28),0);
        uStack_24 = *(undefined4 *)(param_2 + 0x24);
        plVar3 = *(long **)(param_1 + 0x50);
        uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
          uStack_24 = *(undefined4 *)(param_2 + 0x24);
          plVar3 = *(long **)(param_1 + 0x58);
          uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
            if (*(char *)(param_2 + 0x28) == '\0') {
              Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__ApplyCompetitorSprites_32debb8
                        (param_1);
            }
            else {
              Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__ApplyUserSprites_32de974
                        (param_1);
            }
            if (*(long *)(param_1 + 0x78) != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_StreakTournamentRewardImage__UpdateDisplay_2980c98
                        (*(long *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x20),0);
              if (*(long *)(param_1 + 0x80) != 0) {
                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                          (*(long *)(param_1 + 0x80),*(undefined1 *)(param_2 + 0x28),
                           *(undefined8 *)(param_2 + 0x30),*(undefined1 *)(param_2 + 0x68),0);
                if (*(long *)(param_1 + 0x80) != 0) {
                  Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                            (*(long *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x40),0);
                  if (*(long *)(param_1 + 0x80) != 0) {
                    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                              (*(long *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x18),0);
                    if (*(long *)(param_1 + 0x80) != 0) {
                      Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                                (*(long *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x48),0);
                      if (*(long *)(param_1 + 0x80) != 0) {
                        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                                  (*(long *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x60),0);
                        if (*(long *)(param_1 + 0x80) != 0) {
                          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                                    (*(long *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x50),0);
                          if (*(long *)(param_1 + 0x80) != 0) {
                            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                                      (*(long *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x58),
                                       *(undefined8 *)(param_2 + 0x18),0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

