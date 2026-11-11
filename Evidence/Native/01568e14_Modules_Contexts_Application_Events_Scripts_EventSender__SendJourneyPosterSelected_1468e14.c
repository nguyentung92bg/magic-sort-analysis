/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyPosterSelected
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyPosterSelected (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* oldPosterId, System_String_o* selectedPosterId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyPosterSelected
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyPosterSelected
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* oldPosterId,
   System_String_o* selectedPosterId, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyPosterSelected_1468e14
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uStack_44;
  
  puVar1 = PTR_DAT_057c8a60;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01568df8 with catch @ 01568e18
                       catch(type#2 @ 00000000) { ... } // from try @ 01568e10 with catch @ 01568e18
                        */
                    /* try { // try from 01568e24 to 01668e9b has its CatchHandler @ 01568e24
                       catch() { ... } // from try @ 01568e24 with catch @ 01568e24
                       catch() { ... } // from try @ 01568f9c with catch @ 01568e24
                       catch() { ... } // from try @ 01568ffc with catch @ 01568e24
                       catch() { ... } // from try @ 01569060 with catch @ 01568e24
                       catch() { ... } // from try @ 015690b4 with catch @ 01568e24 */
  if ((bRam0000000005c237c4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0575e9e8);
    FUN_012d0dc8(PTR_DAT_057d2f90);
                    /* try { // try from 01568e9c to 01668eab has its CatchHandler @ 0156900c */
    FUN_012d0dc8(PTR_DAT_057ed9c8);
    FUN_012d0dc8(PTR_DAT_0580b6b0);
                    /* try { // try from 01568eb8 to 01668ecf has its CatchHandler @ 01569010 */
    bRam0000000005c237c4 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_0580b6b0;
  puVar2 = PTR_DAT_057ed9c8;
  puVar1 = PTR_DAT_0576aae0;
  if (lVar4 != 0) {
                    /* try { // try from 01568ee4 to 01668eeb has its CatchHandler @ 01569008 */
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar4,*(undefined8 *)PTR_DAT_057d2f90,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar4,*(undefined8 *)puVar3,param_2,0);
                    /* try { // try from 01568f18 to 01668f1f has its CatchHandler @ 0156902c */
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar4,*(undefined8 *)puVar2,param_3,0);
                    /* try { // try from 01568f28 to 01668f2f has its CatchHandler @ 01569020 */
    lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                    /* try { // try from 01568f34 to 01668f3f has its CatchHandler @ 01569028 */
                    /* try { // try from 01568f48 to 01668f53 has its CatchHandler @ 0156901c */
    if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
       (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar7,*(undefined8 *)PTR_DAT_057c2940), puVar3 = PTR_DAT_057db748,
       puVar2 = PTR_DAT_0575f9f0, puVar1 = PTR_DAT_0575e9e8, lVar7 != 0)) {
                    /* try { // try from 01568f54 to 01668f63 has its CatchHandler @ 01569024 */
      uStack_44 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__CanShowLeaderboard_3b233a8
                            (lVar7,0);
                    /* try { // try from 01568f74 to 01668f7b has its CatchHandler @ 01569004 */
      uVar8 = *(undefined8 *)puVar1;
      uStack_44 = uStack_44 & 1;
      uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_44);
                    /* try { // try from 01568f94 to 01668f9b has its CatchHandler @ 01569000 */
                    /* try { // try from 01568f9c to 01668feb has its CatchHandler @ 01568e24 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar4,uVar8,uVar5,0);
      uVar6 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__CanShowLeaderboard_3b233a8
                        (lVar7,0);
      uVar5 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JourneyPosterSelected_2db8fb4
                        (param_2,param_3,uVar6 & 1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar5,0);
                    /* try { // try from 01568fec to 01668fef has its CatchHandler @ 01569010 */
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar4);
                    /* try { // try from 01568ff0 to 01668ff3 has its CatchHandler @ 01568ffc */
                    /* try { // try from 01568ff4 to 01668ffb has its CatchHandler @ 01569004 */
                    /* catch() { ... } // from try @ 01568ff0 with catch @ 01568ffc
                       try { // try from 01568ffc to 0166903b has its CatchHandler @ 01568e24 */
                    /* catch() { ... } // from try @ 01568f94 with catch @ 01569000 */
                    /* catch() { ... } // from try @ 01568f74 with catch @ 01569004
                       catch() { ... } // from try @ 01568ff4 with catch @ 01569004 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01568ee4 with catch @ 01569008 */
  FUN_012d0ef0();
}

