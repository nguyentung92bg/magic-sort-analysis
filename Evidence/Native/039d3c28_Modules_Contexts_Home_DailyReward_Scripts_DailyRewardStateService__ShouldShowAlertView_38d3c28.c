/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardStateService$$ShouldShowAlertView
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldShowAlertView (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardStateService$$ShouldShowAlertView
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldShowAlertView
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldShowAlertView_38d3c28
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
                    /* try { // try from 039d3c28 to 03ad3c37 has its CatchHandler @ 039d3c38 */
  iVar2 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__GetEventState_38d4d24()
  ;
                    /* catch() { ... } // from try @ 039d3b40 with catch @ 039d3c38
                       catch() { ... } // from try @ 039d3b78 with catch @ 039d3c38
                       catch() { ... } // from try @ 039d3ba4 with catch @ 039d3c38
                       catch() { ... } // from try @ 039d3c28 with catch @ 039d3c38 */
  if (iVar2 == 2) {
                    /* try { // try from 039d3c3c to 03ad3c3f has its CatchHandler @ 039d3c48 */
                    /* try { // try from 039d3c40 to 03ad3c4b has its CatchHandler @ 039d3a6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039d3c3c with catch @ 039d3c48
                        */
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(long *)(lVar3 + 0x38) == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

