/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayInstantCardRevealAnimation
DG_Tweening_Tween_o* Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayInstantCardRevealAnimation (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$PlayInstantCardRevealAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayInstantCardRevealAnimation
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__PlayInstantCardRevealAnimation_1384ee8
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lVar8 = *(long *)(param_1 + 0xb0);
  if (lVar8 == 0) {
    return 0;
  }
  uVar12 = 0;
  if ((bRam0000000005c35a22 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0);
    FUN_012d0dc8(PTR_DAT_05769370);
    FUN_012d0dc8(PTR_DAT_057db668);
    FUN_012d0dc8(PTR_DAT_057a7e60);
    FUN_012d0dc8(PTR_DAT_05779ca8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0576bb90);
    FUN_012d0dc8(PTR_DAT_05770998);
    FUN_012d0dc8(PTR_DAT_057e6f38);
    FUN_012d0dc8(PTR_DAT_05774288);
    bRam0000000005c35a22 = 1;
    uVar12 = extraout_x1;
  }
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10,uVar12);
    cRam0000000005c230a9 = '\x01';
  }
  if (*(long *)(lVar8 + 0x18) != 0) {
    fVar18 = *(float *)(*(long *)(lVar8 + 0x18) + 0x70);
    lVar13 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    fVar15 = *(float *)(lVar13 + 0xc);
    fVar16 = *(float *)(lVar13 + 0x10);
    fVar17 = *(float *)(lVar13 + 0x14);
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar12 = DG_Tweening_DOTween__Sequence_1eda154(0);
    puVar7 = PTR_DAT_057e6f38;
    puVar6 = PTR_DAT_057db668;
    puVar5 = PTR_DAT_05774288;
    puVar4 = PTR_DAT_05770998;
    puVar3 = PTR_DAT_0576bb90;
    puVar2 = PTR_DAT_05769370;
    puVar1 = PTR_DAT_057606c8;
    if (*(long *)(lVar8 + 0x78) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_b8,*(long *)(lVar8 + 0x78),*(undefined8 *)PTR_DAT_05779ca8);
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      lStack_90 = lStack_a8;
      while( true ) {
        uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_a0,*(undefined8 *)puVar6);
        if ((uVar9 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_a0,*(undefined8 *)puVar2);
          return uVar12;
        }
        lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Object___ctor_23dfe5c(lVar13,0);
        plVar14 = (long *)(lVar13 + 0x10);
        *plVar14 = lStack_90;
        FUN_012d0d74(plVar14);
        if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar10 = UnityEngine_Component__get_gameObject_408b480(*plVar14,0);
        if (lVar10 == 0) break;
        UnityEngine_GameObject__SetActive_408e318(lVar10,0,0);
        if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar11 = UnityEngine_Component__get_transform_408b444(*plVar14,0);
        lVar10 = *(long *)(lVar8 + 0x18);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar11 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                           (*(undefined4 *)(lVar10 + 0x58),*(undefined4 *)(lVar10 + 0x34),uVar11,0);
        uVar11 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                           (uVar11,0x1b,*(undefined8 *)puVar4);
        uVar11 = DG_Tweening_TweenSettingsExtensions__From_Vector3__Vector3__VectorOptions__2450470
                           (fVar15 * fVar18,fVar16 * fVar18,fVar17 * fVar18,uVar11,1,0,
                            *(undefined8 *)puVar3);
        DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar12,uVar11,0);
        lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar10,lVar13,*(undefined8 *)puVar7,0);
        DG_Tweening_TweenSettingsExtensions__JoinCallback_1eee108(uVar12,lVar10,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

