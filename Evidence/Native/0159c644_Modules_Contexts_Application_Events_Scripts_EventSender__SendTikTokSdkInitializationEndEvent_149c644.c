/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTikTokSdkInitializationEndEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTikTokSdkInitializationEndEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, bool success, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendTikTokSdkInitializationEndEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTikTokSdkInitializationEndEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, bool success, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTikTokSdkInitializationEndEvent_149c644
               (undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  byte abStack_44 [4];
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c238a0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 0159c6a0 to 0169c6a7 has its CatchHandler @ 0159c708 */
    FUN_012d0dc8(PTR_DAT_0580afb0);
                    /* try { // try from 0159c6a8 to 0169c6fb has its CatchHandler @ 0159c5f4 */
    FUN_012d0dc8(PTR_DAT_05764468);
    bRam0000000005c238a0 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_0580afb0;
  puVar2 = PTR_DAT_057b4910;
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar4 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar4,*(undefined8 *)PTR_DAT_05764468,0);
                    /* try { // try from 0159c6fc to 0169c6ff has its CatchHandler @ 0159c704 */
    abStack_44[0] = param_2 & 1;
                    /* try { // try from 0159c700 to 0169c71f has its CatchHandler @ 0159c5f4 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0159c6fc with catch @ 0159c704
                        */
    uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,abStack_44);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0159c6a0 with catch @ 0159c708
                        */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar4,*(undefined8 *)puVar3,uVar5,0);
                    /* try { // try from 0159c720 to 0169c723 has its CatchHandler @ 0159c758 */
                    /* try { // try from 0159c724 to 0169c767 has its CatchHandler @ 0159c5f4 */
    uVar5 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TiktokSdkInitializationEnd_2dbeea0
                      (param_2 & 1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar5,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
              (param_1,lVar4);
                    /* catch() { ... } // from try @ 0159c720 with catch @ 0159c758 */
                    /* try { // try from 0159c768 to 0169c76f has its CatchHandler @ 0159c784 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0159c770 to 0169c77b has its CatchHandler @ 0159c5f4 */
  FUN_012d0ef0();
}

