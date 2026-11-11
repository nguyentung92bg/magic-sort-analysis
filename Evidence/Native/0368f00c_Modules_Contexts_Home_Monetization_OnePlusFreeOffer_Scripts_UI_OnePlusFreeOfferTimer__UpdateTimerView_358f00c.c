/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferTimer$$UpdateTimerView
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferTimer__UpdateTimerView (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferTimer$$UpdateTimerView
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferTimer__UpdateTimerView
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferTimer_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferTimer__UpdateTimerView_358f00c
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  double dVar11;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c32e27 & 1) == 0) {
                    /* try { // try from 0368f030 to 0378f11b has its CatchHandler @ 0368f030
                       catch() { ... } // from try @ 0368f030 with catch @ 0368f030
                       catch() { ... } // from try @ 0368f578 with catch @ 0368f030
                       catch() { ... } // from try @ 0368f7e0 with catch @ 0368f030
                       catch() { ... } // from try @ 0368f904 with catch @ 0368f030
                       catch() { ... } // from try @ 0368f94c with catch @ 0368f030
                       catch() { ... } // from try @ 0368f998 with catch @ 0368f030 */
    FUN_012d0dc8(PTR_DAT_05815878);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c32e27 = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
      (lVar7 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar7 == 0)) ||
     (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar7,*(undefined8 *)PTR_DAT_05815878), lVar7 == 0)) {
LAB_0368f0a0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEndDate_358c140
                    ();
  puVar2 = PTR_DAT_057bc5e8;
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) goto LAB_0368f0a0;
  if ((bRam0000000005c24452 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8,uVar8,0,0);
    FUN_012d0dc8(PTR_DAT_057ac498);
    bRam0000000005c24452 = 1;
  }
  puVar3 = PTR_DAT_057ac498;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  FUN_012d0d74((undefined8 *)(lVar7 + 0x48),0);
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  *(undefined1 *)(lVar7 + 0x40) = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                    (*(undefined8 *)puVar3,0);
  *(undefined8 *)(lVar7 + 0x50) = uVar8;
  FUN_012d0d74();
  puVar2 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c24453 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c24453 = 1;
  }
  puVar3 = PTR_DAT_0576c1b8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = System_DateTime__ToUniversalTime_21016ec(lVar7 + 0x38,0);
  uVar4 = System_DateTime__get_UtcNow_2100638(0);
  System_DateTime__op_Subtraction_2101f60(uVar8,uVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  puVar2 = PTR_DAT_0576c200;
  dVar11 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&stack0xffffffffffffffd8,0);
  iVar1 = -0x80000000;
  if (dVar11 != INFINITY) {
    iVar1 = (int)dVar11;
  }
  if (iVar1 < 0) {
    if ((*(char *)(lVar7 + 0x40) == '\0') && (lVar9 = *(long *)(lVar7 + 0x48), lVar9 != 0)) {
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    }
    *(undefined1 *)(lVar7 + 0x40) = 1;
    Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__StopTimerAnimation_160e254(lVar7);
  }
  else if (*(long *)(lVar7 + 0x30) != 0) {
    Modules_Contexts_Home_UI_Clock_Scripts_ClockAnimationView__Play_2984d00
              (*(long *)(lVar7 + 0x30),0);
  }
  uVar8 = Modules_Infrastructure_Utils_TimeFormatter__FormatDigitalWatchDuration_3de6988(iVar1,0);
  uVar4 = *(undefined8 *)(lVar7 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar2);
  }
  uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    uVar5 = System_String__op_Equality_1ec12e0(uVar8,*(undefined8 *)(lVar7 + 0x50),0);
    if (*(long *)(lVar7 + 0x28) == 0) goto LAB_0170e240;
    uVar10 = 0x41380000;
    if ((uVar5 & 1) == 0) {
      uVar10 = 0x40e00000;
    }
    *(undefined4 *)(*(long *)(lVar7 + 0x28) + 0x28) = uVar10;
  }
  plVar6 = *(long **)(lVar7 + 0x20);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x558))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x560));
    return;
  }
LAB_0170e240:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

