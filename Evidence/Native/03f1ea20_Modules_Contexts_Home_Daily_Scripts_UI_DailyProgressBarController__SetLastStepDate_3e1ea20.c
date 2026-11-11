/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$SetLastStepDate
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetLastStepDate (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t maxProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$SetLastStepDate
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetLastStepDate
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t
   maxProgress, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetLastStepDate_3e1ea20
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
                    /* try { // try from 03f1ea20 to 0401eab7 has its CatchHandler @ 03f1ea20
                       catch() { ... } // from try @ 03f1ea20 with catch @ 03f1ea20
                       catch() { ... } // from try @ 03f1eb80 with catch @ 03f1ea20
                       catch() { ... } // from try @ 03f1ec0c with catch @ 03f1ea20
                       catch() { ... } // from try @ 03f1ec50 with catch @ 03f1ea20
                       catch() { ... } // from try @ 03f1ec88 with catch @ 03f1ea20 */
  uStack_24 = param_2;
  if ((bRam0000000005c3810d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793300);
    FUN_012d0dc8(PTR_DAT_057c5200);
    bRam0000000005c3810d = 1;
  }
  puVar1 = PTR_DAT_057c5200;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar2,*(int *)(lVar2 + 0x18) + -1,*(undefined8 *)PTR_DAT_057c5200);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x54) = param_2;
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0) {
        lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar2,*(int *)(lVar2 + 0x18) + -1,*(undefined8 *)puVar1);
        uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
        if (lVar2 != 0) {
                    /* try { // try from 03f1eab8 to 0401eae3 has its CatchHandler @ 03f1ec1c */
          Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetDateText_3e21b7c
                    (lVar2,uVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

