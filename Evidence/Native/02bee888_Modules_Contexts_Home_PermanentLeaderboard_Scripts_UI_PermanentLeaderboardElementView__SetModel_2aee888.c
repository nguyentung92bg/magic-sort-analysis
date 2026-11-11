/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardElementView$$SetModel
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__SetModel (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView_o* __this, Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel_o* model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardElementView$$SetModel
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__SetModel
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView_o* __this,
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel_o*
   model, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__SetModel_2aee888
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  if (param_2 != 0) {
                    /* try { // try from 02bee89c to 02cee8a3 has its CatchHandler @ 02bee974 */
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x10);
    FUN_012d0d74((undefined8 *)(param_1 + 0x80));
    if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 02bee8cc to 02cee8db has its CatchHandler @ 02bee96c */
      Modules_Contexts_Home_UI_Common_Scripts_RankView__SetRank_297ff7c
                (*(long *)(param_1 + 0x30),*(undefined4 *)(param_2 + 0x24),
                 *(undefined1 *)(param_2 + 0x28),0);
      uStack_24 = *(undefined4 *)(param_2 + 0x20);
      plVar3 = *(long **)(param_1 + 0x50);
      uVar1 = System_Int32__ToString_26c9768(&uStack_24,0);
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 02bee8ec to 02cee90f has its CatchHandler @ 02bee970 */
        (**(code **)(*plVar3 + 0x558))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x560));
        uStack_24 = *(undefined4 *)(param_2 + 0x20);
        plVar3 = *(long **)(param_1 + 0x58);
        uVar1 = System_Int32__ToString_26c9768(&uStack_24,0);
        if (plVar3 != (long *)0x0) {
                    /* try { // try from 02bee924 to 02cee933 has its CatchHandler @ 02bee97c */
                    /* try { // try from 02bee934 to 02cee993 has its CatchHandler @ 02bee7f0 */
          (**(code **)(*plVar3 + 0x558))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x560));
          if ((*(long *)(param_1 + 0x50) != 0) &&
             (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
             lVar2 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar2,*(char *)(param_2 + 0x28) == '\0',0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bee8cc with catch @ 02bee96c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bee8ec with catch @ 02bee970
                        */
            if ((*(long *)(param_1 + 0x58) != 0) &&
               (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x58),0),
               lVar2 != 0)) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bee89c with catch @ 02bee974
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bee874 with catch @ 02bee978
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bee924 with catch @ 02bee97c
                        */
              UnityEngine_GameObject__SetActive_408e318(lVar2,*(undefined1 *)(param_2 + 0x28),0);
              if (*(char *)(param_2 + 0x28) == '\0') {
                    /* try { // try from 02bee994 to 02cee997 has its CatchHandler @ 02bee9a4 */
                Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__ApplyCompetitorSprites_2aeec98
                          (param_1);
              }
              else {
                Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__ApplyUserSprites_2aeea54
                          (param_1);
              }
              if (*(long *)(param_1 + 0x78) != 0) {
                    /* catch() { ... } // from try @ 02bee994 with catch @ 02bee9a4 */
                    /* try { // try from 02bee9b0 to 02cee9bb has its CatchHandler @ 02bee9d0 */
                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                          (*(long *)(param_1 + 0x78),*(undefined1 *)(param_2 + 0x28),
                           *(undefined8 *)(param_2 + 0x10),1,0);
                    /* try { // try from 02bee9bc to 02cee9c7 has its CatchHandler @ 02bee7f0 */
                if (*(long *)(param_1 + 0x78) != 0) {
                    /* try { // try from 02bee9c8 to 02cee9cf has its CatchHandler @ 02bee9d0 */
                  Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                            (*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x18),0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bee9b0 with catch @ 02bee9d0
                       catch(type#2 @ 00000000) { ... } // from try @ 02bee9c8 with catch @ 02bee9d0
                        */
                  if (*(long *)(param_1 + 0x78) != 0) {
                    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                              (*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x58),0);
                    if (*(long *)(param_1 + 0x78) != 0) {
                      Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                                (*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x38),0);
                      if (*(long *)(param_1 + 0x78) != 0) {
                        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                                  (*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x40),0);
                        if (*(long *)(param_1 + 0x78) != 0) {
                          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                                    (*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x48),0);
                          if (*(long *)(param_1 + 0x78) != 0) {
                            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                                      (*(long *)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x50),
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

