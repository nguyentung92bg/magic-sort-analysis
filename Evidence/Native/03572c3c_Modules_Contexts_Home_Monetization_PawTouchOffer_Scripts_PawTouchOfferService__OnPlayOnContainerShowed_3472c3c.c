/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$OnPlayOnContainerShowed
void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__OnPlayOnContainerShowed (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferPackage_o* offerPackage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$OnPlayOnContainerShowed
   void 
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__OnPlayOnContainerShowed
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this,
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferPackage_o* offerPackage,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__OnPlayOnContainerShowed_3472c3c
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  if ((bRam0000000005c32702 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814758);
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    bRam0000000005c32702 = 1;
  }
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferRemoteService__CancelRequests_3471700
              ();
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar3 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__IsShowed_3471270
                        ();
      puVar1 = PTR_DAT_057ece38;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_0580b9d0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uStack_48 = System_DateTime__get_UtcNow_2100638(0);
        lVar4 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__get_Config_34725a8
                          (param_1);
        puVar2 = PTR_DAT_05814758;
        if (lVar4 == 0) goto LAB_03572e14;
        uVar5 = System_DateTime__AddSeconds_20ff238((double)*(int *)(lVar4 + 0x1c),&uStack_48,0);
        uVar6 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetEndDateTime_3472a38
                          (param_1);
        uVar3 = System_DateTime__op_LessThanOrEqual_2102104(uVar5,uVar6,0);
        if ((uVar3 & 1) == 0) {
          uVar5 = uVar6;
        }
        uStack_70 = 0;
        uStack_68 = 0;
        System_DateTimeOffset___ctor_2103064(&uStack_70,uVar5,0);
        uStack_58 = uStack_68;
        uStack_60 = uStack_70;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar5 = System_DateTimeOffset__ToUnixTimeSeconds_21054c8(&uStack_60,0);
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_03572e14;
        Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__SetShowEndDate_34712e8
                  (*(long *)(param_1 + 0x10),uVar5);
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_03572e14;
        Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferDataService__SetIsShowed_3471294
                  (*(long *)(param_1 + 0x10),1);
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_03572e14;
        Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferStateService__GetState_34743ac
                  ();
        if (cRam0000000005c230a8 == '\0') {
          FUN_012d0dc8(PTR_DAT_057ece38);
          cRam0000000005c230a8 = '\x01';
        }
        lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar4 == 0) goto LAB_03572e14;
        Modules_Contexts_Application_Events_Scripts_EventSender__SendPawTouchOfferContainerFirstImpressionStat_14670dc
                  (lVar4,param_2,0);
      }
      if (cRam0000000005c230a8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057ece38);
        cRam0000000005c230a8 = '\x01';
      }
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 != 0) {
        Modules_Contexts_Application_Events_Scripts_EventSender__SendPawTouchOfferContainerImpressionStat_1466834
                  (lVar4,param_2,0);
        return;
      }
    }
  }
LAB_03572e14:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

