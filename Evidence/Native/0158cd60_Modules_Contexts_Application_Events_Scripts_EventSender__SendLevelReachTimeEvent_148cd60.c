/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLevelReachTimeEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelReachTimeEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t levelIndex, System_DateTime_o firstOpenTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLevelReachTimeEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelReachTimeEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t levelIndex,
   System_DateTime_o firstOpenTime, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendLevelReachTimeEvent_148cd60
               (undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  undefined8 uStack_80;
  int iStack_74;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c23860 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057c1328);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    FUN_012d0dc8(PTR_DAT_05792830);
    FUN_012d0dc8(PTR_DAT_0579fed0);
    FUN_012d0dc8(PTR_DAT_057e5c70);
    FUN_012d0dc8(PTR_DAT_057af9f0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23860 = 1;
  }
  puVar2 = PTR_DAT_0576c1b8;
  uStack_68 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = System_DateTime__get_UtcNow_2100638(0);
  uStack_68 = System_DateTime__op_Subtraction_2101f60(uVar8,param_3,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  puVar7 = PTR_DAT_057db748;
  puVar6 = PTR_DAT_057caaf0;
  puVar5 = PTR_DAT_057c8a60;
  puVar4 = PTR_DAT_057c1328;
  puVar3 = PTR_DAT_0579fed0;
  puVar1 = PTR_DAT_0575f9f0;
                    /* try { // try from 0158cea4 to 0168cf67 has its CatchHandler @ 0158cea4
                       catch() { ... } // from try @ 0158cea4 with catch @ 0158cea4
                       catch() { ... } // from try @ 0158d08c with catch @ 0158cea4
                       catch() { ... } // from try @ 0158d128 with catch @ 0158cea4
                       catch() { ... } // from try @ 0158d18c with catch @ 0158cea4
                       catch() { ... } // from try @ 0158d1f4 with catch @ 0158cea4 */
  dVar10 = (double)System_TimeSpan__get_TotalHours_2699948(&uStack_68,0);
  if ((param_2 != 100) || (72.0 <= dVar10)) {
                    /* try { // try from 0158cfac to 0168cfaf has its CatchHandler @ 0158d148 */
    if ((param_2 != 0x2d) || (72.0 <= dVar10)) {
      if (param_2 != 0x2d) {
        return;
      }
    }
    else {
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
      if (lVar9 == 0) goto LAB_0158d198;
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar9,*(undefined8 *)PTR_DAT_05792830,0);
      iStack_74 = 0x2d;
      uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_74);
                    /* try { // try from 0158cff0 to 0168d033 has its CatchHandler @ 0158d150 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar6,uVar8,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uStack_80 = System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
      uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_80);
                    /* try { // try from 0158d038 to 0168d03f has its CatchHandler @ 0158d144 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar3,uVar8,0);
                    /* try { // try from 0158d044 to 0168d04f has its CatchHandler @ 0158d140 */
      System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
                    /* try { // try from 0158d054 to 0168d06f has its CatchHandler @ 0158d158 */
      uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__LevelReach4572H_2dbc768(0x2d,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
                    /* try { // try from 0158d07c to 0168d08b has its CatchHandler @ 0158d15c */
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
                (param_1,lVar9);
                    /* try { // try from 0158d08c to 0168d0d3 has its CatchHandler @ 0158cea4 */
    }
    if (24.0 <= dVar10) {
      return;
    }
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar9 == 0) goto LAB_0158d198;
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar9,*(undefined8 *)PTR_DAT_057af9f0,0);
    iStack_74 = param_2;
                    /* try { // try from 0158d0d4 to 0168d0db has its CatchHandler @ 0158d138 */
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_74);
                    /* try { // try from 0158d0e8 to 0168d107 has its CatchHandler @ 0158d13c */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar6,uVar8,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uStack_80 = System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
                    /* try { // try from 0158d10c to 0168d10f has its CatchHandler @ 0158d130 */
                    /* try { // try from 0158d110 to 0168d113 has its CatchHandler @ 0158d12c */
                    /* try { // try from 0158d114 to 0168d117 has its CatchHandler @ 0158d15c */
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_80);
                    /* try { // try from 0158d118 to 0168d11b has its CatchHandler @ 0158d154 */
                    /* try { // try from 0158d11c to 0168d11f has its CatchHandler @ 0158d148 */
                    /* try { // try from 0158d120 to 0168d123 has its CatchHandler @ 0158d128 */
                    /* try { // try from 0158d124 to 0168d127 has its CatchHandler @ 0158d150 */
                    /* catch() { ... } // from try @ 0158d120 with catch @ 0158d128
                       try { // try from 0158d128 to 0168d173 has its CatchHandler @ 0158cea4 */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar3,uVar8,0);
                    /* catch() { ... } // from try @ 0158d110 with catch @ 0158d12c */
                    /* catch() { ... } // from try @ 0158d10c with catch @ 0158d130 */
                    /* catch() { ... } // from try @ 0158cf68 with catch @ 0158d134 */
    System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
                    /* catch() { ... } // from try @ 0158d0d4 with catch @ 0158d138 */
                    /* catch() { ... } // from try @ 0158d0e8 with catch @ 0158d13c */
                    /* catch() { ... } // from try @ 0158d044 with catch @ 0158d140 */
    uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__LevelReach4524H_2dbc7f4
                      ((long)param_2,0);
                    /* catch() { ... } // from try @ 0158d038 with catch @ 0158d144 */
                    /* catch() { ... } // from try @ 0158cfac with catch @ 0158d148
                       catch() { ... } // from try @ 0158d11c with catch @ 0158d148 */
                    /* catch() { ... } // from try @ 0158cf88 with catch @ 0158d14c */
                    /* catch() { ... } // from try @ 0158cff0 with catch @ 0158d150
                       catch() { ... } // from try @ 0158d124 with catch @ 0158d150 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0158cf78 with catch @ 0158d154
                       catch() { ... } // from try @ 0158d118 with catch @ 0158d154 */
                    /* catch() { ... } // from try @ 0158d054 with catch @ 0158d158 */
      thunk_FUN_0130472c(*(long *)puVar1);
    }
                    /* catch() { ... } // from try @ 0158d07c with catch @ 0158d15c
                       catch() { ... } // from try @ 0158d114 with catch @ 0158d15c */
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
  }
  else {
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar9 == 0) {
LAB_0158d198:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar9,*(undefined8 *)PTR_DAT_057e5c70,0);
    iStack_74 = 100;
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&iStack_74);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar6,uVar8,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uStack_80 = System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
    uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_80);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar9,*(undefined8 *)puVar3,uVar8,0);
    System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
                    /* try { // try from 0158cf68 to 0168cf6b has its CatchHandler @ 0158d134 */
    uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__LevelReach10072H_2dbc6dc(100,0);
                    /* try { // try from 0158cf78 to 0168cf87 has its CatchHandler @ 0158d154 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
                    /* try { // try from 0158cf88 to 0168cf8f has its CatchHandler @ 0158d14c */
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
  }
  Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
            (param_1,lVar9);
                    /* try { // try from 0158d174 to 0168d18b has its CatchHandler @ 0158d1ec */
                    /* try { // try from 0158d18c to 0168d1db has its CatchHandler @ 0158cea4 */
  return;
}

