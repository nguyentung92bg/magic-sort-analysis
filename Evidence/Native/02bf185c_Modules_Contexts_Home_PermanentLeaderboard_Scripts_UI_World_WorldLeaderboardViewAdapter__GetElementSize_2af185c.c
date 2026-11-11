/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardViewAdapter$$GetElementSize
UnityEngine_Vector3_o Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter__GetElementSize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardViewAdapter$$GetElementSize
   UnityEngine_Vector3_o
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter__GetElementSize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter__GetElementSize_2af185c
          (long param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
    if (plVar1 != (long *)0x0) {
      auVar2 = Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__get_Size_2aee854
                         ();
      uVar3 = auVar2._8_8_;
      (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      auVar2._8_8_ = uVar3;
      return auVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

