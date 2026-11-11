/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$RemoveInsertUserViewModelAt
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__RemoveInsertUserViewModelAt (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o* __this, int32_t currentRankIndex, int32_t newRankIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardElementPlacementController$$RemoveInsertUserViewModelAt
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__RemoveInsertUserViewModelAt
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController_o*
   __this, int32_t currentRankIndex, int32_t newRankIndex, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardElementPlacementController__RemoveInsertUserViewModelAt_38cc074
               (long param_1,undefined4 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar5;
  undefined8 unaff_x22;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__GetViewModelAt_38cc368
                      ();
    if (*(long *)(param_1 + 0x28) != 0) {
      Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__RemoveFromModelList_38cc3c0
                (*(long *)(param_1 + 0x28),param_2);
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 != 0) {
        if ((bRam0000000005c34b8a & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_05781210);
          bRam0000000005c34b8a = 1;
        }
        lVar3 = *(long *)(lVar3 + 0x40);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar4 = *(long *)PTR_DAT_05781210;
        uVar5 = *(uint *)(lVar3 + 0x18);
        if (uVar5 < param_3) {
          System_ThrowHelper__ThrowArgumentOutOfRangeException_26a4f04(0xd,0x1b,0);
          uVar5 = *(uint *)(lVar3 + 0x18);
        }
        if (*(long *)(lVar3 + 0x10) != 0) {
          if (uVar5 == *(uint *)(*(long *)(lVar3 + 0x10) + 0x18)) {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x60) + 8))
                      (lVar3,uVar5 + 1);
            uVar5 = *(uint *)(lVar3 + 0x18);
          }
          if (uVar5 - param_3 != 0 && (int)param_3 <= (int)uVar5) {
            System_Array__Copy_26a6ec0
                      (*(undefined8 *)(lVar3 + 0x10),param_3,*(undefined8 *)(lVar3 + 0x10),
                       param_3 + 1,uVar5 - param_3,0,in_x6,in_x7,unaff_x22);
          }
          lVar4 = *(long *)(lVar3 + 0x10);
          if (lVar4 != 0) {
            if (param_3 < *(uint *)(lVar4 + 0x18)) {
              puVar1 = (undefined8 *)(lVar4 + (long)(int)param_3 * 8 + 0x20);
              *puVar1 = uVar2;
              FUN_012d0d74(puVar1,uVar2);
              *(ulong *)(lVar3 + 0x18) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar3 + 0x18) + 1);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
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

