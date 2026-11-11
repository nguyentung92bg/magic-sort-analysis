/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$GetUniqueIAPConfigModels
System_Collections_Generic_Dictionary_string__IAPConfigModel__o* Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetUniqueIAPConfigModels (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.NoAdsOfferService$$GetUniqueIAPConfigModels
   System_Collections_Generic_Dictionary_string__IAPConfigModel__o*
   Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetUniqueIAPConfigModels
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetUniqueIAPConfigModels_34645c8
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam0000000005c32668 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_057dba10);
    FUN_012d0dc8(PTR_DAT_057f5fa8);
    FUN_012d0dc8(PTR_DAT_0575d9f8);
    FUN_012d0dc8(PTR_DAT_057e6c10);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_057ccab8);
    bRam0000000005c32668 = 1;
  }
  puVar6 = PTR_DAT_057f5fa8;
  puVar1 = PTR_DAT_0575d9f8;
  lVar7 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                    (param_1);
  puVar4 = PTR_DAT_057ccab8;
  puVar2 = PTR_DAT_057b4910;
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) ||
     (*(long *)(*(long *)(lVar7 + 0x18) + 0x10) == 0)) {
    auStack_44[0] = lVar7 == 0;
    uVar11 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057b4910,auStack_44);
    puVar5 = PTR_DAT_057e6c10;
    puVar3 = PTR_DAT_057c9ca0;
    uVar12 = *(undefined8 *)puVar4;
    if (lVar7 == 0) {
      auStack_48[0] = true;
    }
    else {
      auStack_48[0] = *(long *)(lVar7 + 0x18) == 0;
    }
    uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,auStack_48);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10);
    }
    uVar11 = System_String__Format_1ed15fc(uVar12,uVar11,uVar9,uVar10,0);
    uVar12 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar7 != 0) {
      Modules_Contexts_Application_Events_Scripts_HandledException___ctor_1cb43dc
                (lVar7,uVar11,uVar12,0);
      Modules_Contexts_Application_FirebaseNS_Scripts_FirebaseCrashlyticsWrapper__LogException_1cb4458
                (lVar7,0);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar7 != 0) {
        System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
                  (lVar7,*(undefined8 *)puVar6);
        return lVar7;
      }
    }
  }
  else {
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar7 != 0) {
      System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
                (lVar7,*(undefined8 *)puVar6);
      lVar8 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                        (param_1);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
        uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10);
        lVar8 = Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_NoAdsOfferService__GetConfig_346430c
                          (param_1);
        if (lVar8 != 0) {
          System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                    (lVar7,uVar11,*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_057dba10);
          return lVar7;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

