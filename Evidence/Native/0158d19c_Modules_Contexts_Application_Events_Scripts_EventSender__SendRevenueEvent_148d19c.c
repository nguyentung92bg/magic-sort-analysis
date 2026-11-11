/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendRevenueEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendRevenueEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, double value, System_String_o* currencyCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendRevenueEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendRevenueEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, double value,
   System_String_o* currencyCode, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendRevenueEvent_148d19c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23861 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 0158d1dc to 0168d1eb has its CatchHandler @ 0158d1ec */
    FUN_012d0dc8(PTR_DAT_057c1328);
                    /* catch() { ... } // from try @ 0158d174 with catch @ 0158d1ec
                       catch() { ... } // from try @ 0158d1dc with catch @ 0158d1ec */
                    /* try { // try from 0158d1f0 to 0168d1f3 has its CatchHandler @ 0158d1fc */
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 0158d1f4 to 0168d1ff has its CatchHandler @ 0158cea4 */
                    /* catch() { ... } // from try @ 0158d1f0 with catch @ 0158d1fc */
    FUN_012d0dc8(PTR_DAT_057a2bf0);
    FUN_012d0dc8(PTR_DAT_057c9128);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    bRam0000000005c23861 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar4 = PTR_DAT_057d60e0;
  puVar3 = PTR_DAT_057c9128;
  puVar2 = PTR_DAT_057c1328;
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar5 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar5,*(undefined8 *)PTR_DAT_057a2bf0,0);
    uStack_48 = param_1;
    uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_48);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar5,*(undefined8 *)puVar3,uVar6,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar5,*(undefined8 *)puVar4,param_3,0);
    uVar6 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TotalRevenue_2db48cc
                      (param_1,param_3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar6,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
              (param_2,lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

