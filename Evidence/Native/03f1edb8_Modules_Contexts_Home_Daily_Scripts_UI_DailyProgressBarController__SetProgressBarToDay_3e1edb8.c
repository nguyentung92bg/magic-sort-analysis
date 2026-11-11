/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$SetProgressBarToDay
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarToDay (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t targetDay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$SetProgressBarToDay
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarToDay
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t targetDay,
   const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarToDay_3e1edb8
               (undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  int iStack_34;
  
  iStack_34 = param_4;
  if ((bRam0000000005c3810b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c6e90);
    FUN_012d0dc8(PTR_DAT_0578d6e8);
    FUN_012d0dc8(PTR_DAT_057def60);
    FUN_012d0dc8(PTR_DAT_0581aa00);
    bRam0000000005c3810b = 1;
  }
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  uVar9 = Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition_3e212d0
                    (param_3,param_4);
  if (*(long *)(param_3 + 0x30) != 0) {
    lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_3 + 0x30),0);
    if ((*(long *)(param_3 + 0x30) != 0) &&
       (lVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_3 + 0x30),0),
       lVar4 != 0)) {
      UnityEngine_Transform__get_localPosition_4092c40(lVar4,0);
                    /* try { // try from 03f1ee70 to 0401eecf has its CatchHandler @ 03f1ee70
                       catch() { ... } // from try @ 03f1ee70 with catch @ 03f1ee70
                       catch() { ... } // from try @ 03f1f010 with catch @ 03f1ee70
                       catch() { ... } // from try @ 03f1f070 with catch @ 03f1ee70
                       catch() { ... } // from try @ 03f1f0d8 with catch @ 03f1ee70
                       catch() { ... } // from try @ 03f1f164 with catch @ 03f1ee70 */
      if ((*(long *)(param_3 + 0x30) != 0) &&
         ((lVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_3 + 0x30),0),
          lVar4 != 0 && (UnityEngine_Transform__get_localPosition_4092c40(lVar4,0), lVar3 != 0)))) {
        UnityEngine_Transform__set_localPosition_4092ce0(uVar9,param_2,lVar3,0);
        lVar3 = *(long *)(param_3 + 0x28);
        fVar7 = (float)Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition_3e212d0
                                 (param_3,param_4);
        fVar8 = (float)Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__GetProgressBarDayXPosition_3e212d0
                                 (param_3,0);
                    /* try { // try from 03f1eed0 to 0401eed7 has its CatchHandler @ 03f1f094 */
        if ((*(long *)(param_3 + 0x28) != 0) &&
           (UnityEngine_SpriteRenderer__get_size_4095c28(*(long *)(param_3 + 0x28),0), lVar3 != 0))
        {
          UnityEngine_SpriteRenderer__set_size_4095cb8((fVar7 - fVar8) + 1.0,lVar3,0);
          plVar6 = *(long **)(param_3 + 0x38);
                    /* try { // try from 03f1eef4 to 0401eef7 has its CatchHandler @ 03f1f070 */
                    /* try { // try from 03f1eef8 to 0401ef1f has its CatchHandler @ 03f1f0a8 */
          uVar9 = System_Int32__ToString_26c9768(&iStack_34,0);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x558))(plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x560));
            puVar2 = PTR_DAT_057c6e90;
            puVar1 = PTR_DAT_0578d6e8;
            if (*(long *)(param_3 + 0x20) != 0) {
                    /* try { // try from 03f1ef24 to 0401ef27 has its CatchHandler @ 03f1f090 */
                    /* try { // try from 03f1ef28 to 0401ef2f has its CatchHandler @ 03f1f08c */
                    /* try { // try from 03f1ef34 to 0401ef4f has its CatchHandler @ 03f1f0a4 */
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_50,*(long *)(param_3 + 0x20),*(undefined8 *)PTR_DAT_0581aa00);
              while( true ) {
                uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_50,*(undefined8 *)puVar1);
                if ((uVar5 & 1) == 0) {
                    /* try { // try from 03f1ef94 to 0401ef9b has its CatchHandler @ 03f1f074 */
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_50,*(undefined8 *)puVar2);
                    /* try { // try from 03f1efa8 to 0401efc7 has its CatchHandler @ 03f1f078 */
                  return;
                }
                    /* try { // try from 03f1ef54 to 0401ef57 has its CatchHandler @ 03f1f088 */
                if (lStack_40 == 0) break;
                    /* try { // try from 03f1ef60 to 0401ef63 has its CatchHandler @ 03f1f084 */
                if (*(char *)(lStack_40 + 0x50) == '\0') {
                    /* try { // try from 03f1ef68 to 0401ef6f has its CatchHandler @ 03f1f080 */
                  if (iStack_34 < *(int *)(lStack_40 + 0x54)) {
                    /* try { // try from 03f1ef74 to 0401ef7f has its CatchHandler @ 03f1f07c */
                    Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetUnclaimedView_3e21b08
                              (lStack_40);
                  }
                  else {
                    Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetClaimedView_3e21a98
                              (lStack_40);
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

