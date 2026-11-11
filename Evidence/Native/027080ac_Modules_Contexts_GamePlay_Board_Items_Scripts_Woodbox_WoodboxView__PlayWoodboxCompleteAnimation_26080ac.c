/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxView$$PlayWoodboxCompleteAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__PlayWoodboxCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView_o* __this, System_Collections_Generic_List_BottleItem__o* bottleItems, bool immediate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxView$$PlayWoodboxCompleteAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__PlayWoodboxCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView_o* __this,
   System_Collections_Generic_List_BottleItem__o* bottleItems, bool immediate, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__PlayWoodboxCompleteAnimation_26080ac
          (long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_057a7a18;
  if ((bRam0000000005c2b9c5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057fc8c8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_0579e9f0);
    FUN_012d0dc8(PTR_DAT_057a88d0);
    FUN_012d0dc8(PTR_DAT_057a7a18);
    bRam0000000005c2b9c5 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_1);
    plVar9 = (long *)(param_1 + 0x30);
    if (((*plVar9 != 0) && (param_2 != 0)) && (lVar4 = *(long *)(*plVar9 + 0x78), lVar4 != 0)) {
      lVar4 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodBoxAnimationConfig__GetWoodBoxConfigsForSize_230a658
                        (lVar4,*(int *)(param_2 + 0x18) + -1,0);
      *(int *)(lVar3 + 0x18) = *(int *)(param_2 + 0x18) + -1;
      if (((*plVar9 != 0) && (lVar5 = *(long *)(*plVar9 + 0x60), lVar5 != 0)) &&
         (lVar5 = UnityEngine_Component__get_gameObject_408b480(lVar5,0), lVar5 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
        if (((*plVar9 != 0) && (lVar5 = *(long *)(*plVar9 + 0x68), lVar5 != 0)) &&
           (lVar5 = UnityEngine_Component__get_gameObject_408b480(lVar5,0), lVar5 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
          if ((*plVar9 != 0) && (lVar5 = *(long *)(*plVar9 + 0x60), lVar5 != 0)) {
            UnityEngine_ParticleSystem__Play_3abc5c8(lVar5,0);
            puVar2 = PTR_DAT_057fc1d0;
            puVar1 = PTR_DAT_057815e0;
            if ((*plVar9 != 0) && (lVar5 = *(long *)(*plVar9 + 0x68), lVar5 != 0)) {
              UnityEngine_ParticleSystem__Play_3abc5c8(lVar5,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
              uVar7 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
              uVar6 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                                (uVar6,uVar7,*(undefined8 *)puVar2);
              if ((param_3 & 1) == 0) {
                lVar5 = *plVar9;
                if (((lVar5 == 0) || (lVar8 = *(long *)(lVar5 + 0x78), lVar8 == 0)) || (lVar4 == 0))
                goto LAB_02708620;
                uVar10 = *(undefined4 *)(lVar8 + 0x6c);
                uVar7 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                                  (*(undefined4 *)(lVar8 + 0x70),*(undefined4 *)(lVar8 + 0x74),
                                   *(undefined4 *)(lVar8 + 0x78),*(undefined4 *)(lVar4 + 0x28),
                                   *(undefined8 *)(lVar5 + 0x48),0,0);
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x78), lVar5 == 0))
                goto LAB_02708620;
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar7,*(undefined8 *)(lVar5 + 0x80),
                                   *(undefined8 *)PTR_DAT_057bcc80);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar10,uVar6,uVar7,0);
                lVar5 = *plVar9;
                if ((lVar5 == 0) || (lVar8 = *(long *)(lVar5 + 0x78), lVar8 == 0))
                goto LAB_02708620;
                uVar10 = *(undefined4 *)(lVar8 + 0x6c);
                uVar7 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                  (*(undefined4 *)(lVar8 + 0x88),*(undefined4 *)(lVar8 + 0x8c),
                                   *(undefined4 *)(lVar8 + 0x90),*(undefined4 *)(lVar4 + 0x28),
                                   *(undefined8 *)(lVar5 + 0x48),0);
                puVar1 = PTR_DAT_057874c0;
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x78), lVar5 == 0))
                goto LAB_02708620;
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar7,*(undefined8 *)(lVar5 + 0x98),
                                   *(undefined8 *)PTR_DAT_057874c0);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar10,uVar6,uVar7,0);
                lVar5 = *plVar9;
                if ((lVar5 == 0) || (lVar8 = *(long *)(lVar5 + 0x78), lVar8 == 0))
                goto LAB_02708620;
                uVar10 = *(undefined4 *)(lVar8 + 0x6c);
                uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14
                                  (*(undefined4 *)(lVar8 + 0xa0),*(undefined4 *)(lVar4 + 0x28),
                                   *(undefined8 *)(lVar5 + 0x48),0,0);
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x78), lVar5 == 0))
                goto LAB_02708620;
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar7,*(undefined8 *)(lVar5 + 0xa8),*(undefined8 *)puVar1);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar10,uVar6,uVar7,0);
                puVar2 = PTR_DAT_057fc8c8;
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x50), lVar5 == 0))
                goto LAB_02708620;
                lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (lVar5,*(undefined4 *)(lVar3 + 0x18),
                                   *(undefined8 *)PTR_DAT_057fc8c8);
                if (((lVar5 == 0) || (*plVar9 == 0)) ||
                   (lVar8 = *(long *)(*plVar9 + 0x78), lVar8 == 0)) goto LAB_02708620;
                uVar7 = DG_Tweening_ShortcutExtensions__DOScaleX_1ee67cc
                                  (*(undefined4 *)(lVar8 + 0x54),*(undefined4 *)(lVar4 + 0x10),
                                   *(undefined8 *)(lVar5 + 0x10),0);
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x78), lVar5 == 0))
                goto LAB_02708620;
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar7,*(undefined8 *)(lVar5 + 0x60),*(undefined8 *)puVar1);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
                if ((*plVar9 == 0) ||
                   (((lVar5 = *(long *)(*plVar9 + 0x50), lVar5 == 0 ||
                     (lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                        (lVar5,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)puVar2),
                     lVar5 == 0)) ||
                    ((*plVar9 == 0 || (lVar8 = *(long *)(*plVar9 + 0x78), lVar8 == 0))))))
                goto LAB_02708620;
                uVar7 = DG_Tweening_ShortcutExtensions__DOScaleX_1ee67cc
                                  (*(undefined4 *)(lVar8 + 0x54),*(undefined4 *)(lVar4 + 0x10),
                                   *(undefined8 *)(lVar5 + 0x18),0);
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x78), lVar5 == 0))
                goto LAB_02708620;
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar7,*(undefined8 *)(lVar5 + 0x60),*(undefined8 *)puVar1);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x60), lVar5 == 0))
                goto LAB_02708620;
                uVar7 = UnityEngine_Component__get_transform_408b444(lVar5,0);
                uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                  (-*(float *)(lVar4 + 0x2c),0,0,*(undefined4 *)(lVar4 + 0x10),uVar7
                                   ,0,0);
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x78), lVar5 == 0))
                goto LAB_02708620;
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar7,*(undefined8 *)(lVar5 + 0x60),*(undefined8 *)puVar1);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x68), lVar5 == 0))
                goto LAB_02708620;
                uVar7 = UnityEngine_Component__get_transform_408b444(lVar5,0);
                uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                  (*(undefined4 *)(lVar4 + 0x2c),0,0,*(undefined4 *)(lVar4 + 0x10),
                                   uVar7,0,0);
                if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x78), lVar5 == 0))
                goto LAB_02708620;
                    /* try { // try from 02708554 to 028085ab has its CatchHandler @ 02708554
                       catch() { ... } // from try @ 02708554 with catch @ 02708554
                       catch() { ... } // from try @ 02708624 with catch @ 02708554
                       catch() { ... } // from try @ 02708654 with catch @ 02708554
                       catch() { ... } // from try @ 027086c8 with catch @ 02708554 */
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar7,*(undefined8 *)(lVar5 + 0x60),*(undefined8 *)puVar1);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar7,0);
              }
              puVar1 = PTR_DAT_057606c8;
              lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
              if (lVar5 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar5,lVar3,*(undefined8 *)PTR_DAT_0579e9f0,0);
                    /* try { // try from 027085ac to 02808623 has its CatchHandler @ 02708624 */
                uVar10 = 0;
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar6,lVar5,0);
                if ((param_3 & 1) == 0) {
                  if (lVar4 == 0) goto LAB_02708620;
                  uVar10 = *(undefined4 *)(lVar4 + 0x14);
                }
                lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar4 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar4,lVar3,*(undefined8 *)PTR_DAT_057a88d0,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar10,uVar6,lVar4,0);
                  return uVar6;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02708620:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

