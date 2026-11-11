/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardClaimViewState$$Show
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardClaimViewState__Show (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardClaimViewState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardClaimViewState$$Show
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardClaimViewState__Show
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardClaimViewState_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardClaimViewState__Show_3a7375c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000005c35a91 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c6fb8);
    bRam0000000005c35a91 = 1;
  }
  uStack_38 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0),
     puVar1 = PTR_DAT_0576aae0, lVar4 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       ((lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0 &&
        (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar4,*(undefined8 *)PTR_DAT_057c2940), puVar2 = PTR_DAT_057db748,
        puVar1 = PTR_DAT_057c6fb8, lVar4 != 0)))) {
      uVar3 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerRank_3b2363c
                        (lVar4,0);
      plVar7 = *(long **)(param_1 + 0x20);
      uStack_3c = uVar3;
      uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_3c);
      uVar5 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar5,0);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
        uVar6 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__TryGrantRewards_3b23464
                          (lVar4,&uStack_38,0);
        if ((uVar6 & 1) == 0) {
          if ((*(long *)(param_1 + 0x40) == 0) ||
             (lVar4 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x40),0),
             lVar4 == 0)) goto LAB_03b73980;
          UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0),
             lVar4 == 0)) goto LAB_03b73980;
          UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
          if ((*(long *)(param_1 + 0x50) == 0) ||
             (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
             lVar4 == 0)) goto LAB_03b73980;
          UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
        }
        else {
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0),
             lVar4 == 0)) goto LAB_03b73980;
          UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
          if ((*(long *)(param_1 + 0x50) == 0) ||
             (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
             lVar4 == 0)) goto LAB_03b73980;
          UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
          if ((*(long *)(param_1 + 0x40) == 0) ||
             (lVar4 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x40),0),
             lVar4 == 0)) goto LAB_03b73980;
          UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_03b73980;
          Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementRewardView__Show_3a73984
                    (*(long *)(param_1 + 0x28),uStack_38);
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__Initialize_3a73b54
                    (*(long *)(param_1 + 0x18),uVar3);
          return;
        }
      }
    }
  }
LAB_03b73980:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

