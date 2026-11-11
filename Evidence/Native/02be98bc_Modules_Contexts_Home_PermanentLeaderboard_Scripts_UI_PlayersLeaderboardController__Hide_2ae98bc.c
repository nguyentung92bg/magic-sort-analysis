/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PlayersLeaderboardController$$Hide
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Hide (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PlayersLeaderboardController$$Hide
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Hide
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Hide_2ae98bc
               (long param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__Hide_2aef998
              ();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

