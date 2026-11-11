/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardViewAdapter$$Reverse
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter__Reverse (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardViewAdapter$$Reverse
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter__Reverse
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardViewAdapter__Reverse_2af180c
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c2ebb3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581a308);
    bRam0000000005c2ebb3 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = *(long *)PTR_DAT_0581a308;
    uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70) + 8))();
                    /* WARNING: Could not recover jumptable at 0x022fe4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x168) + 8))(lVar2,0,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

