/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopup$$Show
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__Show (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferPopup$$Show
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__Show
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__Show_359a0bc
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c32e8a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_057a1840);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05769458);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0577eba8);
    FUN_012d0dc8(PTR_DAT_05807998);
    FUN_012d0dc8(PTR_DAT_0575d2a8);
    bRam0000000005c32e8a = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) &&
     (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_057a1840), lVar6 != 0)) {
    Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__OnPopupOpened_3595908
              ();
    if (param_2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_05807998 + 300);
      if (*(byte *)(*param_2 + 300) < bVar1) {
        param_2 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
               *(long *)PTR_DAT_05807998) {
        param_2 = (long *)0x0;
      }
    }
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    if ((param_2 != (long *)0x0) && (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0)) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendSpecialOfferPopupImpressionStat_1463f34
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),*(undefined4 *)((long)param_2 + 0x24)
                 ,0);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((long)param_2 + 0x24);
      lVar6 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar6 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
        lVar6 = *(long *)(param_1 + 0x18);
        uVar5 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferPopup__GetIAPContext_359a2d0
                          (param_1);
        puVar4 = PTR_DAT_05818458;
        puVar3 = PTR_DAT_057b8520;
        puVar2 = PTR_DAT_05769458;
        if (lVar6 != 0) {
          Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferController__Show_3598d1c
                    (lVar6,uVar5);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          if ((lVar7 != 0) &&
             (System_Action_bool____ctor_1645204(lVar7,param_1,*(undefined8 *)PTR_DAT_0575d2a8,0),
             lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0577eba8 + 0x20) + 0xc0) + 8
                                  ) + 8))(lVar6,lVar7);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

