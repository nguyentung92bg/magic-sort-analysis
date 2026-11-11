/* IL2CPP: Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier.MultiplierEventCurrencyView$$Initialize
void Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView__Initialize (Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView_o* __this, Modules_Contexts_Home_Multiplier_MultiplierEventCurrencyViewModel_o* viewmodel, int32_t type, UnityEngine_Vector3_o position, bool playAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02a79c20) */
/* WARNING: Removing unreachable block (ram,0x02a79c28) */
/* WARNING: Removing unreachable block (ram,0x02a79ba8) */
/* WARNING: Removing unreachable block (ram,0x02a79bb0) */
/* WARNING: Removing unreachable block (ram,0x02a79c90) */
/* WARNING: Removing unreachable block (ram,0x02a79c98) */
/* IL2CPP:
   Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier.MultiplierEventCurrencyView$$Initialize
   void Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView__Initialize
   (Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView_o* __this,
   Modules_Contexts_Home_Multiplier_MultiplierEventCurrencyViewModel_o* viewmodel, int32_t type,
   UnityEngine_Vector3_o position, bool playAnimation, const MethodInfo* method); */

ulong Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView__Initialize_2979878
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                undefined8 param_5,undefined4 param_6,ulong param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_0579ca38;
  if ((bRam0000000005c2d719 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05777ce8);
    FUN_012d0dc8(PTR_DAT_05767b68);
    FUN_012d0dc8(PTR_DAT_0579ca38);
    bRam0000000005c2d719 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_4);
    *(undefined4 *)(lVar3 + 0x18) = param_6;
    lVar4 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
      *(undefined8 *)(param_4 + 0x48) = param_5;
      FUN_012d0d74((undefined8 *)(param_4 + 0x48),param_5);
      lVar4 = UnityEngine_Component__get_transform_408b444(param_4,0);
      if (lVar4 != 0) {
        UnityEngine_Transform__set_position_4092ba8(param_1,param_2,param_3,lVar4,0);
        puVar2 = PTR_DAT_057606c8;
        if ((param_7 & 1) == 0) {
          uVar1 = *(undefined4 *)(lVar3 + 0x18);
          if ((*(long *)(param_4 + 0x48) != 0) && (*(long *)(param_4 + 0x18) != 0)) {
            lVar3 = *(long *)(param_4 + 0x20);
            uVar6 = Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__GetEventCurrencySprite_2dd2ef4
                              (*(long *)(param_4 + 0x18),
                               *(undefined4 *)(*(long *)(param_4 + 0x48) + 0x10),0);
            if (lVar3 != 0) {
              UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar3,uVar6,0);
              if ((*(long *)(param_4 + 0x30) != 0) &&
                 (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x30),0)
                 , lVar3 != 0)) {
                UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
                if ((*(long *)(param_4 + 0x38) != 0) &&
                   (lVar3 = UnityEngine_Component__get_gameObject_408b480
                                      (*(long *)(param_4 + 0x38),0), lVar3 != 0)) {
                  UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
                  if ((*(long *)(param_4 + 0x40) != 0) &&
                     (lVar3 = UnityEngine_Component__get_gameObject_408b480
                                        (*(long *)(param_4 + 0x40),0), lVar3 != 0)) {
                    UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
                    if (*(long *)(param_4 + 0x18) != 0) {
                      uVar5 = Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__TryGetMultiplierSpriteConfig_2dd2d60
                                        (*(long *)(param_4 + 0x18),uVar1,&stack0xffffffffffffffd8,0)
                      ;
                      if ((uVar5 & 1) == 0) {
                        return uVar5;
                      }
                      lVar3 = *(long *)(param_4 + 0x48);
                      if (lVar3 != 0) {
                        if (*(char *)(lVar3 + 0x19) == '\0') {
                          if (*(char *)(lVar3 + 0x18) == '\0') {
                            if (((*(long *)(param_4 + 0x30) != 0) &&
                                (lVar3 = UnityEngine_Component__get_gameObject_408b480
                                                   (*(long *)(param_4 + 0x30),0), lVar3 != 0)) &&
                               (UnityEngine_GameObject__SetActive_408e318(lVar3,1,0),
                               *(long *)(param_4 + 0x48) != 0)) {
                              plVar7 = *(long **)(param_4 + 0x30);
                              uVar6 = System_Int32__ToString_26c9768(&stack0xffffffffffffffd4,0);
                              if (plVar7 != (long *)0x0) {
                                (**(code **)(*plVar7 + 0x558))
                                          (plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
                              }
                            }
                          }
                          else if (((*(long *)(param_4 + 0x38) != 0) &&
                                   (lVar3 = UnityEngine_Component__get_gameObject_408b480
                                                      (*(long *)(param_4 + 0x38),0), lVar3 != 0)) &&
                                  (UnityEngine_GameObject__SetActive_408e318(lVar3,1,0),
                                  *(long *)(param_4 + 0x48) != 0)) {
                            plVar7 = *(long **)(param_4 + 0x38);
                            uVar6 = System_Int32__ToString_26c9768(&stack0xffffffffffffffd4,0);
                            if (plVar7 != (long *)0x0) {
                              (**(code **)(*plVar7 + 0x558))
                                        (plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
                            }
                          }
                        }
                        else if (((*(long *)(param_4 + 0x40) != 0) &&
                                 (lVar3 = UnityEngine_Component__get_gameObject_408b480
                                                    (*(long *)(param_4 + 0x40),0), lVar3 != 0)) &&
                                (UnityEngine_GameObject__SetActive_408e318(lVar3,1,0),
                                *(long *)(param_4 + 0x48) != 0)) {
                          plVar7 = *(long **)(param_4 + 0x40);
                          uVar6 = System_Int32__ToString_26c9768(&stack0xffffffffffffffd4,0);
                          if (plVar7 != (long *)0x0) {
                            (**(code **)(*plVar7 + 0x558))
                                      (plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        DG_Tweening_DOTween__Kill_1eda9a4(param_4,0,0);
        uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_05777ce8;
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_05767b68,0);
          DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar4,0);
          uVar6 = *(undefined8 *)puVar2;
          if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
            *(long *)(uVar5 + 0x30) = param_4;
            FUN_012d0d74((long *)(uVar5 + 0x30),param_4,uVar6);
          }
          return uVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

