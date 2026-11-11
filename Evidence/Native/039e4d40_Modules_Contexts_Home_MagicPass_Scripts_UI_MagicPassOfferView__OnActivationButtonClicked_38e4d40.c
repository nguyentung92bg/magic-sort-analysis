/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassOfferView$$OnActivationButtonClicked
void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView__OnActivationButtonClicked (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassOfferView$$OnActivationButtonClicked
   void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView__OnActivationButtonClicked
   (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView__OnActivationButtonClicked_38e4d40
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_057b8520;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039e4cb4 with catch @ 039e4d44
                        */
                    /* try { // try from 039e4d5c to 03ae4d73 has its CatchHandler @ 039e4e54 */
  if ((bRam0000000005c34c61 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc218);
                    /* try { // try from 039e4d74 to 03ae4d93 has its CatchHandler @ 039e4c88 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057a02a8);
    FUN_012d0dc8(PTR_DAT_057f0e20);
                    /* try { // try from 039e4d94 to 03ae4dab has its CatchHandler @ 039e4e54 */
    FUN_012d0dc8(PTR_DAT_05790238);
    FUN_012d0dc8(PTR_DAT_057b8520);
                    /* try { // try from 039e4dac to 03ae4dbf has its CatchHandler @ 039e4c88 */
    FUN_012d0dc8(PTR_DAT_058078f0);
    bRam0000000005c34c61 = 1;
  }
  puVar3 = PTR_DAT_05790238;
                    /* try { // try from 039e4dc0 to 03ae4dd7 has its CatchHandler @ 039e4e54 */
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar2 = PTR_DAT_0576aae0;
                    /* try { // try from 039e4dd8 to 03ae4e43 has its CatchHandler @ 039e4c88 */
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  if (lVar5 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
  }
  puVar3 = PTR_DAT_057f0e20;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057dc218);
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar7);
    }
    lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_057a02a8;
                    /* try { // try from 039e4e44 to 03ae4e53 has its CatchHandler @ 039e4e54 */
    if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 039e4d5c with catch @ 039e4e54
                       catch() { ... } // from try @ 039e4d94 with catch @ 039e4e54
                       catch() { ... } // from try @ 039e4dc0 with catch @ 039e4e54
                       catch() { ... } // from try @ 039e4e44 with catch @ 039e4e54 */
                    /* try { // try from 039e4e58 to 03ae4e5b has its CatchHandler @ 039e4e64 */
      uVar6 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetViewModel_38debc4(lVar5);
                    /* try { // try from 039e4e5c to 03ae4e67 has its CatchHandler @ 039e4c88 */
      uVar1 = *(undefined4 *)(param_1 + 0x28);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039e4e58 with catch @ 039e4e64
                        */
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar5 != 0) &&
         (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassBuyPopUpArguments___ctor_38e1e44
                    (lVar5,uVar6,uVar1), lVar7 != 0)) {
        if (*(long *)(lVar7 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_058078f0 + 0x20) + 0xc0) +
                                0x20) + 8))(*(long *)(lVar7 + 0x10),lVar5);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

