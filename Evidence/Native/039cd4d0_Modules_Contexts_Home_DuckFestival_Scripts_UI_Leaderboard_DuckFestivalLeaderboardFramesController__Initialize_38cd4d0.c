/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardFramesController$$Initialize
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardFramesController__Initialize (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardFramesController_o* __this, System_Collections_Generic_List_DuckFestivalLeaderboardViewModel__o* viewModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardFramesController$$Initialize
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardFramesController__Initialize
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardFramesController_o*
   __this, System_Collections_Generic_List_DuckFestivalLeaderboardViewModel__o* viewModels, const
   MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardFramesController__Initialize_38cd4d0
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c34b7a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e6c38);
    bRam0000000005c34b7a = 1;
  }
  puVar1 = PTR_DAT_057e6c38;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (param_2,0,*(undefined8 *)PTR_DAT_057e6c38);
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(lVar2 + 0x40);
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_2,0,*(undefined8 *)puVar1);
      if ((lVar2 != 0) && (lVar3 != 0)) {
        Modules_Contexts_Home_UI_Common_Scripts_ProfileImageView__ShowOthersProfileImage_297fc40
                  (lVar3,uVar5,*(undefined8 *)(lVar2 + 0x48),0);
        lVar3 = *(long *)(param_1 + 0x20);
        lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_2,1,*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          uVar5 = *(undefined8 *)(lVar2 + 0x40);
          lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (param_2,1,*(undefined8 *)puVar1);
          if ((lVar2 != 0) && (lVar3 != 0)) {
            Modules_Contexts_Home_UI_Common_Scripts_ProfileImageView__ShowOthersProfileImage_297fc40
                      (lVar3,uVar5,*(undefined8 *)(lVar2 + 0x48),0);
            lVar3 = *(long *)(param_1 + 0x28);
            lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (param_2,2,*(undefined8 *)puVar1);
            if (lVar2 != 0) {
              uVar5 = *(undefined8 *)(lVar2 + 0x40);
              lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (param_2,2,*(undefined8 *)puVar1);
              if ((lVar2 != 0) && (lVar3 != 0)) {
                Modules_Contexts_Home_UI_Common_Scripts_ProfileImageView__ShowOthersProfileImage_297fc40
                          (lVar3,uVar5,*(undefined8 *)(lVar2 + 0x48),0);
                plVar4 = *(long **)(param_1 + 0x30);
                lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (param_2,0,*(undefined8 *)puVar1);
                if ((lVar2 != 0) && (plVar4 != (long *)0x0)) {
                  (**(code **)(*plVar4 + 0x558))
                            (plVar4,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(*plVar4 + 0x560));
                  plVar4 = *(long **)(param_1 + 0x38);
                  lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (param_2,1,*(undefined8 *)puVar1);
                  if ((lVar2 != 0) && (plVar4 != (long *)0x0)) {
                    (**(code **)(*plVar4 + 0x558))
                              (plVar4,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(*plVar4 + 0x560)
                              );
                    plVar4 = *(long **)(param_1 + 0x40);
                    lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                      (param_2,2,*(undefined8 *)puVar1);
                    if ((lVar2 != 0) && (plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x039cd68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*plVar4 + 0x558))
                                (plVar4,*(undefined8 *)(lVar2 + 0x38),
                                 *(undefined8 *)(*plVar4 + 0x560));
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

