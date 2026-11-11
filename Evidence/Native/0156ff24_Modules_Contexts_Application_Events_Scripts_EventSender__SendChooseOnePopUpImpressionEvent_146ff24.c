/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendChooseOnePopUpImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendChooseOnePopUpImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendChooseOnePopUpImpressionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendChooseOnePopUpImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendChooseOnePopUpImpressionEvent_146ff24
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = PTR_DAT_057c8a60;
                    /* try { // try from 0156ff34 to 0166ff53 has its CatchHandler @ 015705dc */
  if ((bRam0000000005c237e4 & 1) == 0) {
                    /* try { // try from 0156ff64 to 0166ff6f has its CatchHandler @ 01570600 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0579cf40);
    FUN_012d0dc8(PTR_DAT_057a4fb0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 0156ff8c to 0166ff8f has its CatchHandler @ 015704e0 */
                    /* try { // try from 0156ff90 to 0166ff9b has its CatchHandler @ 01570568 */
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057dbe68);
                    /* try { // try from 0156ffac to 0166ffb3 has its CatchHandler @ 01570560 */
    FUN_012d0dc8(PTR_DAT_0576bba0);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237e4 = 1;
  }
                    /* try { // try from 0156ffd0 to 0166ffdb has its CatchHandler @ 0157058c */
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0576aae0;
  if (lVar6 != 0) {
                    /* try { // try from 0156fff8 to 0166fffb has its CatchHandler @ 015704c4 */
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar6,*(undefined8 *)PTR_DAT_0576bba0,0);
                    /* try { // try from 0156fffc to 0167000b has its CatchHandler @ 01570528 */
                    /* try { // try from 0157001c to 01670023 has its CatchHandler @ 0157051c */
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) &&
       (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar7,*(undefined8 *)PTR_DAT_057a4fb0), puVar5 = PTR_DAT_057dbe68,
       puVar4 = PTR_DAT_057d3f68, puVar3 = PTR_DAT_0579cf40, puVar2 = PTR_DAT_0575f9f0,
       puVar1 = PTR_DAT_0575a580, lVar7 != 0)) {
                    /* try { // try from 01570040 to 0167004b has its CatchHandler @ 015705b4 */
                    /* try { // try from 01570050 to 0167005b has its CatchHandler @ 01570508 */
      uVar8 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetSegment_20add6c
                        (lVar7,0);
                    /* try { // try from 0157006c to 01670077 has its CatchHandler @ 0157056c */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar6,*(undefined8 *)puVar4,uVar8,0);
      uStack_78 = *(undefined8 *)puVar3;
      uStack_70 = 0xffffffffffffffff;
      uStack_68 = param_2;
      uVar9 = System_Enum__ToString_23a4eac(&uStack_78,0);
                    /* try { // try from 01570094 to 01670097 has its CatchHandler @ 015704a0 */
                    /* try { // try from 01570098 to 016700b7 has its CatchHandler @ 01570588 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar6,*(undefined8 *)puVar5,uVar9,0);
      uVar9 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetEventId_20adae4
                        (lVar7,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar6,*(undefined8 *)puVar1,uVar9,0);
      uStack_90 = *(undefined8 *)puVar3;
                    /* try { // try from 015700c8 to 016700d3 has its CatchHandler @ 01570584 */
      uStack_88 = 0xffffffffffffffff;
      uStack_80 = param_2;
      uVar9 = System_Enum__ToString_23a4eac(&uStack_90,0);
      uVar10 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetEventId_20adae4
                         (lVar7,0);
                    /* try { // try from 015700f0 to 016700f3 has its CatchHandler @ 015704c0 */
                    /* try { // try from 015700f4 to 016700ff has its CatchHandler @ 01570524 */
      uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__ChooseOnePopupImpression_2dae950
                        (uVar8,uVar9,uVar10,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 01570110 to 0167011b has its CatchHandler @ 01570518 */
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar6);
                    /* try { // try from 01570138 to 01670143 has its CatchHandler @ 01570598 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

