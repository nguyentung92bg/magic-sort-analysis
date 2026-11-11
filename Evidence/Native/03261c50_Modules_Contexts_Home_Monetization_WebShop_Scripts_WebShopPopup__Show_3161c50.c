/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopup$$Show
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__Show (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopPopup$$Show
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__Show
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__Show_3161c50
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  if ((bRam0000000005c31515 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057aaf88);
    bRam0000000005c31515 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057aaf88 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057aaf88))
    {
      plVar4 = (long *)(param_1 + 0x60);
      *plVar4 = (long)param_2;
      FUN_012d0d74(plVar4,param_2);
      Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPopup__ShowViews_3161f68(param_1);
      if ((*plVar4 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_03261de4;
      Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                (*(long *)(param_1 + 0x30),*(undefined8 *)(*plVar4 + 0x28),0);
      if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_03261de4;
      Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                (*(long *)(param_1 + 0x38),*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),0);
      if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_03261de4;
      Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopPriceView__Show_3161fc4
                (*(long *)(param_1 + 0x40),*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30));
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      puVar2 = PTR_DAT_0576aae0;
      lVar3 = *plVar4;
      if ((lVar3 == 0) || (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0)) goto LAB_03261de4;
      Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopOfferPopupImpressionEvent_1492a3c
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),*(undefined8 *)(lVar3 + 0x28),
                 *(undefined8 *)(lVar3 + 0x30),0);
      if ((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
         ((lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 == 0 ||
          (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar3,*(undefined8 *)PTR_DAT_057f83f8), lVar3 == 0))))
      goto LAB_03261de4;
      Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__OnWebShopPopupShown_3162070
                ();
    }
  }
  lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar3 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar3,1);
    return;
  }
LAB_03261de4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

