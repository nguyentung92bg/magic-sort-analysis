/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetDailyDateViews
void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyDateViews (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o viewModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$SetDailyDateViews
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyDateViews
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this,
   Modules_Contexts_Home_Daily_Scripts_DailyViewModel_o viewModels, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__SetDailyDateViews_4106e30
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000005c3aba8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575feb0);
    bRam0000000005c3aba8 = 1;
  }
  Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__ResetAllDailyDateViews_4106f60
            (param_1);
  puVar1 = PTR_DAT_0575feb0;
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    lVar5 = 0;
    uVar4 = 0;
    while( true ) {
      if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar4) {
        return;
      }
      if (*(long *)(param_1 + 0x18) == 0) break;
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),uVar4 & 0xffffffff,*(undefined8 *)puVar1);
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_04206f5c:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      if (lVar2 == 0) break;
      Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetDailyDateModel_3e1f668
                (lVar2,*(undefined8 *)(lVar3 + lVar5 + 0x20),*(undefined8 *)(lVar3 + lVar5 + 0x28),0
                );
      if (*(long *)(param_1 + 0x18) == 0) break;
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),uVar4 & 0xffffffff,*(undefined8 *)puVar1);
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_04206f5c;
      if (lVar2 == 0) break;
      Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetDailyDateView_3e1f678
                (lVar2,*(undefined8 *)(lVar3 + lVar5 + 0x20),*(undefined8 *)(lVar3 + lVar5 + 0x28),0
                );
      if (((*(long *)(param_1 + 0x18) == 0) ||
          (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (*(long *)(param_1 + 0x18),uVar4 & 0xffffffff,*(undefined8 *)puVar1),
          lVar2 == 0)) ||
         (lVar2 = UnityEngine_Component__get_gameObject_408b480(lVar2,0), lVar2 == 0)) break;
      UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
      lVar2 = *(long *)(param_2 + 0x10);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
      if (lVar2 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

