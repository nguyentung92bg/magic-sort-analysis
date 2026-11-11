/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$SelectFirstOpenDailyDateView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SelectFirstOpenDailyDateView (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$SelectFirstOpenDailyDateView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SelectFirstOpenDailyDateView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__SelectFirstOpenDailyDateView_3e1e420
               (long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(char *)((long)param_2 + 2) == '\0') {
    lVar3 = param_2[2];
    if (lVar3 == 0) {
LAB_03f1e4b8:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (long)((ulong)uVar1 << 0x20)) {
      uVar2 = 0;
      piVar4 = (int *)(lVar3 + 0x20);
      do {
        if (uVar1 == uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        if ((*piVar4 != 3) && (*piVar4 != 0)) {
          uStack_48 = param_2[1];
          uStack_50 = *param_2;
          uStack_38 = param_2[3];
          uStack_40 = param_2[2];
          uStack_30 = uStack_50;
          uStack_28 = uStack_48;
          uStack_20 = uStack_40;
          uStack_18 = uStack_38;
          if (*(long *)(param_1 + 0x20) != 0) {
            Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SelectFirstOpenDailyDateView_4106c2c
                      (*(long *)(param_1 + 0x20),&uStack_50,0);
            return;
          }
          goto LAB_03f1e4b8;
        }
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 4;
      } while ((long)uVar2 < (long)(int)uVar1);
    }
  }
  return;
}

