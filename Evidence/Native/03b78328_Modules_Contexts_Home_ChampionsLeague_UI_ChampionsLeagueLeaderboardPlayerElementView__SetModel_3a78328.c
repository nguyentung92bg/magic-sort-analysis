/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPlayerElementView$$SetModel
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPlayerElementView__SetModel (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPlayerElementView_o* __this, Modules_Contexts_Home_ChampionsLeague_UI_IChampionsLeagueLeaderboardViewModel_o* championsLeagueLeaderboardViewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardPlayerElementView$$SetModel
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPlayerElementView__SetModel
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPlayerElementView_o* __this,
   Modules_Contexts_Home_ChampionsLeague_UI_IChampionsLeagueLeaderboardViewModel_o*
   championsLeagueLeaderboardViewModel, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardPlayerElementView__SetModel_3a78328
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000005c35ab4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057853c8);
    bRam0000000005c35ab4 = 1;
  }
  uStack_24 = 0;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057853c8 + 300);
    if ((*(byte *)(*param_2 + 300) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057853c8))
    {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(param_2);
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                (*(long *)(param_1 + 0x80),(char)param_2[2],param_2[6],(char)param_2[0xc],0);
      if (*(long *)(param_1 + 0x80) != 0) {
        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                  (*(long *)(param_1 + 0x80),param_2[3],0);
                    /* try { // try from 03b783c8 to 03c78663 has its CatchHandler @ 03b783c8
                       catch() { ... } // from try @ 03b783c8 with catch @ 03b783c8
                       catch() { ... } // from try @ 03b786d0 with catch @ 03b783c8
                       catch() { ... } // from try @ 03b7871c with catch @ 03b783c8
                       catch() { ... } // from try @ 03b78730 with catch @ 03b783c8
                       catch() { ... } // from try @ 03b78770 with catch @ 03b783c8
                       catch() { ... } // from try @ 03b787ac with catch @ 03b783c8 */
        if (*(long *)(param_1 + 0x80) != 0) {
          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                    (*(long *)(param_1 + 0x80),param_2[0xb],0);
          if (*(long *)(param_1 + 0x80) != 0) {
            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                      (*(long *)(param_1 + 0x80),param_2[7],0);
            if (*(long *)(param_1 + 0x80) != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                        (*(long *)(param_1 + 0x80),param_2[8],0);
              if (*(long *)(param_1 + 0x80) != 0) {
                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                          (*(long *)(param_1 + 0x80),param_2[9],0);
                if (*(long *)(param_1 + 0x80) != 0) {
                  Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                            (*(long *)(param_1 + 0x80),param_2[10],param_2[3],0);
                  if (*(long *)(param_1 + 0x58) != 0) {
                    UnityEngine_GameObject__SetActive_408e318
                              (*(long *)(param_1 + 0x58),(char)param_2[2],0);
                    if (*(long *)(param_1 + 0x60) != 0) {
                      UnityEngine_GameObject__SetActive_408e318
                                (*(long *)(param_1 + 0x60),(char)param_2[2] == '\0',0);
                      uStack_24 = *(undefined4 *)((long)param_2 + 0x14);
                      plVar3 = *(long **)(param_1 + 0x48);
                      uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
                      if (plVar3 != (long *)0x0) {
                        (**(code **)(*plVar3 + 0x558))
                                  (plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
                        uStack_24 = (undefined4)param_2[4];
                        plVar3 = *(long **)(param_1 + 0x50);
                        uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
                        if (plVar3 != (long *)0x0) {
                          (**(code **)(*plVar3 + 0x558))
                                    (plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
                          if (*(long *)(param_1 + 0x70) != 0) {
                            Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementRankImageSelector__Select_3a769a4
                                      (*(long *)(param_1 + 0x70),
                                       *(undefined4 *)((long)param_2 + 0x14),(char)param_2[2]);
                            if (*(long *)(param_1 + 0x68) != 0) {
                              Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementRewardView__Show_3a73984
                                        (*(long *)(param_1 + 0x68),param_2[5]);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

