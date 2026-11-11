/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferEgoView$$ActivateUIVariant
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView__ActivateUIVariant (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView_o* __this, int32_t popupType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferEgoView$$ActivateUIVariant
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView__ActivateUIVariant
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView_o* __this,
   int32_t popupType, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView__ActivateUIVariant_3598ba4
               (long param_1,int param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  if ((bRam0000000005c32e7b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781c50);
    FUN_012d0dc8(PTR_DAT_057e5f98);
    bRam0000000005c32e7b = 1;
  }
  puVar1 = PTR_DAT_057e5f98;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    bVar2 = false;
    iVar9 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar9) {
        if (bVar2) {
          return;
        }
        lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar4,0,*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0576aae0;
        if (lVar4 != 0) {
          if ((bRam0000000005c32e71 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048);
            FUN_012d0dc8(PTR_DAT_057e8f70);
            FUN_012d0dc8(PTR_DAT_057a1840);
            FUN_012d0dc8(PTR_DAT_0576aae0);
            FUN_012d0dc8(PTR_DAT_0575d808);
            bRam0000000005c32e71 = 1;
          }
          lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
          if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
            uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar6,*(undefined8 *)PTR_DAT_057a1840);
            *(undefined8 *)(lVar4 + 0x98) = uVar3;
            FUN_012d0d74();
            lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
            if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
              uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar6,*(undefined8 *)PTR_DAT_057e8f70);
              *(undefined8 *)(lVar4 + 0xa0) = uVar3;
              FUN_012d0d74();
              Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__SetUI_3597980
                        (lVar4);
              lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar4,0);
              puVar1 = PTR_DAT_0578b048;
              if (lVar6 != 0) {
                UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
                lVar7 = *(long *)(lVar4 + 0x58);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if ((lVar6 != 0) &&
                   (System_Action___ctor_21239bc(lVar6,lVar4,*(undefined8 *)PTR_DAT_0575d808,0),
                   lVar7 != 0)) {
                  if ((bRam0000000005c3941f & 1) == 0) {
                    FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
                    bRam0000000005c3941f = 1;
                  }
                  puVar1 = PTR_DAT_0578b048;
                  plVar8 = (long *)(lVar7 + 0x38);
                  lVar4 = *plVar8;
                  while ((plVar5 = (long *)System_Delegate__Combine_23e3964(lVar4,lVar6,0),
                         plVar5 == (long *)0x0 || (*plVar5 == *(long *)puVar1))) {
                    lVar7 = FUN_01351224(plVar8,plVar5,lVar4);
                    bVar2 = lVar4 == lVar7;
                    lVar4 = lVar7;
                    if (bVar2) {
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_012d1288(plVar5);
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        break;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar9,*(undefined8 *)puVar1);
      if (lVar4 == 0) break;
      if (param_2 == iVar9) {
        Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__Show_3597834
                  ();
        bVar2 = true;
      }
      else {
        Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__Hide_359803c
                  ();
      }
      lVar4 = *(long *)(param_1 + 0x18);
      iVar9 = iVar9 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

