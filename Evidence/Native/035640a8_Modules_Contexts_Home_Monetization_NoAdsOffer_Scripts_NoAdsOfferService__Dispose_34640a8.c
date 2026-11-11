/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$Dispose
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__Dispose (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$Dispose
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__Dispose
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__Dispose_34640a8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((bRam0000000005c32663 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cee48);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0576f7e0);
    FUN_012d0dc8(PTR_DAT_057d4108);
    FUN_012d0dc8(PTR_DAT_057ed440);
    FUN_012d0dc8(PTR_DAT_057863f0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057e8230);
    bRam0000000005c32663 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    Modules_Infrastructure_DI_CustomUpdater__RemoveIntervalUpdate_3d247a4
              (*(long *)(param_1 + 0x28),param_1,0);
    puVar3 = PTR_DAT_057ed440;
    puVar2 = PTR_DAT_057cee48;
    puVar1 = PTR_DAT_057b8520;
    if (*(long *)(param_1 + 0x38) != 0) {
      Modules_Infrastructure_Common_Scripts_SecondTimer__Cancel_40e4db0(*(long *)(param_1 + 0x38),0)
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar3);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar6 != 0) &&
         (System_Action_Int32Enum____ctor_1646b94(lVar6,param_1,*(undefined8 *)PTR_DAT_0576f7e0,0),
         puVar2 = PTR_DAT_0578b048, puVar1 = PTR_DAT_057863f0, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Unsubscribe_333d1cc
                  (lVar5,lVar6,*(undefined8 *)PTR_DAT_057e8230);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057d4108,0),
           lVar5 != 0)) {
          if ((bRam0000000005c3aa35 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
            bRam0000000005c3aa35 = 1;
          }
          puVar1 = PTR_DAT_0578b048;
          lVar9 = *(long *)(lVar5 + 0x20);
          while ((plVar7 = (long *)System_Delegate__Remove_23e3b70(lVar9,lVar6,0),
                 plVar7 == (long *)0x0 || (*plVar7 == *(long *)puVar1))) {
            lVar8 = FUN_01351224((long *)(lVar5 + 0x20),plVar7,lVar9);
            bVar4 = lVar9 == lVar8;
            lVar9 = lVar8;
            if (bVar4) {
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(plVar7);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

