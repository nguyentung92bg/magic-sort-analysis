/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetBackUnselectedView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetBackUnselectedView (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetBackUnselectedView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetBackUnselectedView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetBackUnselectedView_3e1fb34
               (long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_0580b9d0;
                    /* catch() { ... } // from try @ 03f1f9a4 with catch @ 03f1fb34 */
  uVar1 = *(ulong *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
                    /* catch() { ... } // from try @ 03f1f990 with catch @ 03f1fb38
                       catch() { ... } // from try @ 03f1fb08 with catch @ 03f1fb38 */
  if ((bRam0000000005c380fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c380fa = 1;
  }
  uStack_3c = 0;
  uStack_38 = uVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uStack_3c = System_DateTime__get_Day_2100110(&uStack_38,0);
  uVar3 = System_Int32__ToString_26c9768(&uStack_3c,0);
  Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetAllTexts_3e1f76c(param_1,uVar3);
  switch(uVar1 & 0xffffffff) {
  case 0:
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetClaimedView_3e1f7d8(param_1);
    break;
  case 1:
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetUnclaimedView_3e1f0d4(param_1);
    break;
  case 2:
  case 3:
  case 4:
    Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetUpcomingView_3e1f88c(param_1);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  *(bool *)(*(long *)(param_1 + 0x18) + 0x1c) = (int)uVar1 == 1;
  return;
}

