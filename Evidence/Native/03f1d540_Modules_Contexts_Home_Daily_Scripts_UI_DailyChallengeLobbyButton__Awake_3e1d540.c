/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyChallengeLobbyButton$$Awake
void Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton__Awake (Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyChallengeLobbyButton$$Awake
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton__Awake
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyChallengeLobbyButton__Awake_3e1d540(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x25;
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c380ef & 1) == 0) {
                    /* try { // try from 03f1d570 to 0401d57f has its CatchHandler @ 03f1d580 */
    FUN_012d0dc8(PTR_DAT_05793350);
    FUN_012d0dc8(PTR_DAT_0578b048);
                    /* catch() { ... } // from try @ 03f1d520 with catch @ 03f1d580
                       catch() { ... } // from try @ 03f1d570 with catch @ 03f1d580 */
                    /* try { // try from 03f1d584 to 0401d587 has its CatchHandler @ 03f1d590 */
                    /* try { // try from 03f1d588 to 0401d593 has its CatchHandler @ 03f1d3f4 */
    FUN_012d0dc8(PTR_DAT_05778bf8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03f1d584 with catch @ 03f1d590
                        */
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 03f1d5a0 to 0401d697 has its CatchHandler @ 03f1d5a0
                       catch() { ... } // from try @ 03f1d5a0 with catch @ 03f1d5a0
                       catch() { ... } // from try @ 03f1d7d0 with catch @ 03f1d5a0
                       catch() { ... } // from try @ 03f1da34 with catch @ 03f1d5a0
                       catch() { ... } // from try @ 03f1daf0 with catch @ 03f1d5a0
                       catch() { ... } // from try @ 03f1db50 with catch @ 03f1d5a0
                       catch() { ... } // from try @ 03f1dbcc with catch @ 03f1d5a0 */
    FUN_012d0dc8(PTR_DAT_05777770);
    FUN_012d0dc8(PTR_DAT_057d6120);
    FUN_012d0dc8(PTR_DAT_057b9e00);
    FUN_012d0dc8(PTR_DAT_05811368);
    FUN_012d0dc8(PTR_DAT_057d6730);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0580bcb0);
    bRam0000000005c380ef = 1;
  }
  puVar2 = PTR_DAT_0578b048;
  lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar8,*(undefined8 *)PTR_DAT_05778bf8);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    FUN_012d0d74((undefined8 *)(param_1 + 0x30),uVar6);
    lVar9 = *(long *)(param_1 + 0x18);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar8 != 0) &&
       (System_Action___ctor_21239bc(lVar8,param_1,*(undefined8 *)PTR_DAT_05777770,0),
       puVar4 = PTR_DAT_057d6730, puVar3 = PTR_DAT_057b8520, puVar1 = PTR_DAT_05793350, lVar9 != 0))
    {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                (lVar9,lVar8,0);
                    /* try { // try from 03f1d698 to 0401d6b3 has its CatchHandler @ 03f1db18 */
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar4);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 03f1d6c8 to 0401d6cb has its CatchHandler @ 03f1db0c */
                    /* try { // try from 03f1d6d8 to 0401d707 has its CatchHandler @ 03f1db1c */
      if ((lVar9 != 0) &&
         (System_Action_Int32Enum____ctor_1646b94(lVar9,param_1,*(undefined8 *)PTR_DAT_057d6120,0),
         puVar1 = PTR_DAT_05811368, lVar8 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Subscribe_333d1b8
                  (lVar8,lVar9,*(undefined8 *)PTR_DAT_0580bcb0);
        lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
                    /* try { // try from 03f1d710 to 0401d713 has its CatchHandler @ 03f1db08 */
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 03f1d724 to 0401d727 has its CatchHandler @ 03f1db04 */
        if ((lVar9 != 0) &&
           (System_Action___ctor_21239bc(lVar9,param_1,*(undefined8 *)PTR_DAT_057b9e00,0),
           lVar8 != 0)) {
                    /* try { // try from 03f1d738 to 0401d73f has its CatchHandler @ 03f1db00 */
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar8,lVar9,0);
                    /* try { // try from 03f1d754 to 0401d75b has its CatchHandler @ 03f1da90 */
          if ((bRam0000000005c380f2 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057db748);
            FUN_012d0dc8(PTR_DAT_057c0628);
            bRam0000000005c380f2 = 1;
          }
          if (*(long *)(param_1 + 0x30) != 0) {
            uVar5 = Modules_Contexts_Home_Daily_Scripts_DailyService__IsEligibleForDaily_4104fb0
                              (*(long *)(param_1 + 0x30),0);
            if (*(long *)(param_1 + 0x20) != 0) {
              UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),uVar5 & 1,0);
              puVar1 = PTR_DAT_057db748;
              if ((uVar5 & 1) == 0) {
                return;
              }
              if (*(long *)(param_1 + 0x30) != 0) {
                Modules_Contexts_Home_Daily_Scripts_DailyService__GetActiveDailyViewModel_4105930
                          (auStack_50,*(long *)(param_1 + 0x30),0);
                lVar8 = *(long *)(param_1 + 0x28);
                uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,auStack_50);
                puVar2 = PTR_DAT_057c0628;
                if (unaff_x25 != 0) {
                  uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&stack0xffffffffffffffdc);
                  uVar6 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar6,uVar7,0);
                  if (lVar8 != 0) {
                    TMPro_TMP_Text__SetText_3dc1ab4(lVar8,uVar6,1,0);
                    return;
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

