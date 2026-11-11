/* IL2CPP: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$InsertToModelList
void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__InsertToModelList (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o* __this, int32_t index, Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewModel_o* playerViewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard.DuckFestivalLeaderboardViewAdapter$$InsertToModelList
   void 
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__InsertToModelList
   (Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter_o*
   __this, int32_t index,
   Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewModel_o*
   playerViewModel, const MethodInfo* method); */

void Modules_Contexts_Home_DuckFestival_Scripts_UI_Leaderboard_DuckFestivalLeaderboardViewAdapter__InsertToModelList_38cc418
               (long param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar4;
  undefined8 unaff_x22;
  
  if ((bRam0000000005c34b8a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781210);
    bRam0000000005c34b8a = 1;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *(long *)PTR_DAT_05781210;
  uVar4 = *(uint *)(lVar2 + 0x18);
  if (uVar4 < param_2) {
    System_ThrowHelper__ThrowArgumentOutOfRangeException_26a4f04(0xd,0x1b,0);
    uVar4 = *(uint *)(lVar2 + 0x18);
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    if (uVar4 == *(uint *)(*(long *)(lVar2 + 0x10) + 0x18)) {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x60) + 8))
                (lVar2,uVar4 + 1);
      uVar4 = *(uint *)(lVar2 + 0x18);
    }
    if (uVar4 - param_2 != 0 && (int)param_2 <= (int)uVar4) {
      System_Array__Copy_26a6ec0
                (*(undefined8 *)(lVar2 + 0x10),param_2,*(undefined8 *)(lVar2 + 0x10),param_2 + 1,
                 uVar4 - param_2,0,in_x6,in_x7,unaff_x22);
    }
    lVar3 = *(long *)(lVar2 + 0x10);
    if (lVar3 != 0) {
      if (param_2 < *(uint *)(lVar3 + 0x18)) {
        puVar1 = (undefined8 *)(lVar3 + (long)(int)param_2 * 8 + 0x20);
        *puVar1 = param_3;
        FUN_012d0d74(puVar1,param_3);
        *(ulong *)(lVar2 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(lVar2 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

