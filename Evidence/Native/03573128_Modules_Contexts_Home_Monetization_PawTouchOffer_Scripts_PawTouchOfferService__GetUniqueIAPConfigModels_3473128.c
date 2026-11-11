/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$GetUniqueIAPConfigModels
System_Collections_Generic_Dictionary_string__IAPConfigModel__o* Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetUniqueIAPConfigModels (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$GetUniqueIAPConfigModels
   System_Collections_Generic_Dictionary_string__IAPConfigModel__o*
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetUniqueIAPConfigModels
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__GetUniqueIAPConfigModels_3473128
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_0575d9f8;
  if ((bRam0000000005c32705 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dba10);
    FUN_012d0dc8(PTR_DAT_057f5fa8);
    FUN_012d0dc8(PTR_DAT_0575d9f8);
    FUN_012d0dc8(PTR_DAT_057b2840);
    FUN_012d0dc8(PTR_DAT_057a6e48);
    FUN_012d0dc8(PTR_DAT_0578a030);
    FUN_012d0dc8(PTR_DAT_057ab7b0);
    bRam0000000005c32705 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
              (lVar4,*(undefined8 *)PTR_DAT_057f5fa8);
    lVar5 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__get_Config_34725a8
                      (param_1);
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x20) != 0) {
        lVar5 = Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__get_Config_34725a8
                          (param_1);
        puVar3 = PTR_DAT_057dba10;
        puVar2 = PTR_DAT_057b2840;
        puVar1 = PTR_DAT_057a6e48;
        if ((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) goto LAB_0357327c;
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_48,*(long *)(lVar5 + 0x20),*(undefined8 *)PTR_DAT_057ab7b0);
        while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_48,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
          if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                    (lVar4,*(undefined8 *)(lStack_38 + 0x10),lStack_38,*(undefined8 *)puVar3);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar2);
      }
      return lVar4;
    }
  }
LAB_0357327c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

