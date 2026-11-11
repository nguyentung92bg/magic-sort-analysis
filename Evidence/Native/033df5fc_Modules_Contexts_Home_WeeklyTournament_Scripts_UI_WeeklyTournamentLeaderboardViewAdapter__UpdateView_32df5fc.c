/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView,
   Il2CppObject* viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter__UpdateView_32df5fc
               (undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000005c31daa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576fd60);
    FUN_012d0dc8(PTR_DAT_05796e60);
    bRam0000000005c31daa = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0576fd60 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0576fd60))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
    if (param_3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_05796e60 + 300);
      if ((*(byte *)(*param_3 + 300) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_05796e60)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(param_3);
      }
    }
    uStack_24 = 0;
    if ((param_3 != (long *)0x0) && (param_2[6] != 0)) {
      Modules_Contexts_Home_UI_Common_Scripts_RankView__SetRank_297ff7c
                (param_2[6],*(undefined4 *)((long)param_3 + 0x14),(char)param_3[5],0);
      if ((param_2[10] != 0) &&
         (lVar2 = UnityEngine_Component__get_gameObject_408b480(param_2[10],0), lVar2 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar2,(char)param_3[5] == '\0',0);
        if ((param_2[0xb] != 0) &&
           (lVar2 = UnityEngine_Component__get_gameObject_408b480(param_2[0xb],0), lVar2 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar2,(char)param_3[5],0);
          uStack_24 = *(undefined4 *)((long)param_3 + 0x24);
          plVar4 = (long *)param_2[10];
          uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
            uStack_24 = *(undefined4 *)((long)param_3 + 0x24);
            plVar4 = (long *)param_2[0xb];
            uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
              if ((char)param_3[5] == '\0') {
                Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__ApplyCompetitorSprites_32debb8
                          (param_2);
              }
              else {
                Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__ApplyUserSprites_32de974
                          (param_2);
              }
              if (param_2[0xf] != 0) {
                Modules_Contexts_Home_UI_Common_Scripts_StreakTournamentRewardImage__UpdateDisplay_2980c98
                          (param_2[0xf],(int)param_3[4],0);
                if (param_2[0x10] != 0) {
                  Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                            (param_2[0x10],(char)param_3[5],param_3[6],(char)param_3[0xd],0);
                  if (param_2[0x10] != 0) {
                    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                              (param_2[0x10],param_3[8],0);
                    if (param_2[0x10] != 0) {
                      Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                                (param_2[0x10],param_3[3],0);
                      if (param_2[0x10] != 0) {
                        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                                  (param_2[0x10],param_3[9],0);
                        if (param_2[0x10] != 0) {
                          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                                    (param_2[0x10],param_3[0xc],0);
                          if (param_2[0x10] != 0) {
                            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                                      (param_2[0x10],param_3[10],0);
                            if (param_2[0x10] != 0) {
                              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                                        (param_2[0x10],param_3[0xb],param_3[3],0);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

