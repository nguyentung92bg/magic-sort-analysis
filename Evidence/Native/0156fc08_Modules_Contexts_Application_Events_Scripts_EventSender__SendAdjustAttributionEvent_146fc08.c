/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAdjustAttributionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdjustAttributionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_Player_Scripts_AdjustAttributionModel_o* adjustAttributionModel, System_String_o* adid, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendAdjustAttributionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdjustAttributionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_Player_Scripts_AdjustAttributionModel_o* adjustAttributionModel,
   System_String_o* adid, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendAdjustAttributionEvent_146fc08
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_057c8a60;
                    /* try { // try from 0156fc40 to 0166fc4b has its CatchHandler @ 015705d0 */
  if ((bRam0000000005c237e3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 0156fc50 to 0166fc5b has its CatchHandler @ 01570510 */
    FUN_012d0dc8(PTR_DAT_057c1328);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_05809bd0);
    FUN_012d0dc8(PTR_DAT_05812560);
                    /* try { // try from 0156fc84 to 0166fc8f has its CatchHandler @ 0157059c */
    FUN_012d0dc8(PTR_DAT_05794798);
    FUN_012d0dc8(PTR_DAT_057e7510);
                    /* try { // try from 0156fc98 to 0166fc9f has its CatchHandler @ 015704ec */
    FUN_012d0dc8(PTR_DAT_0575e720);
    FUN_012d0dc8(PTR_DAT_057d7900);
    FUN_012d0dc8(PTR_DAT_057ad238);
    FUN_012d0dc8(PTR_DAT_057ff2d8);
    FUN_012d0dc8(PTR_DAT_057c9e50);
                    /* try { // try from 0156fcd8 to 0166fce3 has its CatchHandler @ 01570590 */
    FUN_012d0dc8(PTR_DAT_05801230);
    FUN_012d0dc8(PTR_DAT_057f8ec8);
    FUN_012d0dc8(PTR_DAT_057af088);
                    /* try { // try from 0156fd00 to 0166fd03 has its CatchHandler @ 015704bc */
    FUN_012d0dc8(PTR_DAT_05771e28);
                    /* try { // try from 0156fd04 to 0166fd0f has its CatchHandler @ 01570520 */
    bRam0000000005c237e3 = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar9 != 0) {
                    /* try { // try from 0156fd20 to 0166fd2b has its CatchHandler @ 01570514 */
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar9,*(undefined8 *)PTR_DAT_057d7900,0);
    puVar8 = PTR_DAT_05809bd0;
    puVar7 = PTR_DAT_05801230;
    puVar6 = PTR_DAT_057ff2d8;
    puVar5 = PTR_DAT_057e7510;
    puVar4 = PTR_DAT_057c9e50;
    puVar3 = PTR_DAT_057c1328;
    puVar2 = PTR_DAT_05794798;
    puVar1 = PTR_DAT_0575e720;
    if (param_2 != 0) {
                    /* try { // try from 0156fd68 to 0166fd73 has its CatchHandler @ 015705c8 */
                    /* try { // try from 0156fd90 to 0166fd93 has its CatchHandler @ 015704b8 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_05812560,*(undefined8 *)(param_2 + 0x10),0);
                    /* try { // try from 0156fd94 to 0166fda3 has its CatchHandler @ 0157050c */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar6,*(undefined8 *)(param_2 + 0x18),0);
                    /* try { // try from 0156fdb4 to 0166fdbb has its CatchHandler @ 01570504 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar8,*(undefined8 *)(param_2 + 0x20),0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar2,*(undefined8 *)(param_2 + 0x28),0);
                    /* try { // try from 0156fdd8 to 0166fde3 has its CatchHandler @ 015705e8 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar5,*(undefined8 *)(param_2 + 0x30),0);
                    /* try { // try from 0156fdf0 to 0166fe0b has its CatchHandler @ 015705e0 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar1,*(undefined8 *)(param_2 + 0x38),0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar7,*(undefined8 *)(param_2 + 0x40),0);
                    /* try { // try from 0156fe1c to 0166fe27 has its CatchHandler @ 015705f4 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar4,*(undefined8 *)(param_2 + 0x48),0);
      uStack_68 = *(undefined8 *)(param_2 + 0x50);
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
                    /* try { // try from 0156fe44 to 0166fe47 has its CatchHandler @ 015704d4 */
                    /* try { // try from 0156fe48 to 0166fe67 has its CatchHandler @ 015705d4 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_057f8ec8,uVar10,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_057af088,*(undefined8 *)(param_2 + 0x58),0);
                    /* try { // try from 0156fe78 to 0166fe83 has its CatchHandler @ 015705d8 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_05771e28,*(undefined8 *)(param_2 + 0x60),0);
                    /* try { // try from 0156fe8c to 0166fe93 has its CatchHandler @ 01570548 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)PTR_DAT_057ad238,param_3,0);
                    /* try { // try from 0156feac to 0166feb7 has its CatchHandler @ 015705fc */
      uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__OnAdjustAttribution_2db8c18
                         (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x10),
                          *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                          *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                          *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
                          *(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x58),
                          *(undefined8 *)(param_2 + 0x60),param_3,0);
                    /* try { // try from 0156fed4 to 0166fed7 has its CatchHandler @ 015704dc */
                    /* try { // try from 0156fed8 to 0166fee7 has its CatchHandler @ 01570564 */
      if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
                    /* try { // try from 0156fef8 to 0166feff has its CatchHandler @ 01570550 */
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
                (param_1,lVar9);
                    /* try { // try from 0156ff1c to 0166ff27 has its CatchHandler @ 015705ec */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

