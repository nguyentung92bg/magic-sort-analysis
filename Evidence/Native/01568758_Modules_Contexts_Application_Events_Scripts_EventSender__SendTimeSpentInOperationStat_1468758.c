/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTimeSpentInOperationStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTimeSpentInOperationStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* operationName, double timeSpentInSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTimeSpentInOperationStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTimeSpentInOperationStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   operationName, double timeSpentInSeconds, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTimeSpentInOperationStat_1468758
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
                    /* try { // try from 01568768 to 0166876f has its CatchHandler @ 01568880 */
                    /* try { // try from 01568778 to 01668793 has its CatchHandler @ 0156888c */
  if ((bRam0000000005c237c0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 01568798 to 016687b3 has its CatchHandler @ 01568894 */
    FUN_012d0dc8(PTR_DAT_057c1328);
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 015687b4 to 016687b7 has its CatchHandler @ 0156887c */
                    /* try { // try from 015687b8 to 016687bb has its CatchHandler @ 01568878 */
    FUN_012d0dc8(PTR_DAT_057653f0);
                    /* try { // try from 015687bc to 016687d3 has its CatchHandler @ 015688a4 */
    FUN_012d0dc8(PTR_DAT_057a2fb8);
    FUN_012d0dc8(PTR_DAT_057ed510);
                    /* try { // try from 015687d4 to 016687db has its CatchHandler @ 01568874 */
    bRam0000000005c237c0 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar4 = PTR_DAT_057c1328;
  puVar3 = PTR_DAT_057a2fb8;
  puVar2 = PTR_DAT_057653f0;
  puVar1 = PTR_DAT_0575f9f0;
                    /* try { // try from 015687e4 to 016687ff has its CatchHandler @ 01568888 */
  if (lVar5 != 0) {
                    /* try { // try from 01568804 to 0166881f has its CatchHandler @ 01568890 */
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar5,*(undefined8 *)PTR_DAT_057ed510,0);
                    /* try { // try from 01568820 to 01668847 has its CatchHandler @ 01568894 */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar5,*(undefined8 *)puVar3,param_3,0);
    uStack_48 = param_1;
    uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_48);
                    /* try { // try from 01568848 to 0166884b has its CatchHandler @ 015688ac */
                    /* try { // try from 0156884c to 01668873 has its CatchHandler @ 01568890 */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar5,*(undefined8 *)puVar2,uVar6,0);
    uVar6 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TimeSpentInOperation_2db4d44
                      (param_1,param_3,0);
                    /* catch() { ... } // from try @ 015687d4 with catch @ 01568874
                       try { // try from 01568874 to 016688df has its CatchHandler @ 01568558 */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 015687b8 with catch @ 01568878 */
                    /* catch() { ... } // from try @ 015687b4 with catch @ 0156887c */
      thunk_FUN_0130472c(*(long *)puVar1);
    }
                    /* catch() { ... } // from try @ 01568768 with catch @ 01568880 */
                    /* catch() { ... } // from try @ 0156874c with catch @ 01568884 */
                    /* catch() { ... } // from try @ 015687e4 with catch @ 01568888 */
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar6,0);
                    /* catch() { ... } // from try @ 01568778 with catch @ 0156888c */
                    /* catch() { ... } // from try @ 01568804 with catch @ 01568890
                       catch() { ... } // from try @ 0156884c with catch @ 01568890 */
                    /* catch() { ... } // from try @ 01568798 with catch @ 01568894
                       catch() { ... } // from try @ 01568820 with catch @ 01568894 */
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
              (param_2,lVar5);
                    /* catch() { ... } // from try @ 015686bc with catch @ 01568898 */
                    /* catch() { ... } // from try @ 01568660 with catch @ 0156889c */
                    /* catch() { ... } // from try @ 015685ec with catch @ 015688a0 */
                    /* catch() { ... } // from try @ 0156860c with catch @ 015688a4
                       catch() { ... } // from try @ 015686e8 with catch @ 015688a4
                       catch() { ... } // from try @ 01568750 with catch @ 015688a4
                       catch() { ... } // from try @ 015687bc with catch @ 015688a4 */
                    /* catch() { ... } // from try @ 01568738 with catch @ 015688a8 */
                    /* catch() { ... } // from try @ 0156862c with catch @ 015688ac
                       catch() { ... } // from try @ 01568848 with catch @ 015688ac */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01568714 with catch @ 015688b0 */
  FUN_012d0ef0();
}

