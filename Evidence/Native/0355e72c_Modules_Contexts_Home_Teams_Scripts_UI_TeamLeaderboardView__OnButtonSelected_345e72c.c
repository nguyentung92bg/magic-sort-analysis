/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardView$$OnButtonSelected
void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__OnButtonSelected (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardView$$OnButtonSelected
   void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__OnButtonSelected
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__OnButtonSelected_345e72c
               (long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
                    /* try { // try from 0355e72c to 0365e72f has its CatchHandler @ 0355e738 */
                    /* try { // try from 0355e730 to 0365e73b has its CatchHandler @ 0355e480 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0355e72c with catch @ 0355e738
                        */
  if ((bRam0000000005c3261e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05812a38);
    bRam0000000005c3261e = 1;
  }
  uVar1 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_1 + 0x78),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  plVar2 = (long *)thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05812a38);
  if (plVar2 != (long *)0x0) {
    Modules_Contexts_Home_Teams_Scripts_UI_Commands_ShowTeamCommand___ctor_2f021e8(plVar2,uVar3,0,0)
    ;
                    /* WARNING: Could not recover jumptable at 0x0355e7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

