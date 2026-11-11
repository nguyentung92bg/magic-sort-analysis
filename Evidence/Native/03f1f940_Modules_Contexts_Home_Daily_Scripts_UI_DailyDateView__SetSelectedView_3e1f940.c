/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetSelectedView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetSelectedView (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetSelectedView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetSelectedView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetSelectedView_3e1f940(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetClaimedView_3e1f7d8(param_1);
  }
  else if ((iVar1 == 4) || (iVar1 == 1)) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetUnlockedView_3e1f9a4(param_1);
  }
  else {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetLockedView_3e1fa58(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 03f1f990 to 0401f99f has its CatchHandler @ 03f1fb38 */
    *(bool *)(*(long *)(param_1 + 0x18) + 0x1c) = *(int *)(param_1 + 0x48) == 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

