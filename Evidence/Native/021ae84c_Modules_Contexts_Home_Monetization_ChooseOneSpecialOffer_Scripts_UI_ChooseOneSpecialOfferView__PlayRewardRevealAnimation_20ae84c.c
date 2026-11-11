/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferView$$PlayRewardRevealAnimation
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__PlayRewardRevealAnimation (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView_o* __this, int32_t column, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI.ChooseOneSpecialOfferView$$PlayRewardRevealAnimation
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__PlayRewardRevealAnimation
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView_o*
   __this, int32_t column, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_UI_ChooseOneSpecialOfferView__PlayRewardRevealAnimation_20ae84c
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int iStack_74;
  
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
  if (param_2 == 1) {
    plVar8 = (long *)(param_1 + 0x38);
    plVar10 = (long *)(param_1 + 0x50);
  }
  else if (param_2 == 2) {
    plVar8 = (long *)(param_1 + 0x40);
    plVar10 = (long *)(param_1 + 0x58);
  }
  else {
    if (param_2 != 3) {
      iStack_74 = param_2;
      uVar4 = thunk_FUN_0136d790(PTR_DAT_057db748);
      uVar4 = thunk_FUN_01320a8c(uVar4,&iStack_74);
      thunk_FUN_0136d790(PTR_DAT_057b2d58);
      uVar5 = thunk_FUN_01320e48();
      FUN_0103b554();
      uVar7 = thunk_FUN_0136d790(PTR_DAT_057fa0c8);
      System_ArgumentOutOfRangeException___ctor_21221d0(uVar5,uVar7,uVar4,0,0);
      uVar4 = thunk_FUN_0136d790(PTR_DAT_05804780);
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar5,uVar4);
    }
    plVar8 = (long *)(param_1 + 0x48);
    plVar10 = (long *)(param_1 + 0x60);
  }
  lVar11 = *plVar8;
  lVar12 = *plVar10;
  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar5 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                    (uVar4,uVar5,*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_05805c10;
  puVar2 = PTR_DAT_057c1038;
  puVar1 = PTR_DAT_057606c8;
  if (lVar11 != 0) {
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar13 = 0;
      fVar14 = 0.0;
      do {
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8018);
        if (lVar6 == 0) goto LAB_021aeaf0;
        System_Object___ctor_23dfe5c(lVar6,0);
        uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar11,iVar13,*(undefined8 *)PTR_DAT_057c2030);
        if (lVar12 == 0) goto LAB_021aeaf0;
        uVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar12,iVar13,*(undefined8 *)PTR_DAT_057d8f98);
        *(undefined8 *)(lVar6 + 0x10) = uVar7;
        FUN_012d0d74();
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c230a9 = '\x01';
        }
        lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
        uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                          (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                           *(undefined4 *)(lVar9 + 0x14),*(undefined4 *)(param_1 + 0xc0),uVar5,0);
        uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar5,*(undefined8 *)(param_1 + 200),*(undefined8 *)PTR_DAT_057874c0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar14,uVar4,uVar5,0);
        fVar15 = *(float *)(param_1 + 0xdc);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar9 == 0) goto LAB_021aeaf0;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,lVar6,*(undefined8 *)puVar2,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar14 + fVar15,uVar4,lVar9,0);
        iVar13 = iVar13 + 1;
        fVar14 = fVar14 + *(float *)(param_1 + 0xd4);
      } while (iVar13 < *(int *)(lVar11 + 0x18));
    }
    return;
  }
LAB_021aeaf0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

