/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferLobbyButton$$OnEnable
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton__OnEnable (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferLobbyButton$$OnEnable
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton__OnEnable
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferLobbyButton__OnEnable_358eda8
               (long param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined8 uStack_28;
  
  if ((bRam0000000005c32e1a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ffcc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c32e1a = 1;
  }
  if (((*(long *)(param_1 + 0x38) == 0) ||
      (lVar8 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetLobbyButtonViewModel_358d89c
                         (), lVar8 == 0)) || (*(long *)(param_1 + 0x28) == 0)) {
LAB_0368ee8c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  cVar2 = *(char *)(lVar8 + 0x10);
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),cVar2 != '\0',0);
  puVar4 = PTR_DAT_057ffcc8;
  puVar3 = PTR_DAT_057b8520;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_0368ee8c;
  UnityEngine_GameObject__SetActive_408e318
            (*(long *)(param_1 + 0x30),*(undefined1 *)(lVar8 + 0x11),0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar4);
  if (lVar8 == 0) goto LAB_0368ee8c;
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar8,0);
  puVar3 = PTR_DAT_0576aae0;
  if (cVar2 == '\0') {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) goto LAB_0368ee8c;
  if ((bRam0000000005c32e27 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05815878);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c32e27 = 1;
  }
  if (((**(long **)(*(long *)puVar3 + 0xb8) == 0) ||
      (lVar9 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar9 == 0)) ||
     (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar9,*(undefined8 *)PTR_DAT_05815878), lVar9 == 0)) {
LAB_0368f0a0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar10 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetEndDate_358c140
                     ();
  puVar3 = PTR_DAT_057bc5e8;
  lVar8 = *(long *)(lVar8 + 0x18);
  if (lVar8 == 0) goto LAB_0368f0a0;
  if ((bRam0000000005c24452 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8,uVar10,0,0);
    FUN_012d0dc8(PTR_DAT_057ac498);
    bRam0000000005c24452 = 1;
  }
  puVar4 = PTR_DAT_057ac498;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  FUN_012d0d74((undefined8 *)(lVar8 + 0x48),0);
  *(undefined8 *)(lVar8 + 0x38) = uVar10;
  *(undefined1 *)(lVar8 + 0x40) = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar10 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                     (*(undefined8 *)puVar4,0);
  *(undefined8 *)(lVar8 + 0x50) = uVar10;
  FUN_012d0d74();
  puVar3 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c24453 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
    bRam0000000005c24453 = 1;
  }
  puVar4 = PTR_DAT_0576c1b8;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar10 = System_DateTime__ToUniversalTime_21016ec(lVar8 + 0x38,0);
  uVar5 = System_DateTime__get_UtcNow_2100638(0);
  uStack_28 = System_DateTime__op_Subtraction_2101f60(uVar10,uVar5,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar4);
  }
  puVar3 = PTR_DAT_0576c200;
  dVar12 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_28,0);
  iVar1 = -0x80000000;
  if (dVar12 != INFINITY) {
    iVar1 = (int)dVar12;
  }
  if (iVar1 < 0) {
    if ((*(char *)(lVar8 + 0x40) == '\0') && (lVar9 = *(long *)(lVar8 + 0x48), lVar9 != 0)) {
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    }
    *(undefined1 *)(lVar8 + 0x40) = 1;
    Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__StopTimerAnimation_160e254(lVar8);
  }
  else if (*(long *)(lVar8 + 0x30) != 0) {
    Modules_Contexts_Home_UI_Clock_Scripts_ClockAnimationView__Play_2984d00
              (*(long *)(lVar8 + 0x30),0);
  }
  uVar10 = Modules_Infrastructure_Utils_TimeFormatter__FormatDigitalWatchDuration_3de6988(iVar1,0);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    uVar6 = System_String__op_Equality_1ec12e0(uVar10,*(undefined8 *)(lVar8 + 0x50),0);
    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0170e240;
    uVar11 = 0x41380000;
    if ((uVar6 & 1) == 0) {
      uVar11 = 0x40e00000;
    }
    *(undefined4 *)(*(long *)(lVar8 + 0x28) + 0x28) = uVar11;
  }
  plVar7 = *(long **)(lVar8 + 0x20);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x558))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x560));
    return;
  }
LAB_0170e240:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

