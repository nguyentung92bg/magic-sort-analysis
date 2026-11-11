/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTreasureDrillTaskCompletedStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillTaskCompletedStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t taskId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendTreasureDrillTaskCompletedStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillTaskCompletedStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t taskId, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillTaskCompletedStat_147b374
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uStack_58;
  int iStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 0157b37c to 0167b393 has its CatchHandler @ 0157b408 */
                    /* try { // try from 0157b394 to 0167b3f7 has its CatchHandler @ 0157affc */
  if ((bRam0000000005c23826 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057d5558);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057b1dd8);
                    /* try { // try from 0157b3f8 to 0167b407 has its CatchHandler @ 0157b408 */
    FUN_012d0dc8(PTR_DAT_057c7e18);
    FUN_012d0dc8(PTR_DAT_05769b28);
                    /* catch() { ... } // from try @ 0157b37c with catch @ 0157b408
                       catch() { ... } // from try @ 0157b3f8 with catch @ 0157b408 */
                    /* try { // try from 0157b40c to 0167b40f has its CatchHandler @ 0157b418 */
                    /* try { // try from 0157b410 to 0167b41b has its CatchHandler @ 0157affc */
    FUN_012d0dc8(PTR_DAT_057d3f68);
                    /* catch() { ... } // from try @ 0157b40c with catch @ 0157b418 */
    bRam0000000005c23826 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) &&
     (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar7,*(undefined8 *)PTR_DAT_057d5558), puVar1 = PTR_DAT_057c8a60,
     lVar7 != 0)) {
    uVar8 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetSegment_33047d4
                      (lVar7,0);
    uVar6 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__IsPurchased_3303ab8
                      (lVar7,0);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar5 = PTR_DAT_057db748;
    puVar4 = PTR_DAT_057d3f68;
    puVar3 = PTR_DAT_057b1dd8;
    puVar2 = PTR_DAT_05769b28;
    puVar1 = PTR_DAT_0575f9f0;
    if (lVar7 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar7,*(undefined8 *)PTR_DAT_057c7e18,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar4,uVar8,0);
      iStack_54 = param_2;
      uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_54);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar2,uVar9,0);
      uVar10 = *(undefined8 *)puVar3;
      uStack_58 = uVar6 & 1;
      uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_58);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar7,uVar10,uVar9,0);
      uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TreasureDrillTaskCompleted_2db113c
                        (uVar8,(long)param_2,uVar6 & 1,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

