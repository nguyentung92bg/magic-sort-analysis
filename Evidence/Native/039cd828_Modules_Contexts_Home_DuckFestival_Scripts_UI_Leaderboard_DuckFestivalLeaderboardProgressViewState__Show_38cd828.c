/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardProgressViewState$$Show
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardProgressViewState__Show (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardProgressViewState_o* __this, bool shouldForceShowIncreaseProgressAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardProgressViewState$$Show
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardProgressViewState__Show
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardProgressViewState_o*
   __this, bool shouldForceShowIncreaseProgressAnimation, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardProgressViewState__Show_38cd828
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000005c34b7e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c34b7e = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0),
     puVar1 = PTR_DAT_0576aae0, lVar6 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       ((lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0 &&
        (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar6,*(undefined8 *)PTR_DAT_0577fc18), lVar6 != 0)))) {
      iVar2 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetMyPlayerRank_1b9690c
                        (lVar6,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__Initialize_38c9a30
                  (*(long *)(param_1 + 0x18),iVar2);
        iVar3 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetMyPlayerLastSeenRank_1b9848c
                          (lVar6,0);
        iVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetMyPlayerLastSeenLeaderboardProgress_1b984b0
                          (lVar6,0);
        iVar5 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetProgress_1b984d4
                          (lVar6,0);
        if (((iVar2 < iVar3) && ((param_2 & 1) != 0)) && (iVar4 < iVar5)) {
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_039cd970;
          Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__StartRankUpAnimationCall_38cacd8
                    (*(long *)(param_1 + 0x18),iVar2,iVar3,iVar4,iVar5);
        }
        Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__SetMyPlayerLastSeenRank_1b984f8
                  (lVar6,iVar2,0);
        lVar7 = *(long *)(lVar6 + 0x10);
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
          *(int *)(*(long *)(lVar7 + 0x10) + 0x68) = iVar2;
          *(undefined2 *)(lVar7 + 0x30) = 0x101;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(lVar6,iVar2,0);
      }
    }
  }
LAB_039cd970:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

