/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferAnimationEvent$$PlayFirstColumn
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferAnimationEvent__PlayFirstColumn (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferAnimationEvent_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x021ae90c) */
/* WARNING: Removing unreachable block (ram,0x021ae8fc) */
/* WARNING: Removing unreachable block (ram,0x021ae904) */
/* WARNING: Removing unreachable block (ram,0x021aeaf4) */
/* WARNING: Removing unreachable block (ram,0x021ae918) */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferAnimationEvent$$PlayFirstColumn
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferAnimationEvent__PlayFirstColumn
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferAnimationEvent_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferAnimationEvent__PlayFirstColumn_20ae830
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2952e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f9a60);
    FUN_012d0dc8(PTR_DAT_057c2030);
    FUN_012d0dc8(PTR_DAT_057d8f98);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057c1038);
    FUN_012d0dc8(PTR_DAT_057c8018);
    bRam0000000005c2952e = 1;
  }
  puVar1 = PTR_DAT_057fc1d0;
  lVar10 = *(long *)(lVar4 + 0x38);
  lVar11 = *(long *)(lVar4 + 0x50);
  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar6 = UnityEngine_Component__get_gameObject_408b480(lVar4,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                    (uVar5,uVar6,*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_05805c10;
  puVar2 = PTR_DAT_057c1038;
  puVar1 = PTR_DAT_057606c8;
  if (lVar10 == 0) {
LAB_021aeaf0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (0 < *(int *)(lVar10 + 0x18)) {
    iVar12 = 0;
    fVar13 = 0.0;
    do {
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8018);
      if (lVar7 == 0) goto LAB_021aeaf0;
      System_Object___ctor_23dfe5c(lVar7,0);
      uVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar10,iVar12,*(undefined8 *)PTR_DAT_057c2030);
      if (lVar11 == 0) goto LAB_021aeaf0;
      uVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar11,iVar12,*(undefined8 *)PTR_DAT_057d8f98);
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
      FUN_012d0d74();
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(puVar3);
        cRam0000000005c230a9 = '\x01';
      }
      lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
      uVar6 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                        (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                         *(undefined4 *)(lVar9 + 0x14),*(undefined4 *)(lVar4 + 0xc0),uVar6,0);
      uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar6,*(undefined8 *)(lVar4 + 200),*(undefined8 *)PTR_DAT_057874c0);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar13,uVar5,uVar6,0);
      fVar14 = *(float *)(lVar4 + 0xdc);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar9 == 0) goto LAB_021aeaf0;
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,lVar7,*(undefined8 *)puVar2,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar13 + fVar14,uVar5,lVar9,0);
      iVar12 = iVar12 + 1;
      fVar13 = fVar13 + *(float *)(lVar4 + 0xd4);
    } while (iVar12 < *(int *)(lVar10 + 0x18));
  }
  return;
}

