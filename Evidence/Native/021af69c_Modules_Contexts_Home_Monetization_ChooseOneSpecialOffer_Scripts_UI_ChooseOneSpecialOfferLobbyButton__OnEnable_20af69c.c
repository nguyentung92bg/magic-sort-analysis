/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferLobbyButton$$OnEnable
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton__OnEnable (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferLobbyButton$$OnEnable
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton__OnEnable
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferLobbyButton__OnEnable_20af69c
               (long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000005c29517 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ffcc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c29517 = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x38) + 0x18) != 0)) {
    iVar6 = Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferStateService__GetState_20ae644
                      ();
    puVar5 = PTR_DAT_057ffcc8;
    puVar4 = PTR_DAT_057b8520;
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),iVar6 == 3,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar5);
      if (lVar7 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar7,0);
        if (iVar6 != 3) {
          return;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferTimer__UpdateTimerView_20af904
                    ();
          puVar4 = PTR_DAT_0576aae0;
          lVar7 = *(long *)(param_1 + 0x30);
          if (lVar7 != 0) {
            if ((bRam0000000005c2d72a & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057d9070,0);
              FUN_012d0dc8(PTR_DAT_0576aae0);
              bRam0000000005c2d72a = 1;
            }
            if ((((**(long **)(*(long *)puVar4 + 0xb8) == 0) ||
                 (lVar8 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar8 == 0)) ||
                (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar8,*(undefined8 *)PTR_DAT_057d9070), lVar8 == 0)) ||
               ((*(long *)(lVar8 + 0x18) == 0 ||
                (lVar8 = *(long *)(*(long *)(lVar8 + 0x18) + 0x10), lVar8 == 0)))) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            bVar2 = *(byte *)(lVar8 + 0x3a);
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            lVar8 = *(long *)(lVar7 + 0x18);
            if (lVar8 != 0) {
              if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                uVar12 = 0;
                uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                puVar10 = (undefined8 *)(lVar8 + 0x20);
                do {
                  if (uVar9 <= uVar12) goto LAB_02a7c43c;
                  uStack_40 = puVar10[2];
                  uStack_48 = puVar10[1];
                  uStack_50 = *puVar10;
                  Modules_Contexts_Home_UI_Common_Scripts_LobbyIconVariantController_SpriteRendererVariant__SetIcon_297c444
                            (&uStack_50,bVar2 & 1);
                  uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                  uVar12 = uVar12 + 1;
                  puVar10 = puVar10 + 3;
                } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
              }
              lVar8 = *(long *)(lVar7 + 0x20);
              if (lVar8 != 0) {
                if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                  uVar12 = 0;
                  uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                  do {
                    if (uVar9 <= uVar12) goto LAB_02a7c43c;
                    puVar10 = (undefined8 *)(lVar8 + 0x20 + uVar12 * 0x10);
                    uStack_58 = puVar10[1];
                    uStack_60 = *puVar10;
                    Modules_Contexts_Home_UI_Common_Scripts_LobbyIconVariantController_SizeVariant__SetSize_297c478
                              (&uStack_60,bVar2 & 1);
                    uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                    uVar12 = uVar12 + 1;
                  } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
                }
                puVar10 = *(undefined8 **)(lVar7 + 0x28);
                if (puVar10 != (undefined8 *)0x0) {
                  if (0 < (int)puVar10[3]) {
                    uVar12 = 0;
                    uVar9 = puVar10[3] & 0xffffffff;
                    puVar3 = puVar10;
                    do {
                      if (uVar9 <= uVar12) goto LAB_02a7c43c;
                      uStack_78 = puVar3[5];
                      uStack_80 = puVar3[4];
                      uStack_68 = puVar3[7];
                      uStack_70 = puVar3[6];
                      Modules_Contexts_Home_UI_Common_Scripts_LobbyIconVariantController_PositionVariant__SetPosition_297c508
                                (&uStack_80,bVar2 & 1);
                      uVar9 = (ulong)*(uint *)(puVar10 + 3);
                      uVar12 = uVar12 + 1;
                      puVar3 = puVar3 + 4;
                    } while ((long)uVar12 < (long)(int)*(uint *)(puVar10 + 3));
                  }
                  lVar7 = *(long *)(lVar7 + 0x30);
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(lVar7 + 0x18);
                    if (0 < (int)uVar1) {
                      uVar11 = 0;
                      do {
                        if (uVar1 <= uVar11) {
LAB_02a7c43c:
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef8();
                        }
                        lVar8 = *(long *)(lVar7 + (long)(int)uVar11 * 8 + 0x20);
                        if (lVar8 == 0) goto LAB_02a7c440;
                        UnityEngine_GameObject__SetActive_408e318(lVar8,(bVar2 ^ 1) & 1,0);
                        uVar1 = *(uint *)(lVar7 + 0x18);
                        uVar11 = uVar11 + 1;
                      } while ((int)uVar11 < (int)uVar1);
                    }
                    return;
                  }
                }
              }
            }
LAB_02a7c440:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

