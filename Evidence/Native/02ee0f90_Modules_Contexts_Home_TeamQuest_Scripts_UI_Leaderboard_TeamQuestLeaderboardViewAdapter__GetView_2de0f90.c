/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$GetView
Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__GetView (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard.TeamQuestLeaderboardViewAdapter$$GetView
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o*
   Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__GetView
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

long Modules_Contexts_Home_TeamQuest_Scripts_UI_Leaderboard_TeamQuestLeaderboardViewAdapter__GetView_2de0f90
               (long param_1,undefined4 param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c2fd4a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575db98);
    FUN_012d0dc8(PTR_DAT_057fe368);
    FUN_012d0dc8(PTR_DAT_058103e0);
    bRam0000000005c2fd4a = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar2 != 0)) {
    plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar2,param_2,*(undefined8 *)PTR_DAT_0575db98);
    if (plVar3 == (long *)0x0) {
LAB_02ee10b4:
      FUN_0103b554();
      uVar6 = System_Object__GetType_23e0654(plVar3,0);
      uVar5 = thunk_FUN_0136d790(PTR_DAT_05801b50);
      uVar6 = System_String__Format_1ec10a8(uVar5,uVar6,0);
      thunk_FUN_0136d790(PTR_DAT_057a2cc8);
      uVar5 = thunk_FUN_01320e48();
      FUN_0103b554();
      System_ArgumentException___ctor_2124114(uVar5,uVar6,0);
      uVar6 = thunk_FUN_0136d790(PTR_DAT_057e8f10);
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar5,uVar6);
    }
    lVar2 = *plVar3;
    bVar1 = *(byte *)(*(long *)PTR_DAT_058103e0 + 300);
    if ((*(byte *)(lVar2 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_058103e0)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_057fe368 + 300);
      if ((*(byte *)(lVar2 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057fe368))
      goto LAB_02ee10b4;
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar3 + 0x1c8))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x1d0));
      if ((lVar2 != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar2,0), lVar4 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

