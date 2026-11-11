/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferTitle$$Initialize
void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__Initialize (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle_o* __this, System_String_o* headerText, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03566754) */
/* IL2CPP: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI.NoAdsOfferTitle$$Initialize
   void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__Initialize
   (Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle_o* __this,
   System_String_o* headerText, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__Initialize_3465708
               (long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_012d0d74();
  if ((bRam0000000005c32679 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fa730);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_0580c470);
    bRam0000000005c32679 = 1;
  }
  puVar3 = PTR_DAT_057c9ca0;
  plVar8 = (long *)(param_1 + 0x28);
  uVar5 = System_String__IsNullOrWhiteSpace_1ed04c8(*plVar8,0);
  puVar4 = PTR_DAT_057fa730;
  if ((uVar5 & 1) == 0) {
    if (*plVar8 == 0) {
LAB_03566544:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar7 = System_String__Trim_1ed51e0(*plVar8,0);
    *plVar8 = lVar7;
    FUN_012d0d74(plVar8,lVar7);
    lVar9 = *plVar8;
    lVar7 = FUN_012d0e38(*(undefined8 *)puVar4,1);
    if (lVar7 == 0) goto LAB_03566544;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_03566548;
    *(undefined2 *)(lVar7 + 0x20) = 0x20;
    if ((lVar9 == 0) ||
       (lVar7 = System_String__Split_1ed3504(lVar9,lVar7,1,0), puVar4 = PTR_DAT_0580c470, lVar7 == 0
       )) goto LAB_03566544;
    iVar2 = *(int *)(lVar7 + 0x18);
    switch(iVar2) {
    case 0:
      goto code_r0x03566318;
    case 1:
      Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__SetUpperText_346654c
                (param_1,**(undefined8 **)(*(long *)puVar3 + 0xb8));
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_03566548:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar7 = *(long *)(lVar7 + 0x20);
      break;
    case 2:
      Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__SetUpperText_346654c
                (param_1,*(undefined8 *)(lVar7 + 0x20));
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_03566548;
      lVar7 = *(long *)(lVar7 + 0x28);
      break;
    case 3:
      uVar6 = System_String__Concat_1ed10d8
                        (*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)PTR_DAT_0580c470,
                         *(undefined8 *)(lVar7 + 0x28),0);
      Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__SetUpperText_346654c
                (param_1,uVar6);
      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_03566548;
      lVar7 = *(long *)(lVar7 + 0x30);
      break;
    case 4:
      uVar6 = System_String__Concat_1ed10d8
                        (*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)PTR_DAT_0580c470,
                         *(undefined8 *)(lVar7 + 0x28),0);
      Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__SetUpperText_346654c
                (param_1,uVar6);
      if ((*(uint *)(lVar7 + 0x18) < 3) || (*(uint *)(lVar7 + 0x18) == 3)) goto LAB_03566548;
      lVar7 = System_String__Concat_1ed10d8
                        (*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)puVar4,
                         *(undefined8 *)(lVar7 + 0x38),0);
      break;
    default:
      if (cRam0000000005c23dd5 == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c23dd5 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      iVar1 = -0x80000000;
      if ((float)(int)((float)iVar2 * 0.5) != INFINITY) {
        iVar1 = (int)((float)iVar2 * 0.5);
      }
      uVar6 = System_String__Join_1ed19fc(*(undefined8 *)puVar4,lVar7,0,iVar1,0);
      Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__SetUpperText_346654c
                (param_1,uVar6);
      lVar7 = System_String__Join_1ed19fc(*(undefined8 *)puVar4,lVar7,iVar1,iVar2 - iVar1,0);
    }
  }
  else {
code_r0x03566318:
    Modules_Contexts_Home_Monetization_NoAdsOffer_Scripts_UI_NoAdsOfferTitle__SetUpperText_346654c
              (param_1,**(undefined8 **)(*(long *)puVar3 + 0xb8));
    lVar7 = **(long **)(*(long *)puVar3 + 0xb8);
  }
  if ((bRam0000000005c3267b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057974a0);
    FUN_012d0dc8(PTR_DAT_057af350);
    FUN_012d0dc8(PTR_DAT_0580dff8);
    FUN_012d0dc8(PTR_DAT_057faca0);
    bRam0000000005c3267b = 1;
  }
  puVar4 = PTR_DAT_057af350;
  puVar3 = PTR_DAT_057974a0;
  if (lVar7 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&stack0xffffffffffffffc8,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057faca0);
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&stack0xffffffffffffffc8,*(undefined8 *)puVar4);
    if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&stack0xffffffffffffffc8,*(undefined8 *)puVar3);
  }
  return;
}

