/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferLobbyButton$$OnDestroy
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton__OnDestroy (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferLobbyButton$$OnDestroy
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton__OnDestroy
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferLobbyButton__OnDestroy_3465148
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c3266e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057ca290);
    FUN_012d0dc8(PTR_DAT_057769d0);
    FUN_012d0dc8(PTR_DAT_0575d7d8);
    FUN_012d0dc8(PTR_DAT_057ce420);
    FUN_012d0dc8(PTR_DAT_05786558);
    FUN_012d0dc8(PTR_DAT_05817488);
    FUN_012d0dc8(PTR_DAT_05769458);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057fb8d0);
    bRam0000000005c3266e = 1;
  }
  puVar4 = PTR_DAT_05817488;
  puVar2 = PTR_DAT_0578b048;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar4);
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar7 != 0) &&
     (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_0575d7d8,0),
     puVar4 = PTR_DAT_05818458, puVar1 = PTR_DAT_05786558, lVar6 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar6,lVar7,0);
    lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if ((lVar7 != 0) &&
       (System_Action_bool____ctor_1645204(lVar7,param_1,*(undefined8 *)PTR_DAT_057ca290,0),
       puVar3 = PTR_DAT_057fb8d0, puVar1 = PTR_DAT_05769458, lVar6 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_bool___Unsubscribe_333cb74
                (lVar6,lVar7,*(undefined8 *)PTR_DAT_057fb8d0);
      lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar7 != 0) &&
         (System_Action_bool____ctor_1645204(lVar7,param_1,*(undefined8 *)PTR_DAT_057ce420,0),
         lVar6 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_bool___Unsubscribe_333cb74
                  (lVar6,lVar7,*(undefined8 *)puVar3);
        lVar7 = *(long *)(param_1 + 0x18);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057769d0,0),
           lVar7 != 0)) {
          if ((bRam0000000005c39420 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
            bRam0000000005c39420 = 1;
          }
          puVar1 = PTR_DAT_0578b048;
          plVar10 = (long *)(lVar7 + 0x38);
          lVar7 = *plVar10;
          while ((plVar8 = (long *)System_Delegate__Remove_23e3b70(lVar7,lVar6,0),
                 plVar8 == (long *)0x0 || (*plVar8 == *(long *)puVar1))) {
            lVar9 = FUN_01351224(plVar10,plVar8,lVar7);
            bVar5 = lVar7 == lVar9;
            lVar7 = lVar9;
            if (bVar5) {
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(plVar8);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

