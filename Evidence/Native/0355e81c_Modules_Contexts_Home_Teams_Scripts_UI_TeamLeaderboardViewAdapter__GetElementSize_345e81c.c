/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$GetElementSize
UnityEngine_Vector3_o Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetElementSize (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$GetElementSize
   UnityEngine_Vector3_o
   Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetElementSize
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetElementSize_345e81c
          (long param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x1c8))(plVar1,0,*(undefined8 *)(*plVar1 + 0x1d0));
    if (plVar1 != (long *)0x0) {
      auVar2 = Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__get_Size_345e2f4();
      uVar3 = auVar2._8_8_;
      (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      auVar2._8_8_ = uVar3;
      return auVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

