/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferThemeController$$Show
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__Show (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController_o* __this, int32_t context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferThemeController$$Show
   void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__Show
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController_o*
   __this, int32_t context, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferThemeController__Show_345f9fc
               (long param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
                    /* try { // try from 0355f9fc to 0365fa0f has its CatchHandler @ 0355fa2c */
  puVar3 = PTR_DAT_0576aae0;
                    /* try { // try from 0355fa10 to 0365fa1f has its CatchHandler @ 0355f7f8 */
                    /* try { // try from 0355fa20 to 0365fa23 has its CatchHandler @ 0355fa24 */
  if ((bRam0000000005c32634 & 1) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355fa20 with catch @ 0355fa24
                       try { // try from 0355fa24 to 0365fa47 has its CatchHandler @ 0355f7f8 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355f9f8 with catch @ 0355fa28
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355f9fc with catch @ 0355fa2c
                        */
    FUN_012d0dc8(PTR_DAT_057a1840);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355f9a8 with catch @ 0355fa30
                        */
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c32634 = 1;
  }
                    /* try { // try from 0355fa48 to 0365fa5f has its CatchHandler @ 0355faa0 */
                    /* try { // try from 0355fa60 to 0365fa8f has its CatchHandler @ 0355f7f8 */
  if (((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
      (lVar5 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar5 != 0)) &&
     (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_057a1840), lVar5 != 0)) {
    iVar4 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetThemeType_35967a4
                      (lVar5,0);
    if (*(long *)(lVar5 + 0x10) != 0) {
                    /* try { // try from 0355fa90 to 0365fa9f has its CatchHandler @ 0355faa0 */
      lVar6 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferDataService__GetCachedBackendResponse_3594224
                        (*(long *)(lVar5 + 0x10),0);
      if (lVar6 == 0) {
        uVar7 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0355faa4 with catch @ 0355fab0
                        */
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(lVar6 + 0x30);
        if (lVar9 == 0) {
          uVar7 = 0;
        }
        else {
                    /* catch() { ... } // from try @ 0355fa48 with catch @ 0355faa0
                       catch() { ... } // from try @ 0355fa90 with catch @ 0355faa0 */
          if (lVar6 == 0) goto LAB_0355faec;
                    /* try { // try from 0355faa4 to 0365faa7 has its CatchHandler @ 0355fab0 */
          uVar7 = *(undefined8 *)(lVar9 + 0x20);
                    /* try { // try from 0355faa8 to 0365fab3 has its CatchHandler @ 0355f7f8 */
        }
      }
      uVar7 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetIAPConfigModel_35963f4
                        (lVar5,uVar7,0);
      if ((bRam0000000005c32636 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057f7608);
        FUN_012d0dc8(PTR_DAT_0581a220);
        bRam0000000005c32636 = 1;
      }
      puVar3 = PTR_DAT_0581a220;
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        bVar2 = false;
        iVar10 = 0;
        while (iVar10 < *(int *)(lVar5 + 0x18)) {
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar5,iVar10,*(undefined8 *)puVar3);
          if ((lVar5 == 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_0355fc1c;
          iVar1 = *(int *)(lVar5 + 0x58);
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (*(long *)(param_1 + 0x18),iVar10,*(undefined8 *)puVar3);
          if (lVar5 == 0) goto LAB_0355fc1c;
          if (iVar1 == iVar4) {
            Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Show_345fd8c
                      (lVar5,lVar9,uVar7,param_2);
            bVar2 = true;
          }
          else {
            Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__Hide_345fd68
                      ();
          }
          lVar5 = *(long *)(param_1 + 0x18);
          iVar10 = iVar10 + 1;
          if (lVar5 == 0) goto LAB_0355fc1c;
        }
        if (bVar2) {
          return;
        }
        lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar5,0,*(undefined8 *)puVar3);
        if (lVar5 != 0) {
          if ((bRam0000000005c32638 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057db748);
            FUN_012d0dc8(PTR_DAT_057bf740);
            bRam0000000005c32638 = 1;
          }
          lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar5,0);
          if (lVar6 != 0) {
            UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
            *(undefined8 *)(lVar5 + 0x60) = uVar7;
            *(undefined4 *)(lVar5 + 0x68) = param_2;
            FUN_012d0d74((undefined8 *)(lVar5 + 0x60),uVar7);
            if ((*(long *)(lVar5 + 0x48) != 0) &&
               (Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                          (*(long *)(lVar5 + 0x48),uVar7,0), puVar3 = PTR_DAT_057bf740, lVar9 != 0))
            {
              plVar8 = *(long **)(lVar5 + 0x40);
              uVar7 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&stack0xffffffffffffffcc);
              uVar7 = System_String__Format_1ec10a8(*(undefined8 *)puVar3,uVar7,0);
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
                Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferUIVariant__ShowRewards_345ff60
                          (lVar5,*(undefined8 *)(lVar9 + 0x18));
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
LAB_0355fc1c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_0355faec:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

