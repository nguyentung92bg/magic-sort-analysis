/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferThemeController$$Hide
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__Hide (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferThemeController$$Hide
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__Hide
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__Hide_345fc20
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c32635 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057af000);
    FUN_012d0dc8(PTR_DAT_0577eae8);
    FUN_012d0dc8(PTR_DAT_057f9498);
    FUN_012d0dc8(PTR_DAT_057daa38);
    bRam0000000005c32635 = 1;
  }
  puVar2 = PTR_DAT_057af000;
  puVar1 = PTR_DAT_0577eae8;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057daa38);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar2);
        return;
      }
      if (lStack_28 == 0) break;
      Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Hide_345fd68
                ();
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

