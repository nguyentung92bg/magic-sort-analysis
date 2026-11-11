/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SelectFirstOpenDailyDateView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SelectFirstOpenDailyDateView (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SelectFirstOpenDailyDateView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SelectFirstOpenDailyDateView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SelectFirstOpenDailyDateView_4106c2c
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c3aba6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0575feb0);
    bRam0000000005c3aba6 = 1;
  }
  uStack_38 = *(undefined8 *)(param_2 + 8);
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar3 = System_DateTime__get_Day_2100110(&uStack_38,0);
  puVar2 = PTR_DAT_0575feb0;
  if (lVar5 != 0) {
    uVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar5,iVar3 + -1,*(undefined8 *)PTR_DAT_0575feb0);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    FUN_012d0d74();
    uStack_38 = *(undefined8 *)(param_2 + 8);
    lVar5 = *(long *)(param_2 + 0x10);
    iVar3 = System_DateTime__get_Day_2100110(&uStack_38,0);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      uStack_38 = *(undefined8 *)(param_2 + 8);
      lVar5 = lVar5 + (long)(int)(iVar3 - 1U) * 0x10;
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      uVar1 = *(undefined8 *)(lVar5 + 0x28);
      lVar5 = *(long *)(param_1 + 0x18);
      iVar3 = System_DateTime__get_Day_2100110(&uStack_38,0);
      if ((lVar5 != 0) &&
         (lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar5,iVar3 + -1,*(undefined8 *)puVar2), lVar5 != 0)) {
        Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetSelectedView_3e1f940(lVar5,0);
        Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyPlayButtonView_4106aec
                  (param_1,uVar4,uVar1);
        if (*(long *)(param_1 + 0x30) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x78) = *(undefined8 *)(param_2 + 8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

