/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardClaimViewState$$Show
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState__Show (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardClaimViewState$$Show
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState__Show
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardClaimViewState__Show_38c9518
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000005c34b5e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c6fb8);
    bRam0000000005c34b5e = 1;
  }
  uStack_40 = 0;
                    /* try { // try from 039c9578 to 03ac9587 has its CatchHandler @ 039c9588 */
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* catch() { ... } // from try @ 039c9490 with catch @ 039c9588
                       catch() { ... } // from try @ 039c94c8 with catch @ 039c9588
                       catch() { ... } // from try @ 039c94f4 with catch @ 039c9588
                       catch() { ... } // from try @ 039c9578 with catch @ 039c9588 */
                    /* try { // try from 039c958c to 03ac958f has its CatchHandler @ 039c9598 */
                    /* try { // try from 039c9590 to 03ac959b has its CatchHandler @ 039c93bc */
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
     puVar1 = PTR_DAT_0576aae0, lVar5 != 0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039c958c with catch @ 039c9598
                        */
    UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       ((lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0 &&
        (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar5,*(undefined8 *)PTR_DAT_0577fc18), puVar2 = PTR_DAT_057db748,
        puVar1 = PTR_DAT_057c6fb8, lVar5 != 0)))) {
      uVar3 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetMyPlayerRank_1b9690c
                        (lVar5,0);
      plVar9 = *(long **)(param_1 + 0x20);
      uStack_84 = uVar3;
      uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_84);
      uVar6 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar6,0);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x558))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x560));
        uVar7 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__TryGetLeaderboardRewards_1b9823c
                          (lVar5,(undefined8 *)(param_1 + 0x60),0);
        if ((uVar7 & 1) == 0) {
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar8 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x48),0),
             lVar8 == 0)) goto LAB_039c9848;
          UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
          if ((*(long *)(param_1 + 0x50) == 0) ||
             (lVar8 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
             lVar8 == 0)) goto LAB_039c9848;
          UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
          if ((*(long *)(param_1 + 0x58) == 0) ||
             (lVar8 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x58),0),
             lVar8 == 0)) goto LAB_039c9848;
          UnityEngine_GameObject__SetActive_408e318(lVar8,0,0);
        }
        else {
          if ((*(long *)(param_1 + 0x50) == 0) ||
             (lVar8 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
             lVar8 == 0)) goto LAB_039c9848;
          UnityEngine_GameObject__SetActive_408e318(lVar8,0,0);
          if ((*(long *)(param_1 + 0x58) == 0) ||
             (lVar8 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x58),0),
             lVar8 == 0)) goto LAB_039c9848;
          UnityEngine_GameObject__SetActive_408e318(lVar8,1,0);
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar8 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x48),0),
             lVar8 == 0)) goto LAB_039c9848;
          UnityEngine_GameObject__SetActive_408e318(lVar8,0,0);
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_039c9848;
          Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementRewardView__Show_38c984c
                    (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x60));
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__Initialize_38c9a30
                    (*(long *)(param_1 + 0x18),uVar3);
          uStack_40 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentStartTime_1b985b8
                            (lVar5,0);
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingSeconds_1b96ad4
                            (lVar5,0);
          uStack_80 = CONCAT44(uVar4,(undefined4)uStack_80);
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTotalUserCount_1b98568
                            (lVar5,0);
          uStack_78 = CONCAT44(uStack_78._4_4_,uVar4);
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRealUserCount_1b985dc
                            (lVar5,0);
          uStack_78 = CONCAT44(uVar4,(undefined4)uStack_78);
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetBotUserCount_1b98738
                            (lVar5,0);
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetMyPlayerRank_1b9690c
                            (lVar5,0);
          uStack_70 = CONCAT44(uVar4,(undefined4)uStack_70);
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetProgress_1b984d4
                            (lVar5,0);
          uStack_68 = CONCAT44(uStack_68._4_4_,uVar4);
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRewardStage_1b988b4
                            (lVar5,0);
          uStack_68 = CONCAT44(uVar4,(undefined4)uStack_68);
          uStack_60 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetAvgProgress_1b9894c
                                (lVar5,0);
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetElo_1b98970
                            (lVar5,0);
          uStack_58 = CONCAT44(uStack_58._4_4_,uVar4);
          uStack_48 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetLeaderboardId_1b98a68
                                (lVar5,0);
          FUN_012d0d74(&uStack_48);
          uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetPreviousElo_1b98a80
                            (lVar5,0);
          uStack_40 = CONCAT44(uVar4,(undefined4)uStack_40);
          func_0x01037ce0(param_1 + 0x68,&uStack_80,0x48);
          FUN_012d0d74(param_1 + 0x98,0);
          return;
        }
      }
    }
  }
LAB_039c9848:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

