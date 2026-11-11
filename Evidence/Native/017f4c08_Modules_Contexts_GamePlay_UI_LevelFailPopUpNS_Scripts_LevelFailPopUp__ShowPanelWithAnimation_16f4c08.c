/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$ShowPanelWithAnimation
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowPanelWithAnimation (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$ShowPanelWithAnimation
   void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowPanelWithAnimation
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowPanelWithAnimation_16f4c08
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0), lVar3 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
       lVar3 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),1,0);
        if (*(long *)(param_1 + 0x38) != 0) {
          DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                    (0,0,0,0x3f000000,0x3f000000,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),0
                    );
          puVar1 = PTR_DAT_057e34f0;
          if (*(long *)(param_1 + 0x40) != 0) {
            uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
            if ((bRam0000000005c322ad & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057d4a60,0);
              FUN_012d0dc8(PTR_DAT_057710a8);
              FUN_012d0dc8(PTR_DAT_057815e0);
              FUN_012d0dc8(PTR_DAT_05798d68);
              FUN_012d0dc8(PTR_DAT_057db880);
              FUN_012d0dc8(PTR_DAT_058020d8);
              FUN_012d0dc8(PTR_DAT_057e34f0);
              bRam0000000005c322ad = 1;
            }
            lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_057d4a60;
            if (lVar3 != 0) {
              System_Object___ctor_23dfe5c(lVar3,0);
              puVar7 = (undefined8 *)(lVar3 + 0x10);
              *puVar7 = uVar4;
              FUN_012d0d74(puVar7,uVar4);
              lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_057710a8;
              if (lVar5 != 0) {
                DG_Tweening_Core_DOGetter_Color____ctor_156c9ec
                          (lVar5,lVar3,*(undefined8 *)PTR_DAT_057db880,0);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                puVar2 = PTR_DAT_05798d68;
                puVar1 = PTR_DAT_057815e0;
                if (lVar6 != 0) {
                  DG_Tweening_Core_DOSetter_Color____ctor_156da1c
                            (lVar6,lVar3,*(undefined8 *)PTR_DAT_058020d8,0);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  uVar4 = DG_Tweening_DOTween__To_1ed8b94(0,0,0,0,0x3f000000,lVar5,lVar6,0);
                  DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                            (uVar4,*puVar7,*(undefined8 *)puVar2);
                  return uVar4;
                }
              }
            }
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

