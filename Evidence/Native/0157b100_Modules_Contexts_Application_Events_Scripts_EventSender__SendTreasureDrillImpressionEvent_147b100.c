/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTreasureDrillImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTreasureDrillImpressionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillImpressionEvent_147b100
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23825 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057d5558);
                    /* try { // try from 0157b150 to 0167b187 has its CatchHandler @ 0157b1e0 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057b1dd8);
    FUN_012d0dc8(PTR_DAT_057fac68);
                    /* try { // try from 0157b190 to 0167b1a7 has its CatchHandler @ 0157b1dc */
    FUN_012d0dc8(PTR_DAT_057fae40);
    FUN_012d0dc8(PTR_DAT_057bb970);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23825 = 1;
  }
                    /* try { // try from 0157b1c4 to 0167b1c7 has its CatchHandler @ 0157b1d4 */
                    /* try { // try from 0157b1c8 to 0167b1cb has its CatchHandler @ 0157b1e0 */
                    /* try { // try from 0157b1cc to 0167b1cf has its CatchHandler @ 0157b1d0 */
                    /* catch() { ... } // from try @ 0157b1cc with catch @ 0157b1d0 */
                    /* catch() { ... } // from try @ 0157b1c4 with catch @ 0157b1d4 */
                    /* catch() { ... } // from try @ 0157b0d0 with catch @ 0157b1d8 */
                    /* catch() { ... } // from try @ 0157b190 with catch @ 0157b1dc */
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) &&
     (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar9,*(undefined8 *)PTR_DAT_057d5558), puVar1 = PTR_DAT_057c8a60,
     lVar9 != 0)) {
                    /* catch() { ... } // from try @ 0157b150 with catch @ 0157b1e0
                       catch() { ... } // from try @ 0157b1c8 with catch @ 0157b1e0 */
                    /* catch() { ... } // from try @ 0157b0fc with catch @ 0157b1e4 */
    uVar10 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetSegment_33047d4
                       (lVar9,0);
                    /* try { // try from 0157b1fc to 0167b1ff has its CatchHandler @ 0157b364 */
                    /* try { // try from 0157b200 to 0167b207 has its CatchHandler @ 0157b358 */
    iVar6 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetTotalCompletedTaskCount_3304468
                      (lVar9,0);
                    /* try { // try from 0157b20c to 0167b217 has its CatchHandler @ 0157b35c */
    iVar7 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetClaimedTaskCount_3304608
                      (lVar9,0);
    uVar8 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__IsPurchased_3303ab8
                      (lVar9,0);
                    /* try { // try from 0157b22c to 0167b22f has its CatchHandler @ 0157b350 */
                    /* try { // try from 0157b230 to 0167b23b has its CatchHandler @ 0157b354 */
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar5 = PTR_DAT_057fae40;
    puVar4 = PTR_DAT_057db748;
    puVar3 = PTR_DAT_057d3f68;
    puVar2 = PTR_DAT_057bb970;
    puVar1 = PTR_DAT_057b1dd8;
    if (lVar9 != 0) {
                    /* try { // try from 0157b24c to 0167b25b has its CatchHandler @ 0157b364 */
                    /* try { // try from 0157b26c to 0167b26f has its CatchHandler @ 0157b360 */
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar9,*(undefined8 *)PTR_DAT_057fac68,0);
                    /* try { // try from 0157b288 to 0167b28f has its CatchHandler @ 0157b348 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar3,uVar10,0);
      iStack_64 = iVar6;
                    /* try { // try from 0157b298 to 0167b29f has its CatchHandler @ 0157b344 */
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
                    /* try { // try from 0157b2a0 to 0167b2f3 has its CatchHandler @ 0157affc */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar5,uVar11,0);
      iStack_68 = iVar7;
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_68);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar2,uVar11,0);
      uVar12 = *(undefined8 *)puVar1;
      uStack_6c = uVar8 & 1;
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
                    /* try { // try from 0157b2f4 to 0167b313 has its CatchHandler @ 0157b34c */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar9,uVar12,uVar11,0);
      uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TreasureDrillPopupImpression_2db1074
                         (uVar10,(long)iVar6,(long)iVar7,uVar8 & 1,0);
                    /* try { // try from 0157b32c to 0167b32f has its CatchHandler @ 0157b340 */
      if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                    /* try { // try from 0157b330 to 0167b333 has its CatchHandler @ 0157b33c */
                    /* try { // try from 0157b334 to 0167b337 has its CatchHandler @ 0157b348 */
        thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
      }
                    /* try { // try from 0157b338 to 0167b33b has its CatchHandler @ 0157b344 */
                    /* catch() { ... } // from try @ 0157b330 with catch @ 0157b33c
                       try { // try from 0157b33c to 0167b37b has its CatchHandler @ 0157affc */
                    /* catch() { ... } // from try @ 0157b32c with catch @ 0157b340 */
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
                    /* catch() { ... } // from try @ 0157b298 with catch @ 0157b344
                       catch() { ... } // from try @ 0157b338 with catch @ 0157b344 */
                    /* catch() { ... } // from try @ 0157b288 with catch @ 0157b348
                       catch() { ... } // from try @ 0157b334 with catch @ 0157b348 */
                    /* catch() { ... } // from try @ 0157b2f4 with catch @ 0157b34c */
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar9);
                    /* catch() { ... } // from try @ 0157b22c with catch @ 0157b350 */
                    /* catch() { ... } // from try @ 0157b230 with catch @ 0157b354 */
                    /* catch() { ... } // from try @ 0157b200 with catch @ 0157b358 */
                    /* catch() { ... } // from try @ 0157b20c with catch @ 0157b35c */
                    /* catch() { ... } // from try @ 0157b26c with catch @ 0157b360 */
                    /* catch() { ... } // from try @ 0157b1fc with catch @ 0157b364
                       catch() { ... } // from try @ 0157b24c with catch @ 0157b364 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

