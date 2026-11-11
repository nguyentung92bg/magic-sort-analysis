/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferEgoView$$Show
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView__Show (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferEgoView$$Show
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView__Show
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoView__Show_3598b04
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c32e7a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1840);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c32e7a = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057a1840);
    plVar9 = (long *)(param_1 + 0x20);
    *plVar9 = lVar5;
    FUN_012d0d74(plVar9,lVar5);
    if (*plVar9 != 0) {
      iVar3 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferPopupType_35960a8
                        ();
      if ((bRam0000000005c32e7b & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05781c50);
        FUN_012d0dc8(PTR_DAT_057e5f98);
        bRam0000000005c32e7b = 1;
      }
      puVar1 = PTR_DAT_057e5f98;
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        bVar2 = false;
        iVar10 = 0;
        do {
          if (*(int *)(lVar5 + 0x18) <= iVar10) {
            if (bVar2) {
              return;
            }
            lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar5,0,*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_0576aae0;
            if (lVar5 != 0) {
              if ((bRam0000000005c32e71 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_0578b048);
                FUN_012d0dc8(PTR_DAT_057e8f70);
                FUN_012d0dc8(PTR_DAT_057a1840);
                FUN_012d0dc8(PTR_DAT_0576aae0);
                FUN_012d0dc8(PTR_DAT_0575d808);
                bRam0000000005c32e71 = 1;
              }
              lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
              if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
                uVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar7,*(undefined8 *)PTR_DAT_057a1840);
                *(undefined8 *)(lVar5 + 0x98) = uVar4;
                FUN_012d0d74();
                lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
                if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
                  uVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar7,*(undefined8 *)PTR_DAT_057e8f70);
                  *(undefined8 *)(lVar5 + 0xa0) = uVar4;
                  FUN_012d0d74();
                  Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__SetUI_3597980
                            (lVar5);
                  lVar7 = UnityEngine_Component__get_gameObject_408b480(lVar5,0);
                  puVar1 = PTR_DAT_0578b048;
                  if (lVar7 != 0) {
                    UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
                    lVar8 = *(long *)(lVar5 + 0x58);
                    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if ((lVar7 != 0) &&
                       (System_Action___ctor_21239bc(lVar7,lVar5,*(undefined8 *)PTR_DAT_0575d808,0),
                       lVar8 != 0)) {
                      if ((bRam0000000005c3941f & 1) == 0) {
                        FUN_012d0dc8(PTR_DAT_0578b048,lVar7,0);
                        bRam0000000005c3941f = 1;
                      }
                      puVar1 = PTR_DAT_0578b048;
                      plVar9 = (long *)(lVar8 + 0x38);
                      lVar5 = *plVar9;
                      while ((plVar6 = (long *)System_Delegate__Combine_23e3964(lVar5,lVar7,0),
                             plVar6 == (long *)0x0 || (*plVar6 == *(long *)puVar1))) {
                        lVar8 = FUN_01351224(plVar9,plVar6,lVar5);
                        bVar2 = lVar5 == lVar8;
                        lVar5 = lVar8;
                        if (bVar2) {
                          return;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_012d1288(plVar6);
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            break;
          }
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar5,iVar10,*(undefined8 *)puVar1);
          if (lVar5 == 0) break;
          if (iVar3 == iVar10) {
            Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__Show_3597834
                      ();
            bVar2 = true;
          }
          else {
            Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__Hide_359803c
                      ();
          }
          lVar5 = *(long *)(param_1 + 0x18);
          iVar10 = iVar10 + 1;
        } while (lVar5 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

