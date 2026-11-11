/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$OnRedSnitchPlaceTarget
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__OnRedSnitchPlaceTarget (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$OnRedSnitchPlaceTarget
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__OnRedSnitchPlaceTarget
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__OnRedSnitchPlaceTarget_260e1b4
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2ba0c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_0578d1b0);
    bRam0000000005c2ba0c = 1;
  }
  if ((*(long *)(lVar3 + 0x68) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar3 + 0x68),0), lVar4 != 0))
  {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    if ((*(long *)(lVar3 + 0x70) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar3 + 0x70),0), lVar4 != 0
       )) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
      if (*(long *)(lVar3 + 0x98) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar3 + 0x98),0,0);
        lVar6 = *(long *)(lVar3 + 0x38);
        lVar4 = 0x50;
        if (*(int *)(lVar3 + 0x100) != 1) {
          lVar4 = 0x58;
        }
        if ((lVar6 != 0) && (*(long *)(lVar3 + lVar4) != 0)) {
          UnityEngine_Transform__set_localPosition_4092ce0
                    (*(undefined4 *)(lVar6 + 600),*(undefined4 *)(lVar6 + 0x25c),
                     *(undefined4 *)(lVar6 + 0x260),*(long *)(lVar3 + lVar4),0);
          lVar6 = *(long *)(lVar3 + 0x38);
          lVar4 = 0x50;
          if (*(int *)(lVar3 + 0x100) != 1) {
            lVar4 = 0x58;
          }
          if (lVar6 != 0) {
            lVar4 = *(long *)(lVar3 + lVar4);
            UnityEngine_Quaternion__Internal_FromEulerRad_3831834
                      (*(float *)(lVar6 + 0x264) * _UNK_04339bec,
                       *(float *)(lVar6 + 0x268) * _UNK_04339bec,
                       *(float *)(lVar6 + 0x26c) * _UNK_04339bec,0);
            puVar1 = PTR_DAT_0576aae0;
            if (lVar4 != 0) {
              UnityEngine_Transform__set_localRotation_4092f3c(lVar4,0);
              Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetInsideBottleColor_2612550
                        (lVar3);
              if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
                  (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
                 (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar4,*(undefined8 *)PTR_DAT_0575c3c8), lVar4 != 0)) {
                auVar8 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSnitchWaterSitSortOrder_4002e4c
                                   (lVar4,0);
                Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetSorting_260e660
                          (lVar3,auVar8._0_8_,auVar8._8_8_);
                if ((*(long *)(lVar3 + 0xc0) != 0) &&
                   (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar3 + 0xc0),0)
                   , lVar4 != 0)) {
                  UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
                  lVar4 = UnityEngine_Component__get_transform_408b444(lVar3,0);
                  if (cRam0000000005c230a9 == '\0') {
                    FUN_012d0dc8(PTR_DAT_05805c10);
                    cRam0000000005c230a9 = '\x01';
                  }
                  puVar1 = PTR_DAT_05805c10;
                  if (lVar4 != 0) {
                    lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    UnityEngine_Transform__set_localScale_40932d0
                              (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                               *(undefined4 *)(lVar6 + 0x14),lVar4,0);
                    uVar5 = UnityEngine_Component__get_transform_408b444(lVar3,0);
                    lVar4 = *(long *)(lVar3 + 0x38);
                    if (lVar4 != 0) {
                      fVar7 = *(float *)(lVar4 + 0x29c);
                      if (cRam0000000005c230a9 == '\0') {
                        FUN_012d0dc8(PTR_DAT_05805c10);
                        cRam0000000005c230a9 = '\x01';
                        lVar4 = *(long *)(lVar3 + 0x38);
                        if (lVar4 == 0) goto LAB_0270e49c;
                      }
                      lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
                      uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                        (fVar7 * *(float *)(lVar6 + 0xc),
                                         fVar7 * *(float *)(lVar6 + 0x10),
                                         fVar7 * *(float *)(lVar6 + 0x14),
                                         *(undefined4 *)(lVar4 + 0x2a0),uVar5,0);
                      puVar1 = PTR_DAT_0578d1b0;
                      if (*(long *)(lVar3 + 0x38) != 0) {
                        lVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                          (uVar5,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x2a8),
                                           *(undefined8 *)PTR_DAT_057874c0);
                        uVar5 = UnityEngine_Component__get_gameObject_408b480(lVar3,0);
                        if ((bRam0000000005c2b026 & 1) == 0) {
                          FUN_012d0dc8(PTR_DAT_0576c200,uVar5,*(undefined8 *)puVar1);
                          FUN_012d0dc8(PTR_DAT_05794618);
                          FUN_012d0dc8(PTR_DAT_058163b8);
                          bRam0000000005c2b026 = 1;
                        }
                        if (((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) &&
                           (*(char *)(lVar4 + 0xe9) == '\0')) {
                          if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                          }
                          uVar2 = UnityEngine_Object__op_Equality_407f288(uVar5,0,0);
                          if ((uVar2 & 1) == 0) {
                            lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05794618);
                            puVar1 = PTR_DAT_058163b8;
                            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                            DG_Tweening_Core_TweenLink___ctor_332f2e4(lVar3,uVar5,6,0);
                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                            }
                            DG_Tweening_Core_TweenManager__AddTweenLink_3330cfc(lVar4,lVar3,0);
                          }
                        }
                        return lVar4;
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
LAB_0270e49c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

