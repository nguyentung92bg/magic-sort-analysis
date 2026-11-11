/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardViewAdapter$$GetView
Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter__GetView (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardViewAdapter$$GetView
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o*
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter__GetView
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter_o*
   __this, int32_t index, const MethodInfo* method); */

long Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter__GetView_2af162c
               (long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
    if ((lVar2 != 0) && (lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar2,0), lVar3 != 0)
       ) {
      UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

