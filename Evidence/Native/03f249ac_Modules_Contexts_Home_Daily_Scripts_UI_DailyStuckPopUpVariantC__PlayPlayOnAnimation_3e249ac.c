/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayPlayOnAnimation
void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayPlayOnAnimation (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantC$$PlayPlayOnAnimation
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayPlayOnAnimation
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__PlayPlayOnAnimation_3e249ac
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_057b8520;
                    /* try { // try from 03f249cc to 04024a2b has its CatchHandler @ 03f249cc
                       catch() { ... } // from try @ 03f249cc with catch @ 03f249cc
                       catch() { ... } // from try @ 03f24aa0 with catch @ 03f249cc
                       catch() { ... } // from try @ 03f24ae0 with catch @ 03f249cc
                       catch() { ... } // from try @ 03f24b18 with catch @ 03f249cc */
  if ((bRam0000000005c3813e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f45e0);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    bRam0000000005c3813e = 1;
  }
  puVar2 = PTR_DAT_05814830;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 03f24a2c to 04024a2f has its CatchHandler @ 03f24aa4 */
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_057606c8;
  if (lVar3 != 0) {
                    /* try { // try from 03f24a3c to 04024a43 has its CatchHandler @ 03f24ab0 */
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__OnAnyCloseButtonClicked_3e23d24
              (param_1);
    lVar3 = Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantC__OnPlayOnAnimations_3e24ab0
                      (param_1);
                    /* try { // try from 03f24a64 to 04024a6b has its CatchHandler @ 03f24aac */
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0578afb0;
    if (lVar4 != 0) {
                    /* try { // try from 03f24a88 to 04024a8f has its CatchHandler @ 03f24aa8 */
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057f45e0,0);
      uVar5 = *(undefined8 *)puVar1;
                    /* try { // try from 03f24a9c to 04024a9f has its CatchHandler @ 03f24aa0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f24a9c with catch @ 03f24aa0
                       try { // try from 03f24aa0 to 04024ac7 has its CatchHandler @ 03f249cc */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f24a2c with catch @ 03f24aa4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f24a88 with catch @ 03f24aa8
                        */
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
        *(long *)(lVar3 + 0x80) = lVar4;
        FUN_012d0d74((long *)(lVar3 + 0x80),lVar4,uVar5);
      }
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f24a64 with catch @ 03f24aac
                        */
  FUN_012d0ef0();
}

