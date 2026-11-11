/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$GetElementSizeByIndex
UnityEngine_Vector3_o Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__GetElementSizeByIndex (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$GetElementSizeByIndex
   UnityEngine_Vector3_o
   Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__GetElementSizeByIndex
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__GetElementSizeByIndex_2de0ef8
          (long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((bRam0000000005c2fd49 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ed4e0);
    FUN_012d0dc8(PTR_DAT_0575db98);
    bRam0000000005c2fd49 = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar2 != 0)) {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar2,param_2,*(undefined8 *)PTR_DAT_0575db98);
    if ((lVar2 != 0) && (uVar3 = System_Object__GetType_23e0654(lVar2,0), lVar4 != 0)) {
      uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057ed4e0 + 0x20) + 0xc0) +
                                    0xa8) + 8))();
      if ((int)uVar1 < 0) {
        System_ThrowHelper__ThrowKeyNotFoundException_26a54c0(uVar3,0);
        uVar5 = 0;
      }
      else {
        lVar2 = *(long *)(lVar4 + 0x18);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        uVar5 = *(undefined4 *)(lVar2 + (long)(int)uVar1 * 0x20 + 0x30);
      }
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

