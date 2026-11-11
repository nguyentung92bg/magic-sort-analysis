/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$ResetAllDailyDateViews
void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__ResetAllDailyDateViews (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$ResetAllDailyDateViews
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__ResetAllDailyDateViews
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__ResetAllDailyDateViews_4106f60
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c3aba9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aef60);
    FUN_012d0dc8(PTR_DAT_0575feb0);
    bRam0000000005c3aba9 = 1;
  }
  puVar1 = PTR_DAT_0575feb0;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__ToggleDailyDateView_3e1fb0c(lVar2,0,0);
      lVar2 = *(long *)(param_1 + 0x18);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

