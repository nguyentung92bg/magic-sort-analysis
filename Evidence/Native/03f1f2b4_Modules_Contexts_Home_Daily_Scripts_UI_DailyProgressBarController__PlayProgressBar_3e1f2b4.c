/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$PlayProgressBar
DG_Tweening_Sequence_o* Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBar (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t currentDay, int32_t targetDay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$PlayProgressBar
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBar
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t currentDay,
   int32_t targetDay, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBar_3e1f2b4
          (long param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_DAT_057815e0;
                    /* try { // try from 03f1f2c4 to 0401f2c7 has its CatchHandler @ 03f1f4f4 */
                    /* try { // try from 03f1f2c8 to 0401f2db has its CatchHandler @ 03f1f5c8 */
                    /* try { // try from 03f1f2e4 to 0401f2e7 has its CatchHandler @ 03f1f5c4 */
  if ((bRam0000000005c3810a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* try { // try from 03f1f2f8 to 0401f33b has its CatchHandler @ 03f1f75c */
    FUN_012d0dc8(PTR_DAT_057c6e90);
    FUN_012d0dc8(PTR_DAT_0578d6e8);
    FUN_012d0dc8(PTR_DAT_057def60);
    FUN_012d0dc8(PTR_DAT_0581aa00);
    bRam0000000005c3810a = 1;
  }
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
                    /* try { // try from 03f1f34c to 0401f37b has its CatchHandler @ 03f1f5d0 */
  if (0x1f < (int)param_2) {
    param_2 = 0x20;
  }
  if (0x1f < (int)param_3) {
    param_3 = 0x20;
  }
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarToDay_3e1edb8
            (param_1,param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  uVar8 = Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition_3e212d0
                    (param_1,param_3);
  fVar6 = (float)Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition_3e212d0
                           (param_1,param_3);
                    /* try { // try from 03f1f390 to 0401f393 has its CatchHandler @ 03f1f500 */
  fVar7 = (float)Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition_3e212d0
                           (param_1,0);
                    /* try { // try from 03f1f3a4 to 0401f3a7 has its CatchHandler @ 03f1f4fc */
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBarSize_3e215d8
                    ((fVar6 - fVar7) + 1.0,param_1);
                    /* try { // try from 03f1f3b8 to 0401f3bf has its CatchHandler @ 03f1f4f8 */
  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBarPivot_3e21710
                    (uVar8,param_1);
                    /* try { // try from 03f1f3d4 to 0401f3db has its CatchHandler @ 03f1f4d4 */
  DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
                    /* try { // try from 03f1f3e8 to 0401f407 has its CatchHandler @ 03f1f4e4 */
  uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__PlayProgressBarPivotText_3e2179c
                    (param_1,param_3);
  DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar3,uVar4,0);
  puVar2 = PTR_DAT_057c6e90;
  puVar1 = PTR_DAT_0578d6e8;
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_58,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_0581aa00);
    while( true ) {
                    /* try { // try from 03f1f430 to 0401f433 has its CatchHandler @ 03f1f504 */
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_58,*(undefined8 *)puVar1);
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 03f1f47c to 0401f4bf has its CatchHandler @ 03f1f4d8 */
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_58,*(undefined8 *)puVar2);
        return uVar3;
      }
      if (lStack_48 == 0) break;
      if (((param_3 == *(uint *)(lStack_48 + 0x54)) && (*(char *)(lStack_48 + 0x58) == '\0')) &&
         (*(char *)(lStack_48 + 0x50) == '\0')) {
        uVar4 = Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__UnlockStepSequence_3e218dc
                          (lStack_48);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

