/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$Dispose
void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__Dispose (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyController$$Dispose
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__Dispose
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyController_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyController__Dispose_3e1e024(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000005c380f4 & 1) == 0) {
                    /* try { // try from 03f1e048 to 0401e057 has its CatchHandler @ 03f1e058 */
    FUN_012d0dc8(PTR_DAT_05778e88);
    FUN_012d0dc8(PTR_DAT_0578b048);
                    /* catch() { ... } // from try @ 03f1dfe4 with catch @ 03f1e058
                       catch() { ... } // from try @ 03f1e048 with catch @ 03f1e058 */
                    /* try { // try from 03f1e05c to 0401e05f has its CatchHandler @ 03f1e068 */
                    /* try { // try from 03f1e060 to 0401e06b has its CatchHandler @ 03f1dc44 */
    FUN_012d0dc8(PTR_DAT_0576dd28);
                    /* catch() { ... } // from try @ 03f1e05c with catch @ 03f1e068 */
    FUN_012d0dc8(PTR_DAT_057740a0);
                    /* try { // try from 03f1e078 to 0401e113 has its CatchHandler @ 03f1e078
                       catch() { ... } // from try @ 03f1e078 with catch @ 03f1e078
                       catch() { ... } // from try @ 03f1e210 with catch @ 03f1e078
                       catch() { ... } // from try @ 03f1e24c with catch @ 03f1e078
                       catch() { ... } // from try @ 03f1e2a4 with catch @ 03f1e078
                       catch() { ... } // from try @ 03f1e2f4 with catch @ 03f1e078 */
    FUN_012d0dc8(PTR_DAT_057df630);
    FUN_012d0dc8(PTR_DAT_05807a80);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057a57c8);
    bRam0000000005c380f4 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__Dispose_3e1e1ac();
    puVar3 = PTR_DAT_057df630;
    puVar2 = PTR_DAT_057b8520;
    puVar1 = PTR_DAT_0578b048;
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__Dispose_4106ab0
                (*(long *)(param_1 + 0x20),0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar3);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 03f1e114 to 0401e137 has its CatchHandler @ 03f1e274 */
      if ((lVar5 != 0) &&
         (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057740a0,0),
         puVar2 = PTR_DAT_05807a80, puVar1 = PTR_DAT_05778e88, lVar4 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
                    /* try { // try from 03f1e158 to 0401e163 has its CatchHandler @ 03f1e25c */
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 03f1e16c to 0401e173 has its CatchHandler @ 03f1e26c */
                    /* try { // try from 03f1e17c to 0401e17f has its CatchHandler @ 03f1e268 */
        if ((lVar5 != 0) &&
           (System_Action_DateTime____ctor_1645b6c(lVar5,param_1,*(undefined8 *)PTR_DAT_0576dd28,0),
           lVar4 != 0)) {
                    /* try { // try from 03f1e190 to 0401e193 has its CatchHandler @ 03f1e264 */
                    /* WARNING: Could not recover jumptable at 0x0343cda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057a57c8 + 0x20) + 0xc0) +
                                0x10) + 8))(lVar4,lVar5);
          return;
                    /* try { // try from 03f1e1a4 to 0401e1ab has its CatchHandler @ 03f1e260 */
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

