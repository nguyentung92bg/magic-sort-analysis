/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferView$$Awake
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__Awake (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferView$$Awake
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__Awake
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__Awake_20b17a0
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
  
  puVar1 = PTR_DAT_05780178;
  if ((bRam0000000005c29529 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780178);
    FUN_012d0dc8(PTR_DAT_057e22b8);
    bRam0000000005c29529 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x70);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057e22b8;
  if (lVar6 != 0) {
    System_Action_Int32Enum____ctor_1646b94(lVar6,param_1,*(undefined8 *)PTR_DAT_057e22b8,0);
    if (lVar8 != 0) {
      Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferIAPButton__add_OnIAPButtonClicked_20af26c
                (lVar8,lVar6);
      lVar8 = *(long *)(param_1 + 0x78);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar6 != 0) &&
         (System_Action_Int32Enum____ctor_1646b94(lVar6,param_1,*(undefined8 *)puVar2,0), lVar8 != 0
         )) {
        Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferIAPButton__add_OnIAPButtonClicked_20af26c
                  (lVar8,lVar6);
        lVar8 = *(long *)(param_1 + 0x80);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar6 != 0) &&
           (System_Action_Int32Enum____ctor_1646b94(lVar6,param_1,*(undefined8 *)puVar2,0),
           lVar8 != 0)) {
          Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferIAPButton__add_OnIAPButtonClicked_20af26c
                    (lVar8,lVar6);
          lVar8 = *(long *)(param_1 + 0x88);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if ((lVar6 != 0) &&
             (System_Action_Int32Enum____ctor_1646b94(lVar6,param_1,*(undefined8 *)puVar2,0),
             lVar8 != 0)) {
            if ((bRam0000000005c29512 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_05780178);
              bRam0000000005c29512 = 1;
            }
            puVar1 = PTR_DAT_05780178;
            plVar7 = (long *)(lVar8 + 0x48);
            lVar8 = *plVar7;
            do {
              lVar4 = System_Delegate__Combine_23e3964(lVar8,lVar6,0);
              if (lVar4 == 0) {
                lVar5 = 0;
              }
              else {
                uVar9 = *(undefined8 *)puVar1;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

