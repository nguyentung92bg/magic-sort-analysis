/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardController$$Deinitialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__Deinitialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World.WorldLeaderboardController$$Deinitialize
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__Deinitialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__Deinitialize_2aef598
               (long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000005c2ebaa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d7a10);
    FUN_012d0dc8(PTR_DAT_05818460);
    bRam0000000005c2ebaa = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
              (*(long *)(param_1 + 0x30),0);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Dispose_400d49c
              (*(long *)(param_1 + 0x68),0);
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x58) + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x031eaa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05818460 + 0x20) + 0xc0) + 0x40) +
                  8))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

