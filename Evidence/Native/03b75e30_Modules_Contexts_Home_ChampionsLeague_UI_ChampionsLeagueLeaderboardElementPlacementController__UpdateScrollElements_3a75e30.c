/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$UpdateScrollElements
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__UpdateScrollElements (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o* __this, int32_t newRankIndex, int32_t currentRankIndex, int32_t rankDelta, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementPlacementController$$UpdateScrollElements
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__UpdateScrollElements
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController_o*
   __this, int32_t newRankIndex, int32_t currentRankIndex, int32_t rankDelta, const MethodInfo*
   method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementPlacementController__UpdateScrollElements_3a75e30
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  
  if (*(long *)(param_4 + 0x20) != 0) {
    uVar3 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetScrollElementAt_4007624
                      (*(long *)(param_4 + 0x20),param_6,0);
    if (*(long *)(param_4 + 0x20) != 0) {
      Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__RemoveElementFromScroll_40074a4
                (*(long *)(param_4 + 0x20),param_6,0);
      if (*(long *)(param_4 + 0x20) != 0) {
        Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__InsertElementToScroll_40074fc
                  (*(long *)(param_4 + 0x20),param_5,uVar3,0);
        if ((bRam0000000005c35a9d & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05793f20);
          bRam0000000005c35a9d = 1;
        }
        puVar1 = PTR_DAT_05793f20;
        lVar4 = *(long *)(param_4 + 0x20);
        if (lVar4 != 0) {
          iVar6 = 0;
          while( true ) {
            iVar2 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetScrollElementsCount_40076cc
                              (lVar4,0);
            if (iVar2 <= iVar6) {
              return;
            }
            if (*(long *)(param_4 + 0x20) == 0) break;
            lVar4 = Modules_Infrastructure_UI_Common_Scripts_Scroll_BasicScrollAdapter__GetScrollElementAt_4007624
                              (*(long *)(param_4 + 0x20),iVar6,0);
            if ((*(long *)(param_4 + 0x58) == 0) ||
               (uVar7 = System_Collections_Generic_List_Vector3___get_Item_2275a94
                                  (*(long *)(param_4 + 0x58),iVar6,*(undefined8 *)puVar1),
               lVar4 == 0)) break;
            *(undefined4 *)(lVar4 + 0x10) = uVar7;
            *(float *)(lVar4 + 0x14) = param_2;
            *(float *)(lVar4 + 0x18) = param_3;
            if (*(long *)(param_4 + 0x58) == 0) break;
            fVar8 = (float)System_Collections_Generic_List_Vector3___get_Item_2275a94
                                     (*(long *)(param_4 + 0x58),iVar6,*(undefined8 *)puVar1);
            lVar5 = *(long *)(param_4 + 0x18);
            if (lVar5 == 0) break;
            param_2 = param_2 + *(float *)(lVar5 + 0x54);
            param_3 = param_3 + *(float *)(lVar5 + 0x58);
            UnityEngine_Bounds__set_center_383763c(fVar8 + *(float *)(lVar5 + 0x50),lVar4 + 0x1c,0);
            lVar4 = *(long *)(param_4 + 0x20);
            iVar6 = iVar6 + 1;
            if (lVar4 == 0) break;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

