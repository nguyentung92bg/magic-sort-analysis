/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferPopup$$Show
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopup__Show (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferPopup$$Show
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopup__Show
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopup_o*
   __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferPopup__Show_20b0318
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2951e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_0581a0a8);
    FUN_012d0dc8(PTR_DAT_05783350);
    FUN_012d0dc8(PTR_DAT_057a4fb0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05769458);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0577eba8);
    bRam0000000005c2951e = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) &&
     (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_057a4fb0), lVar5 != 0)) {
    Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__OnPopupOpened_20acb0c
              ();
    if (param_2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0581a0a8 + 300);
      if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0581a0a8)
         ) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((long)param_2 + 0x24);
      }
    }
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendChooseOnePopUpImpressionEvent_146ff24
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),*(undefined4 *)(param_1 + 0x28),0);
      lVar5 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar5 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
        puVar4 = PTR_DAT_05818458;
        puVar3 = PTR_DAT_057b8520;
        puVar2 = PTR_DAT_05769458;
        if (*(long *)(param_1 + 0x18) != 0) {
          Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferController__Show_20aeba4
                    ();
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          if ((lVar6 != 0) &&
             (System_Action_bool____ctor_1645204(lVar6,param_1,*(undefined8 *)PTR_DAT_05783350,0),
             lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0577eba8 + 0x20) + 0xc0) + 8
                                  ) + 8))(lVar5,lVar6);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

