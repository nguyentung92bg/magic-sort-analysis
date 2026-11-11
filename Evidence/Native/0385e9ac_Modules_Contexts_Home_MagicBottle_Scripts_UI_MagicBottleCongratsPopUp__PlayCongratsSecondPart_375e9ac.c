/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$PlayCongratsSecondPart
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__PlayCongratsSecondPart (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$PlayCongratsSecondPart
   void 
   Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__PlayCongratsSecondPart
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__PlayCongratsSecondPart_375e9ac
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  
  if ((bRam0000000005c33bac & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057ea090);
    FUN_012d0dc8(PTR_DAT_057d21e0);
    FUN_012d0dc8(PTR_DAT_05759c70);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_0580b168);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_0575f8c8);
    FUN_012d0dc8(PTR_DAT_05797df8);
    bRam0000000005c33bac = 1;
  }
  puVar1 = PTR_DAT_057815e0;
  if (*(long *)(param_1 + 0x78) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x78),0,0);
  }
  puVar2 = PTR_DAT_057b8520;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_05814830;
  uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar9 = (undefined8 *)(param_1 + 0x80);
  *puVar9 = uVar5;
  FUN_012d0d74(puVar9,uVar5);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x58),0),
       puVar1 = PTR_DAT_057606c8, lVar6 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
      uVar5 = *puVar9;
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar6 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057ea090,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar6,0);
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar10 = *(undefined8 *)(param_1 + 0x80);
          uVar5 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x18),0);
          if (*(long *)(param_1 + 0x70) != 0) {
            Modules_Contexts_Home_UI_Common_Scripts_PlayButtonContainer__GetMagicBottleSpritePosition_297ed28
                      (*(long *)(param_1 + 0x70),0);
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar5 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98(uVar5,0,0);
              puVar2 = PTR_DAT_057874c0;
              if (*(long *)(param_1 + 0x28) != 0) {
                uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar5,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x98),
                                   *(undefined8 *)PTR_DAT_057874c0);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar10,uVar5,0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  uVar5 = *(undefined8 *)(param_1 + 0x80);
                  uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xcc);
                  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar6 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar6,param_1,*(undefined8 *)PTR_DAT_057d21e0,0);
                    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                              (uVar12,uVar5,lVar6,0);
                    if (*(long *)(param_1 + 0x18) != 0) {
                      uVar10 = *(undefined8 *)(param_1 + 0x80);
                      uVar5 = UnityEngine_Component__get_transform_408b444
                                        (*(long *)(param_1 + 0x18),0);
                      lVar6 = *(long *)(param_1 + 0x28);
                      if (lVar6 != 0) {
                        uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                          (*(undefined4 *)(lVar6 + 0xc0),
                                           *(undefined4 *)(lVar6 + 0xc4),
                                           *(undefined4 *)(lVar6 + 200),
                                           *(undefined4 *)(lVar6 + 0x94),uVar5,0);
                        if (*(long *)(param_1 + 0x28) != 0) {
                          uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                            (uVar5,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb8)
                                             ,*(undefined8 *)puVar2);
                          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                          puVar3 = PTR_DAT_057984e0;
                          if (lVar6 != 0) {
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar6,param_1,*(undefined8 *)PTR_DAT_05759c70,0);
                            uVar5 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                              (uVar5,lVar6,*(undefined8 *)puVar3);
                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar10,uVar5,0);
                            if (*(long *)(param_1 + 0x28) != 0) {
                              uVar10 = *(undefined8 *)(param_1 + 0x80);
                              uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                                (0,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x6c)
                                                 ,*(undefined8 *)(param_1 + 0x20),0);
                              if (*(long *)(param_1 + 0x28) != 0) {
                                uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                  (uVar5,*(undefined8 *)
                                                          (*(long *)(param_1 + 0x28) + 0x70),
                                                   *(undefined8 *)PTR_DAT_0580b168);
                                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                          (0,uVar10,uVar5,0);
                                if (*(long *)(param_1 + 0x38) != 0) {
                                  uVar10 = *(undefined8 *)(param_1 + 0x80);
                                  uVar5 = TMPro_TextMeshPro__get_transform_38b5900
                                                    (*(long *)(param_1 + 0x38),0);
                                  if (cRam0000000005c230aa == '\0') {
                                    FUN_012d0dc8(PTR_DAT_05805c10);
                                    cRam0000000005c230aa = '\x01';
                                  }
                                  puVar3 = PTR_DAT_05805c10;
                                  if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 0385ed58 to 0395ee2f has its CatchHandler @ 0385ed58
                       catch() { ... } // from try @ 0385ed58 with catch @ 0385ed58
                       catch() { ... } // from try @ 0385ee40 with catch @ 0385ed58
                       catch() { ... } // from try @ 0385ee88 with catch @ 0385ed58
                       catch() { ... } // from try @ 0385eec0 with catch @ 0385ed58 */
                                    puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                                    uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                      (*puVar8,puVar8[1],puVar8[2],
                                                       *(undefined4 *)
                                                        (*(long *)(param_1 + 0x28) + 0xa0),uVar5,0);
                                    if (*(long *)(param_1 + 0x28) != 0) {
                                      uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                        (uVar5,*(undefined8 *)
                                                                (*(long *)(param_1 + 0x28) + 0xa8),
                                                         *(undefined8 *)puVar2);
                                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                (0,uVar10,uVar5,0);
                                      if (*(long *)(param_1 + 0x40) != 0) {
                                        uVar10 = *(undefined8 *)(param_1 + 0x80);
                                        uVar5 = TMPro_TextMeshPro__get_transform_38b5900
                                                          (*(long *)(param_1 + 0x40),0);
                                        if (cRam0000000005c230aa == '\0') {
                                          FUN_012d0dc8(PTR_DAT_05805c10);
                                          cRam0000000005c230aa = '\x01';
                                        }
                                        if (*(long *)(param_1 + 0x28) != 0) {
                                          puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                                          uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                                            (*puVar8,puVar8[1],puVar8[2],
                                                             *(undefined4 *)
                                                              (*(long *)(param_1 + 0x28) + 0xa0),
                                                             uVar5,0);
                                          if (*(long *)(param_1 + 0x28) != 0) {
                                            uVar5 = 
                                                  DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                                            (uVar5,*(undefined8 *)
                                                                    (*(long *)(param_1 + 0x28) +
                                                                    0xa8),*(undefined8 *)puVar2);
                                            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                                                      (0,uVar10,uVar5,0);
                                            puVar2 = PTR_DAT_05797df8;
                                            if (*(long *)(param_1 + 0x28) != 0) {
                                              uVar5 = *(undefined8 *)(param_1 + 0x80);
                                              uVar12 = *(undefined4 *)
                                                        (*(long *)(param_1 + 0x28) + 0xb0);
                                              lVar6 = *(long *)PTR_DAT_05797df8;
                    /* try { // try from 0385ee30 to 0395ee3f has its CatchHandler @ 0385ee6c */
                                              if (*(int *)(lVar6 + 0xe0) == 0) {
                                                thunk_FUN_0130472c();
                                                lVar6 = *(long *)puVar2;
                                              }
                    /* try { // try from 0385ee40 to 0395ee83 has its CatchHandler @ 0385ed58 */
                                              lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                                              if (lVar11 == 0) {
                                                if (*(int *)(lVar6 + 0xe0) == 0) {
                                                  thunk_FUN_0130472c();
                                                  lVar6 = *(long *)puVar2;
                                                }
                                                uVar10 = **(undefined8 **)(lVar6 + 0xb8);
                                                lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0385ee30 with catch @ 0385ee6c
                        */
                                                if (lVar11 == 0) goto LAB_0385eec8;
                    /* try { // try from 0385ee84 to 0395ee87 has its CatchHandler @ 0385eeac */
                    /* try { // try from 0385ee88 to 0395eeaf has its CatchHandler @ 0385ed58 */
                                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                                          (lVar11,uVar10,
                                                           *(undefined8 *)PTR_DAT_0575f8c8,0);
                                                plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8)
                                                                 + 0x10);
                                                *plVar7 = lVar11;
                                                FUN_012d0d74(plVar7,lVar11);
                                              }
                                              uVar4 = 
                                                  DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                                            (uVar5,0,1);
                    /* catch() { ... } // from try @ 0385ee84 with catch @ 0385eeac */
                    /* try { // try from 0385eeb0 to 0395eebf has its CatchHandler @ 0385eed4 */
                    /* try { // try from 0385eec0 to 0395eecb has its CatchHandler @ 0385ed58 */
                                              if ((lVar11 != 0) && ((uVar4 & 1) != 0)) {
                                                DG_Tweening_Sequence__DoInsertCallback_1edffe8
                                                          (uVar12,uVar5,lVar11);
                                              }
                                              return uVar5;
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
    }
  }
LAB_0385eec8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

