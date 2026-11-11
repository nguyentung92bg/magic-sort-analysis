/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardViewAdapter$$UpdateView
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter_o*
   __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, int32_t
   index, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardViewAdapter__UpdateView_32df53c
               (long param_1,long *param_2,undefined4 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uStack_24;
  
  if ((bRam0000000005c31da9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05759ca8);
    FUN_012d0dc8(PTR_DAT_0576fd60);
    bRam0000000005c31da9 = 1;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x28),param_3,*(undefined8 *)PTR_DAT_05759ca8),
     param_2 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0576fd60 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0576fd60))
    {
      uStack_24 = 0;
      if ((lVar4 != 0) && (param_2[6] != 0)) {
        Modules_Contexts_Home_UI_Common_Scripts_RankView__SetRank_297ff7c
                  (param_2[6],*(undefined4 *)(lVar4 + 0x14),*(undefined1 *)(lVar4 + 0x28),0);
        if ((param_2[10] != 0) &&
           (lVar2 = UnityEngine_Component__get_gameObject_408b480(param_2[10],0), lVar2 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar2,*(char *)(lVar4 + 0x28) == '\0',0);
          if ((param_2[0xb] != 0) &&
             (lVar2 = UnityEngine_Component__get_gameObject_408b480(param_2[0xb],0), lVar2 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar2,*(undefined1 *)(lVar4 + 0x28),0);
            uStack_24 = *(undefined4 *)(lVar4 + 0x24);
            plVar5 = (long *)param_2[10];
            uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
              uStack_24 = *(undefined4 *)(lVar4 + 0x24);
              plVar5 = (long *)param_2[0xb];
              uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
                if (*(char *)(lVar4 + 0x28) == '\0') {
                  Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__ApplyCompetitorSprites_32debb8
                            (param_2);
                }
                else {
                  Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardElementView__ApplyUserSprites_32de974
                            (param_2);
                }
                if (param_2[0xf] != 0) {
                  Modules_Contexts_Home_UI_Common_Scripts_StreakTournamentRewardImage__UpdateDisplay_2980c98
                            (param_2[0xf],*(undefined4 *)(lVar4 + 0x20),0);
                  if (param_2[0x10] != 0) {
                    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                              (param_2[0x10],*(undefined1 *)(lVar4 + 0x28),
                               *(undefined8 *)(lVar4 + 0x30),*(undefined1 *)(lVar4 + 0x68),0);
                    if (param_2[0x10] != 0) {
                      Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                                (param_2[0x10],*(undefined8 *)(lVar4 + 0x40),0);
                      if (param_2[0x10] != 0) {
                        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                                  (param_2[0x10],*(undefined8 *)(lVar4 + 0x18),0);
                        if (param_2[0x10] != 0) {
                          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                                    (param_2[0x10],*(undefined8 *)(lVar4 + 0x48),0);
                          if (param_2[0x10] != 0) {
                            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                                      (param_2[0x10],*(undefined8 *)(lVar4 + 0x60),0);
                            if (param_2[0x10] != 0) {
                              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                                        (param_2[0x10],*(undefined8 *)(lVar4 + 0x50),0);
                              if (param_2[0x10] != 0) {
                                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                                          (param_2[0x10],*(undefined8 *)(lVar4 + 0x58),
                                           *(undefined8 *)(lVar4 + 0x18),0);
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
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

