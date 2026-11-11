/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferEgoUIVariantView$$Show
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__Show (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferEgoUIVariantView$$Show
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__Show
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__Show_3597834
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_0576aae0;
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
    *(undefined8 *)(param_1 + 0x98) = uVar3;
    FUN_012d0d74();
    lVar6 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
      uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_057e8f70);
      *(undefined8 *)(param_1 + 0xa0) = uVar3;
      FUN_012d0d74();
      Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__SetUI_3597980
                (param_1);
      lVar6 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      puVar1 = PTR_DAT_0578b048;
      if (lVar6 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
        lVar7 = *(long *)(param_1 + 0x58);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_0575d808,0),
           lVar7 != 0)) {
          if ((bRam0000000005c3941f & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
            bRam0000000005c3941f = 1;
          }
          puVar1 = PTR_DAT_0578b048;
          plVar8 = (long *)(lVar7 + 0x38);
          lVar7 = *plVar8;
          while ((plVar4 = (long *)System_Delegate__Combine_23e3964(lVar7,lVar6,0),
                 plVar4 == (long *)0x0 || (*plVar4 == *(long *)puVar1))) {
            lVar5 = FUN_01351224(plVar8,plVar4,lVar7);
            bVar2 = lVar7 == lVar5;
            lVar7 = lVar5;
            if (bVar2) {
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(plVar4);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

