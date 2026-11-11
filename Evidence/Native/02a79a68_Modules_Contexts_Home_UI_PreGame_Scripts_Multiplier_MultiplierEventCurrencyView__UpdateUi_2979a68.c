/* IL2CPP: Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier.MultiplierEventCurrencyView$$UpdateUi
void Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView__UpdateUi (Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView_o* __this, int32_t difficulty, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier.MultiplierEventCurrencyView$$UpdateUi
   void Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView__UpdateUi
   (Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView_o* __this,
   int32_t difficulty, const MethodInfo* method); */

void Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView__UpdateUi_2979a68
               (long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uStack_2c;
  long lStack_28;
  
  lStack_28 = 0;
  uStack_2c = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar1 = Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__GetEventCurrencySprite_2dd2ef4
                      (*(long *)(param_1 + 0x18),*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x10),0
                      );
    if (lVar4 != 0) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar4,uVar1,0);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0),
         lVar4 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0),
           lVar4 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
          if ((*(long *)(param_1 + 0x40) != 0) &&
             (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
             lVar4 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
            if (*(long *)(param_1 + 0x18) != 0) {
              uVar2 = Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__TryGetMultiplierSpriteConfig_2dd2d60
                                (*(long *)(param_1 + 0x18),param_2,&lStack_28,0);
              if ((uVar2 & 1) != 0) {
                lVar4 = *(long *)(param_1 + 0x48);
                if (lVar4 == 0) goto LAB_02a79cb4;
                if (*(char *)(lVar4 + 0x19) == '\0') {
                  if (*(char *)(lVar4 + 0x18) == '\0') {
                    if ((*(long *)(param_1 + 0x30) == 0) ||
                       (lVar4 = UnityEngine_Component__get_gameObject_408b480
                                          (*(long *)(param_1 + 0x30),0), lVar4 == 0))
                    goto LAB_02a79cb4;
                    UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_02a79cb4;
                    uStack_2c = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14);
                    plVar3 = *(long **)(param_1 + 0x30);
                    uVar1 = System_Int32__ToString_26c9768(&uStack_2c,0);
                    if ((plVar3 == (long *)0x0) ||
                       ((**(code **)(*plVar3 + 0x558))
                                  (plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x560)), lStack_28 == 0))
                    goto LAB_02a79cb4;
                    lVar4 = *(long *)(param_1 + 0x30);
                  }
                  else {
                    if ((*(long *)(param_1 + 0x38) == 0) ||
                       (lVar4 = UnityEngine_Component__get_gameObject_408b480
                                          (*(long *)(param_1 + 0x38),0), lVar4 == 0))
                    goto LAB_02a79cb4;
                    UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_02a79cb4;
                    uStack_2c = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14);
                    plVar3 = *(long **)(param_1 + 0x38);
                    uVar1 = System_Int32__ToString_26c9768(&uStack_2c,0);
                    if ((plVar3 == (long *)0x0) ||
                       ((**(code **)(*plVar3 + 0x558))
                                  (plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x560)), lStack_28 == 0))
                    goto LAB_02a79cb4;
                    lVar4 = *(long *)(param_1 + 0x38);
                  }
                }
                else {
                  if ((*(long *)(param_1 + 0x40) == 0) ||
                     (lVar4 = UnityEngine_Component__get_gameObject_408b480
                                        (*(long *)(param_1 + 0x40),0), lVar4 == 0))
                  goto LAB_02a79cb4;
                  UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_02a79cb4;
                  uStack_2c = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14);
                  plVar3 = *(long **)(param_1 + 0x40);
                  uVar1 = System_Int32__ToString_26c9768(&uStack_2c,0);
                  if ((plVar3 == (long *)0x0) ||
                     ((**(code **)(*plVar3 + 0x558))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x560)),
                     lStack_28 == 0)) goto LAB_02a79cb4;
                  lVar4 = *(long *)(param_1 + 0x40);
                }
                if (lVar4 == 0) goto LAB_02a79cb4;
                TMPro_TMP_Text__set_fontMaterial_3dbc5d0(lVar4,*(undefined8 *)(lStack_28 + 0x50),0);
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_02a79cb4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

