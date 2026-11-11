/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$CollectIAPConfigModels
void Modules_Contexts_Application_IAP_Scripts_IAPService__CollectIAPConfigModels (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$CollectIAPConfigModels
   void Modules_Contexts_Application_IAP_Scripts_IAPService__CollectIAPConfigModels
   (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPService__CollectIAPConfigModels_138b810
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c23086 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05761150);
    FUN_012d0dc8(PTR_DAT_057c3ab8);
    FUN_012d0dc8(PTR_DAT_057f29f0);
    FUN_012d0dc8(PTR_DAT_05762180);
    FUN_012d0dc8(PTR_DAT_057c1730);
    FUN_012d0dc8(PTR_DAT_057b4938);
    FUN_012d0dc8(PTR_DAT_05815fd0);
    FUN_012d0dc8(PTR_DAT_05817538);
    FUN_012d0dc8(PTR_DAT_05788528);
    FUN_012d0dc8(PTR_DAT_057ba5e0);
    FUN_012d0dc8(PTR_DAT_057aee18);
    FUN_012d0dc8(PTR_DAT_057f8300);
    FUN_012d0dc8(PTR_DAT_057d3338);
    FUN_012d0dc8(PTR_DAT_057964a8);
    FUN_012d0dc8(PTR_DAT_057d6798);
    FUN_012d0dc8(PTR_DAT_057f5ed0);
    FUN_012d0dc8(PTR_DAT_057d2f78);
    FUN_012d0dc8(PTR_DAT_0579cec8);
    FUN_012d0dc8(PTR_DAT_05815c60);
    bRam0000000005c23086 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar11 = Modules_Contexts_Home_Store_Scripts_StoreModelService__GetCoinBundles_24616fc
                         (*(long *)(param_1 + 0x20),0), puVar10 = PTR_DAT_05817538,
     puVar9 = PTR_DAT_05815fd0, puVar8 = PTR_DAT_057f29f0, puVar7 = PTR_DAT_057d2f78,
     puVar6 = PTR_DAT_057c3ab8, puVar5 = PTR_DAT_057ba5e0, puVar4 = PTR_DAT_057b4938,
     puVar3 = PTR_DAT_05788528, puVar2 = PTR_DAT_05762180, puVar1 = PTR_DAT_05761150, lVar11 != 0))
  {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_118,lVar11,*(undefined8 *)PTR_DAT_0579cec8);
    uStack_78 = uStack_110;
    uStack_80 = uStack_118;
    lStack_70 = lStack_108;
    while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_80,*(undefined8 *)puVar9), (uVar12 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar11 = *(long *)(lStack_70 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                (*(long *)(param_1 + 0x78),*(undefined8 *)(lVar11 + 0x10),lVar11,
                 *(undefined8 *)puVar6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar4);
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar11 = Modules_Contexts_Home_Store_Scripts_StoreModelService__GetSpecialBundles_24618b4
                           (*(long *)(param_1 + 0x20),0), lVar11 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_118,lVar11,*(undefined8 *)puVar7);
      uStack_98 = uStack_110;
      uStack_a0 = uStack_118;
      lStack_90 = lStack_108;
      while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_a0,*(undefined8 *)puVar10), (uVar12 & 1) != 0) {
        if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar11 = *(long *)(lStack_90 + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                  (*(long *)(param_1 + 0x78),*(undefined8 *)(lVar11 + 0x10),lVar11,
                   *(undefined8 *)puVar6);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_a0,*(undefined8 *)puVar2);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar11 = Modules_Contexts_Home_Store_Scripts_StoreModelService__GetPermanentBundles_2461a6c
                             (*(long *)(param_1 + 0x20),0), lVar11 != 0)) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_118,lVar11,*(undefined8 *)PTR_DAT_05815c60);
        uStack_b8 = uStack_110;
        uStack_c0 = uStack_118;
        lStack_b0 = lStack_108;
        while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_c0,*(undefined8 *)puVar3), (uVar12 & 1) != 0) {
          if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar11 = *(long *)(lStack_b0 + 0x10);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                    (*(long *)(param_1 + 0x78),*(undefined8 *)(lVar11 + 0x10),lVar11,
                     *(undefined8 *)puVar6);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_c0,*(undefined8 *)PTR_DAT_057c1730);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar11 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetUniqueIAPs_3469354
                               (*(long *)(param_1 + 0x28),0), lVar11 != 0)) {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                    (&uStack_118,lVar11,*(undefined8 *)puVar1);
          uStack_e8 = uStack_110;
          uStack_f0 = uStack_118;
          uStack_d8 = uStack_100;
          lStack_e0 = lStack_108;
          uStack_d0 = uStack_f8;
          while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                    (&uStack_f0,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
            if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                      (*(long *)(param_1 + 0x78),lStack_e0,uStack_d8,*(undefined8 *)puVar6);
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                    (&uStack_f0,*(undefined8 *)puVar8);
          if ((*(long *)(param_1 + 0x30) != 0) &&
             (lVar11 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferUniqueIAPs_3596110
                                 (*(long *)(param_1 + 0x30),0), lVar11 != 0)) {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                      (&uStack_118,lVar11,*(undefined8 *)puVar1);
            uStack_e8 = uStack_110;
            uStack_f0 = uStack_118;
            uStack_d8 = uStack_100;
            lStack_e0 = lStack_108;
            uStack_d0 = uStack_f8;
            while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                      (&uStack_f0,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
              if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                        (*(long *)(param_1 + 0x78),lStack_e0,uStack_d8,*(undefined8 *)puVar6);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                      (&uStack_f0,*(undefined8 *)puVar8);
            if ((*(long *)(param_1 + 0x38) != 0) &&
               (lVar11 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetUniqueIAPConfigModels_3473128
                                   (*(long *)(param_1 + 0x38),0), lVar11 != 0)) {
              System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                        (&uStack_118,lVar11,*(undefined8 *)puVar1);
              uStack_e8 = uStack_110;
              uStack_f0 = uStack_118;
              uStack_d8 = uStack_100;
              lStack_e0 = lStack_108;
              uStack_d0 = uStack_f8;
              while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                        (&uStack_f0,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
                if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                          (*(long *)(param_1 + 0x78),lStack_e0,uStack_d8,*(undefined8 *)puVar6);
              }
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                        (&uStack_f0,*(undefined8 *)puVar8);
              if ((*(long *)(param_1 + 0x40) != 0) &&
                 (lVar11 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetUniqueIAPConfigModels_34645c8
                                     (*(long *)(param_1 + 0x40),0), lVar11 != 0)) {
                System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                          (&uStack_118,lVar11,*(undefined8 *)puVar1);
                uStack_e8 = uStack_110;
                uStack_f0 = uStack_118;
                uStack_d8 = uStack_100;
                lStack_e0 = lStack_108;
                uStack_d0 = uStack_f8;
                while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                          (&uStack_f0,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
                  if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                            (*(long *)(param_1 + 0x78),lStack_e0,uStack_d8,*(undefined8 *)puVar6);
                }
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                          (&uStack_f0,*(undefined8 *)puVar8);
                if ((*(long *)(param_1 + 0x48) != 0) &&
                   (lVar11 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__GetChooseOneSpecialOfferUniqueIAPs_20ad10c
                                       (*(long *)(param_1 + 0x48),0), lVar11 != 0)) {
                  System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                            (&uStack_118,lVar11,*(undefined8 *)puVar1);
                  uStack_e8 = uStack_110;
                  uStack_f0 = uStack_118;
                  uStack_d8 = uStack_100;
                  lStack_e0 = lStack_108;
                  uStack_d0 = uStack_f8;
                  while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                            (&uStack_f0,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
                    if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                              (*(long *)(param_1 + 0x78),lStack_e0,uStack_d8,*(undefined8 *)puVar6);
                  }
                  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                            (&uStack_f0,*(undefined8 *)puVar8);
                  if ((*(long *)(param_1 + 0x50) != 0) &&
                     (lVar11 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetOnePlusFreeOfferUniqueIAPs_358c318
                                         (*(long *)(param_1 + 0x50),0), lVar11 != 0)) {
                    System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                              (&uStack_118,lVar11,*(undefined8 *)puVar1);
                    uStack_e8 = uStack_110;
                    uStack_f0 = uStack_118;
                    uStack_d8 = uStack_100;
                    lStack_e0 = lStack_108;
                    uStack_d0 = uStack_f8;
                    while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                              (&uStack_f0,*(undefined8 *)puVar5), (uVar12 & 1) != 0)
                    {
                      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                                (*(long *)(param_1 + 0x78),lStack_e0,uStack_d8,*(undefined8 *)puVar6
                                );
                    }
                    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                              (&uStack_f0,*(undefined8 *)puVar8);
                    if ((*(long *)(param_1 + 0x58) != 0) &&
                       (lVar11 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetUniqueIAPConfigModels_3305358
                                           (*(long *)(param_1 + 0x58),0), lVar11 != 0)) {
                      System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                                (&uStack_118,lVar11,*(undefined8 *)puVar1);
                      uStack_e8 = uStack_110;
                      uStack_f0 = uStack_118;
                      uStack_d8 = uStack_100;
                      lStack_e0 = lStack_108;
                      uStack_d0 = uStack_f8;
                      while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                                (&uStack_f0,*(undefined8 *)puVar5),
                            (uVar12 & 1) != 0) {
                        if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                                  (*(long *)(param_1 + 0x78),lStack_e0,uStack_d8,
                                   *(undefined8 *)puVar6);
                      }
                      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                                (&uStack_f0,*(undefined8 *)puVar8);
                      if ((*(long *)(param_1 + 0x60) != 0) &&
                         (lVar11 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetUniqueIAPConfigModels_38dc048
                                             (*(long *)(param_1 + 0x60),0), lVar11 != 0)) {
                        System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                                  (&uStack_118,lVar11,*(undefined8 *)puVar1);
                        uStack_e8 = uStack_110;
                        uStack_f0 = uStack_118;
                        uStack_d8 = uStack_100;
                        lStack_e0 = lStack_108;
                        uStack_d0 = uStack_f8;
                        while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                                  (&uStack_f0,*(undefined8 *)puVar5),
                              (uVar12 & 1) != 0) {
                          if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                                    (*(long *)(param_1 + 0x78),lStack_e0,uStack_d8,
                                     *(undefined8 *)puVar6);
                        }
                        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                                  (&uStack_f0,*(undefined8 *)puVar8);
                        if ((*(long *)(param_1 + 0x68) != 0) &&
                           (lVar11 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetUniqueIAPConfigModels_20b5908
                                               (*(long *)(param_1 + 0x68),0), lVar11 != 0)) {
                          System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                                    (&uStack_118,lVar11,*(undefined8 *)puVar1);
                          uStack_e8 = uStack_110;
                          uStack_f0 = uStack_118;
                          uStack_d8 = uStack_100;
                          lStack_e0 = lStack_108;
                          uStack_d0 = uStack_f8;
                          while( true ) {
                            uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                               (&uStack_f0,*(undefined8 *)puVar5);
                            if ((uVar12 & 1) == 0) {
                              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                                        (&uStack_f0,*(undefined8 *)puVar8);
                              return;
                            }
                            if (*(long *)(param_1 + 0x78) == 0) break;
                            System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                                      (*(long *)(param_1 + 0x78),lStack_e0,uStack_d8,
                                       *(undefined8 *)puVar6);
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

