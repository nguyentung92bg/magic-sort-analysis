/* IL2CPP: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButton$$SelectLobbyButtonVariant
void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButton__SelectLobbyButtonVariant (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI.SpecialOfferLobbyButton$$SelectLobbyButtonVariant
   void 
   Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButton__SelectLobbyButtonVariant
   (Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButton_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_UI_SpecialOfferLobbyButton__SelectLobbyButtonVariant_3599484
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000005c32e83 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5ca0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    FUN_012d0dc8(PTR_DAT_057ad170);
    FUN_012d0dc8(PTR_DAT_0578c878);
    bRam0000000005c32e83 = 1;
  }
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar5 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetSpecialOfferPopupType_35960a8
                      ();
    if (*(long *)(param_1 + 0x48) != 0) {
      iVar6 = Modules_Contexts_Home_Monetization_SpecialOffer_Scripts_SpecialOfferService__GetThemeType_35967a4
                        (*(long *)(param_1 + 0x48));
      puVar4 = PTR_DAT_057a5ca0;
      puVar3 = PTR_DAT_0578c878;
      puVar2 = PTR_DAT_05778ae0;
      if (*(long *)(param_1 + 0x28) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_78,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_057a6c70);
        uStack_58 = uStack_70;
        uStack_60 = uStack_78;
        lStack_50 = lStack_68;
        while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_60,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
          if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          UnityEngine_GameObject__SetActive_408e318(lStack_50,0,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_60,*(undefined8 *)puVar4);
        lVar10 = *(long *)(param_1 + 0x40);
        if (lVar10 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (0 < (int)uVar1) {
            uVar11 = 0;
            do {
              if (uVar1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef8();
              }
              lVar8 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
              if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x18), lVar8 == 0)) goto LAB_0369967c;
              UnityEngine_GameObject__SetActive_408e318(lVar8,0,0);
              uVar1 = *(uint *)(lVar10 + 0x18);
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar1);
          }
          if (iVar6 != 0) {
            lVar10 = *(long *)(param_1 + 0x40);
            if (lVar10 == 0) goto LAB_0369967c;
            if (0 < *(int *)(lVar10 + 0x18)) {
              lVar8 = 0;
              do {
                lVar9 = *(long *)(lVar10 + 0x20 + lVar8 * 8);
                if (lVar9 == 0) goto LAB_0369967c;
                if (*(int *)(lVar9 + 0x10) == iVar6) {
                  lVar10 = *(long *)(lVar9 + 0x18);
                  if (lVar10 == 0) goto LAB_0369967c;
                  goto LAB_03699650;
                }
                lVar8 = lVar8 + 1;
              } while ((int)lVar8 < *(int *)(lVar10 + 0x18));
            }
          }
          lVar10 = *(long *)(param_1 + 0x28);
          if (lVar10 != 0) {
            if (*(int *)(lVar10 + 0x18) <= iVar5) {
              iVar5 = 0;
            }
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar10,iVar5,*(undefined8 *)puVar3);
            if (lVar10 != 0) {
LAB_03699650:
              UnityEngine_GameObject__SetActive_408e318(lVar10,1,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0369967c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

