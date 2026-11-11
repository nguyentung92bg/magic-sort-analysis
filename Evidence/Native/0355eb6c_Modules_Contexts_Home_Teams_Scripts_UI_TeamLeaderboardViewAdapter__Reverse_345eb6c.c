/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$Reverse
void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__Reverse (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$Reverse
   void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__Reverse
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__Reverse_345eb6c
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c32623 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f4d0);
    bRam0000000005c32623 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = *(long *)PTR_DAT_0575f4d0;
    uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70) + 8))();
                    /* WARNING: Could not recover jumptable at 0x022fe4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x168) + 8))(lVar2,0,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

