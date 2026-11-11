/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardInProgressViewState$$Show
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInProgressViewState__Show (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInProgressViewState_o* __this, bool shouldForceShowIncreaseProgressAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardInProgressViewState$$Show
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInProgressViewState__Show
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInProgressViewState_o*
   __this, bool shouldForceShowIncreaseProgressAnimation, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInProgressViewState__Show_3a77c64
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uStack_60;
  ulong uStack_58;
  ushort auStack_44 [2];
  
  if ((bRam0000000005c35ab1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057d2a48);
    FUN_012d0dc8(PTR_DAT_057c0428);
    FUN_012d0dc8(PTR_DAT_057c69a8);
    FUN_012d0dc8(PTR_DAT_057a1d68);
    bRam0000000005c35ab1 = 1;
  }
  auStack_44[0] = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar9 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0),
     puVar1 = PTR_DAT_0576aae0, lVar9 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar9,1,0);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       ((lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0 &&
        (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar9,*(undefined8 *)PTR_DAT_057c2940), lVar9 != 0)))) {
      uVar3 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerRank_3b2363c
                        (lVar9,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__Initialize_3a73b54
                  (*(long *)(param_1 + 0x18),uVar3);
        uVar2 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerLastSeenPromotionZoneState_3b2d794
                          (lVar9,0);
        auStack_44[0] = uVar2;
        uVar10 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerLastSeenRank_3b25990
                           (lVar9,0);
        uStack_58 = uVar10;
        uVar11 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerLastSeenScore_3b2d7d0
                           (lVar9,0);
        uStack_60 = uVar11;
        uVar4 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerPromotionZoneState_3b2d748
                          (lVar9,0);
        uVar5 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerScore_3b2d70c
                          (lVar9,0);
        if ((((uVar2 & 0xff) != 0) && ((uVar10 & 0xff) != 0)) && ((uVar11 & 0xff) != 0)) {
          uVar6 = System_Nullable_bool___get_Value_2034604
                            (auStack_44,*(undefined8 *)PTR_DAT_057a1d68);
          puVar1 = PTR_DAT_057c69a8;
          if (((uVar4 & (uVar6 ^ 0xffffffff) & 1) != 0) || ((param_2 & 1) != 0)) {
            lVar12 = *(long *)(param_1 + 0x18);
            uVar7 = System_Nullable_int___get_Value_203c3b0
                              (&uStack_58,*(undefined8 *)PTR_DAT_057c69a8);
            uVar8 = System_Nullable_int___get_Value_203c3b0(&uStack_60,*(undefined8 *)puVar1);
            if (lVar12 == 0) goto LAB_03b77e84;
            Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__StartRankUpAnimationCall_3a74ae4
                      (lVar12,uVar3,uVar7,uVar8,uVar5);
          }
        }
        Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__SetMyPlayerLastSeenPromotionZoneState_3b2d7b4
                  (lVar9,uVar4 & 1,0);
        Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__SetMyPlayerLastSeenRank_3b2d77c
                  (lVar9,uVar3,0);
        Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__SetMyPlayerLastSeenScore_3b2d7e8
                  (lVar9,uVar5,0);
        return;
      }
    }
  }
LAB_03b77e84:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

