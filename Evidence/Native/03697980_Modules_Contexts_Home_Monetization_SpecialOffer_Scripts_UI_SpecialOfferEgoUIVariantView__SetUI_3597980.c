/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferEgoUIVariantView$$SetUI
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__SetUI (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferEgoUIVariantView$$SetUI
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__SetUI
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__SetUI_3597980
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined4 uStack_34;
  
  if ((bRam0000000005c32e72 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057f99d8);
    FUN_012d0dc8(PTR_DAT_057bf740);
    bRam0000000005c32e72 = 1;
  }
  plVar11 = *(long **)(param_1 + 0xa0);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 10) * 0x10 + 0x138);
          goto LAB_03697a44;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0581aae8,10);
LAB_03697a44:
    lVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x20) == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = *(int *)(*(long *)(lVar7 + 0x20) + 0xd4) == 0;
      }
      if (*(long *)(param_1 + 0x98) != 0) {
        bVar4 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__ShouldShowPlayOnAtEgo_3596a80
                          (*(long *)(param_1 + 0x98),bVar3);
        *(byte *)(param_1 + 0xa8) = bVar4 & 1;
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0),
           lVar7 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar7,*(undefined1 *)(param_1 + 0xa8),0);
          if ((*(long *)(param_1 + 0x50) != 0) &&
             (lVar7 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
             lVar7 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar7,*(char *)(param_1 + 0xa8) == '\0',0);
            puVar2 = PTR_DAT_057db748;
            puVar1 = PTR_DAT_057bf740;
            lVar7 = *(long *)(param_1 + 0x98);
            if (((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) &&
               (lVar8 = *(long *)(*(long *)(lVar7 + 0x10) + 0x18), lVar8 != 0)) {
              lVar8 = *(long *)(lVar8 + 0x18);
              if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x30), lVar8 == 0)) {
                uVar6 = 0;
              }
              else {
                Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferEgoUIVariantView__ShowRewards_3597c2c
                          (param_1,*(undefined8 *)(lVar8 + 0x18));
                uStack_34 = *(undefined4 *)(lVar8 + 0x10);
                plVar11 = *(long **)(param_1 + 0x68);
                uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_34);
                uVar6 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar6,0);
                if (plVar11 == (long *)0x0) goto LAB_03697c28;
                (**(code **)(*plVar11 + 0x558))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x560));
                lVar7 = *(long *)(param_1 + 0x98);
                if (lVar7 == 0) goto LAB_03697c28;
                uVar6 = *(undefined8 *)(lVar8 + 0x20);
              }
              uVar6 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetIAPConfigModel_35963f4
                                (lVar7,uVar6);
              *(undefined8 *)(param_1 + 0x90) = uVar6;
              FUN_012d0d74((undefined8 *)(param_1 + 0x90),uVar6);
              if (*(long *)(param_1 + 0x60) != 0) {
                Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                          (*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x90),0);
                if (*(long *)(param_1 + 0x98) != 0) {
                  uVar6 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetEndDate_3595ed0
                                    ();
                  puVar1 = PTR_DAT_0578b048;
                  if (*(long *)(param_1 + 0x40) != 0) {
                    Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__Initialize_160dfd0
                              (*(long *)(param_1 + 0x40),uVar6,0,0);
                    lVar8 = *(long *)(param_1 + 0x40);
                    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if ((lVar7 != 0) &&
                       (System_Action___ctor_21239bc
                                  (lVar7,param_1,*(undefined8 *)PTR_DAT_057f99d8,0), lVar8 != 0)) {
                      Modules_Contexts_GamePlay_UI_Common_Scripts_Timer__Initialize_160dfd0
                                (lVar8,uVar6,lVar7,0);
                      return;
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
LAB_03697c28:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

