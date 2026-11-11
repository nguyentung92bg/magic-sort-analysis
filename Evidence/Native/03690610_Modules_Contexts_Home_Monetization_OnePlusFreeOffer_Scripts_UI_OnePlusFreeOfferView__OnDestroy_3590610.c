/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$OnDestroy
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__OnDestroy (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$OnDestroy
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__OnDestroy
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__OnDestroy_3590610
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_057d6500;
  if ((bRam0000000005c32e29 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d6500);
    FUN_012d0dc8(PTR_DAT_0576d558);
    bRam0000000005c32e29 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x30);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_0576d558;
  if (lVar6 != 0) {
    System_Action_Int32Enum____ctor_1646b94(lVar6,param_1,*(undefined8 *)PTR_DAT_0576d558,0);
    if (lVar8 != 0) {
      Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferIAPButton__remove_OnIAPButtonClicked_358ea28
                (lVar8,lVar6);
      lVar8 = *(long *)(param_1 + 0x38);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar6 != 0) &&
         (System_Action_Int32Enum____ctor_1646b94(lVar6,param_1,*(undefined8 *)puVar1,0), lVar8 != 0
         )) {
        if ((bRam0000000005c32e16 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057d6500);
          bRam0000000005c32e16 = 1;
        }
        puVar2 = PTR_DAT_057d6500;
        plVar7 = (long *)(lVar8 + 0x48);
        lVar8 = *plVar7;
        do {
          lVar4 = System_Delegate__Remove_23e3b70(lVar8,lVar6,0);
          if (lVar4 == 0) {
            lVar5 = 0;
          }
          else {
            uVar9 = *(undefined8 *)puVar2;
            lVar5 = thunk_FUN_01320d5c(lVar4,uVar9);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d1288(lVar4,uVar9);
            }
          }
          lVar4 = FUN_01351224(plVar7,lVar5,lVar8);
          bVar3 = lVar8 != lVar4;
          lVar8 = lVar4;
        } while (bVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

