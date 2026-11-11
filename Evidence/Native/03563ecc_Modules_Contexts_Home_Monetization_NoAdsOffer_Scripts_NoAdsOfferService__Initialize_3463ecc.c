/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$Initialize
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__Initialize (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$Initialize
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__Initialize
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__Initialize_3463ecc
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
  undefined8 uVar9;
  long lVar10;
  
  if ((bRam0000000005c32662 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cee48);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0576f7e0);
    FUN_012d0dc8(PTR_DAT_057d4108);
    FUN_012d0dc8(PTR_DAT_0575a510);
    FUN_012d0dc8(PTR_DAT_057ed440);
    FUN_012d0dc8(PTR_DAT_057863f0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05807198);
    bRam0000000005c32662 = 1;
  }
  puVar1 = PTR_DAT_0575a510;
  if (*(long *)(param_1 + 0x28) != 0) {
    Modules_Infrastructure_DI_CustomUpdater__AddIntervalUpdate_3d24448
              (0x41f00000,*(long *)(param_1 + 0x28),param_1,0);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar3 = PTR_DAT_057ed440;
    puVar2 = PTR_DAT_057cee48;
    puVar1 = PTR_DAT_057b8520;
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SecondTimer___ctor_40e4c9c(lVar5,uVar9,0);
      *(long *)(param_1 + 0x38) = lVar5;
      FUN_012d0d74((long *)(param_1 + 0x38),lVar5);
      *(undefined4 *)(param_1 + 0x44) = 1;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar3);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar6 != 0) &&
         (System_Action_Int32Enum____ctor_1646b94(lVar6,param_1,*(undefined8 *)PTR_DAT_0576f7e0,0),
         puVar2 = PTR_DAT_0578b048, puVar1 = PTR_DAT_057863f0, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Subscribe_333d1b8
                  (lVar5,lVar6,*(undefined8 *)PTR_DAT_05807198);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057d4108,0),
           lVar5 != 0)) {
          if ((bRam0000000005c3aa34 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
            bRam0000000005c3aa34 = 1;
          }
          puVar1 = PTR_DAT_0578b048;
          lVar10 = *(long *)(lVar5 + 0x20);
          while ((plVar7 = (long *)System_Delegate__Combine_23e3964(lVar10,lVar6,0),
                 plVar7 == (long *)0x0 || (*plVar7 == *(long *)puVar1))) {
            lVar8 = FUN_01351224((long *)(lVar5 + 0x20),plVar7,lVar10);
            bVar4 = lVar10 == lVar8;
            lVar10 = lVar8;
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

