/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferLobbyButton$$Awake
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton__Awake (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferLobbyButton$$Awake
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton__Awake
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton__Awake_3464ec4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c3266d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0576dc60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057ca290);
    FUN_012d0dc8(PTR_DAT_057769d0);
    FUN_012d0dc8(PTR_DAT_0575d7d8);
    FUN_012d0dc8(PTR_DAT_057ce420);
    FUN_012d0dc8(PTR_DAT_05786558);
    FUN_012d0dc8(PTR_DAT_05817488);
    FUN_012d0dc8(PTR_DAT_05769458);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0577eba8);
    bRam0000000005c3266d = 1;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057769d0,0),
     puVar2 = PTR_DAT_0576aae0, lVar7 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar7,lVar5,0);
    puVar4 = PTR_DAT_05817488;
    puVar3 = PTR_DAT_057b8520;
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) {
      uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_0576dc60);
      *(undefined8 *)(param_1 + 0x30) = uVar6;
      FUN_012d0d74();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar4);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar7 != 0) &&
         (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_0575d7d8,0),
         puVar2 = PTR_DAT_05818458, puVar1 = PTR_DAT_05786558, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar7,0);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar7 != 0) &&
           (System_Action_bool____ctor_1645204(lVar7,param_1,*(undefined8 *)PTR_DAT_057ca290,0),
           puVar3 = PTR_DAT_0577eba8, puVar1 = PTR_DAT_05769458, lVar5 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_bool___Subscribe_333cb60
                    (lVar5,lVar7,*(undefined8 *)PTR_DAT_0577eba8);
          lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if ((lVar7 != 0) &&
             (System_Action_bool____ctor_1645204(lVar7,param_1,*(undefined8 *)PTR_DAT_057ce420,0),
             lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 8) + 8))
                      (lVar5,lVar7);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

