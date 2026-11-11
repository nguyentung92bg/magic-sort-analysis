/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBatteryInfoStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBatteryInfoStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t batteryStatus, float batterLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBatteryInfoStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendBatteryInfoStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t batteryStatus, float
   batterLevel, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBatteryInfoStat_1468c60
               (float param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  float fStack_54;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c237c3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057d2c88);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057d5560);
    FUN_012d0dc8(PTR_DAT_05767c10);
    FUN_012d0dc8(PTR_DAT_057b0b78);
    bRam0000000005c237c3 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar5 = PTR_DAT_057d2c88;
  puVar4 = PTR_DAT_057ce7d0;
  puVar3 = PTR_DAT_057b0b78;
  puVar2 = PTR_DAT_05767c10;
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar6 != 0) {
                    /* try { // try from 01568d14 to 01668d23 has its CatchHandler @ 01568dc4 */
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar6,*(undefined8 *)PTR_DAT_057d5560,0);
                    /* try { // try from 01568d44 to 01668d4b has its CatchHandler @ 01568dbc */
    uStack_78 = *(undefined8 *)puVar5;
    uStack_70 = 0xffffffffffffffff;
    uStack_68 = param_3;
    uVar7 = System_Enum__ToString_23a4eac(&uStack_78,0);
                    /* try { // try from 01568d60 to 01668d6b has its CatchHandler @ 01568dc0 */
                    /* try { // try from 01568d6c to 01668daf has its CatchHandler @ 01568b38 */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar6,*(undefined8 *)puVar3,uVar7,0);
    fStack_54 = param_1;
    uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&fStack_54);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar6,*(undefined8 *)puVar2,uVar7,0);
    uStack_90 = *(undefined8 *)puVar5;
    uStack_88 = 0xffffffffffffffff;
    uStack_80 = param_3;
                    /* try { // try from 01568db0 to 01668db3 has its CatchHandler @ 01568db8 */
    uVar7 = System_Enum__ToString_23a4eac(&uStack_90,0);
                    /* try { // try from 01568db4 to 01668db7 has its CatchHandler @ 01568dc0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01568db0 with catch @ 01568db8
                       try { // try from 01568db8 to 01668ddb has its CatchHandler @ 01568b38 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01568d44 with catch @ 01568dbc
                        */
    uVar7 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StartupBatteryInfo_2db4e88
                      ((double)param_1,uVar7,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01568d60 with catch @ 01568dc0
                       catch(type#1 @ 054cbd58) { ... } // from try @ 01568db4 with catch @ 01568dc0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01568d14 with catch @ 01568dc4
                        */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
                    /* try { // try from 01568ddc to 01668ddf has its CatchHandler @ 01568dec */
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar7,0);
                    /* catch() { ... } // from try @ 01568ddc with catch @ 01568dec */
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
              (param_2,lVar6);
                    /* try { // try from 01568df8 to 01668e03 has its CatchHandler @ 01568e18 */
                    /* try { // try from 01568e04 to 01668e0f has its CatchHandler @ 01568b38 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01568e10 to 01668e17 has its CatchHandler @ 01568e18 */
  FUN_012d0ef0();
}

