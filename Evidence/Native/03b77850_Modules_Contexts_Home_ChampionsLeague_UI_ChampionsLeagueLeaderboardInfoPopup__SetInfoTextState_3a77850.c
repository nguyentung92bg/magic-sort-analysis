/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardInfoPopup$$SetInfoTextState
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInfoPopup__SetInfoTextState (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInfoPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardInfoPopup$$SetInfoTextState
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInfoPopup__SetInfoTextState
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInfoPopup_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardInfoPopup__SetInfoTextState_3a77850
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c35aae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0580bde0);
    FUN_012d0dc8(PTR_DAT_05767f98);
    bRam0000000005c35aae = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) &&
     (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_057c2940), lVar6 != 0)) {
    iVar4 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetCurrentElo_3b2d6d0
                      (lVar6,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar7 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x30),0);
      puVar3 = PTR_DAT_0580bde0;
      puVar2 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_057bc5e8;
      if (lVar7 != 0) {
        if (iVar4 < 1) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar7,0);
          return;
        }
        UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
        uVar5 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetDemotionCountInCurrentElo_3b2dd64
                          (lVar6,0);
        uVar8 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetEloLocalizationKey_3b23678
                          (lVar6,iVar4 + -1,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        lVar6 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900(uVar8,0);
        plVar11 = *(long **)(param_1 + 0x38);
        plVar9 = (long *)FUN_012d0e38(*(undefined8 *)puVar3,2);
        uStack_44 = uVar5;
        lVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_44);
        if (plVar9 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar10 = thunk_FUN_01320d5c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_03b77a9c:
            uVar8 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
            FUN_012d0eb8(uVar8,0);
          }
          if ((int)plVar9[3] != 0) {
            plVar9[4] = lVar7;
            FUN_012d0d74(plVar9 + 4,lVar7);
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_01320d5c(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
            goto LAB_03b77a9c;
            puVar1 = PTR_DAT_05767f98;
            if (1 < *(uint *)(plVar9 + 3)) {
              plVar9[5] = lVar6;
              FUN_012d0d74(plVar9 + 5,lVar6);
              uVar8 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de29a0
                                (*(undefined8 *)puVar1,plVar9,0);
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 0x558))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x560));
                return;
              }
              goto LAB_03b77a94;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
      }
    }
  }
LAB_03b77a94:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

