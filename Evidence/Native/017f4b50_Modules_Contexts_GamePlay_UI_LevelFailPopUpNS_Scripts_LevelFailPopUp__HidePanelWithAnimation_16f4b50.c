/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$HidePanelWithAnimation
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__HidePanelWithAnimation (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$HidePanelWithAnimation
   void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__HidePanelWithAnimation
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__HidePanelWithAnimation_16f4b50
          (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0), lVar4 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x50),0),
       lVar4 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),0,0);
        if (*(long *)(param_1 + 0x38) != 0) {
          DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                    (0,0,0,0,0x3f000000,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),0);
          puVar2 = PTR_DAT_057e34f0;
          uVar1 = _DAT_04321768;
          if (*(long *)(param_1 + 0x40) != 0) {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
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
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            puVar2 = PTR_DAT_057d4a60;
            if (lVar4 != 0) {
              System_Object___ctor_23dfe5c(lVar4,0);
              puVar8 = (undefined8 *)(lVar4 + 0x10);
              *puVar8 = uVar5;
              FUN_012d0d74(puVar8,uVar5);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_057710a8;
              if (lVar6 != 0) {
                DG_Tweening_Core_DOGetter_Color____ctor_156c9ec
                          (lVar6,lVar4,*(undefined8 *)PTR_DAT_057db880,0);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                puVar3 = PTR_DAT_05798d68;
                puVar2 = PTR_DAT_057815e0;
                if (lVar7 != 0) {
                  DG_Tweening_Core_DOSetter_Color____ctor_156da1c
                            (lVar7,lVar4,*(undefined8 *)PTR_DAT_058020d8,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  uVar5 = DG_Tweening_DOTween__To_1ed8b94(0,0,0,uVar1,0x3f000000,lVar6,lVar7,0);
                  DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                            (uVar5,*puVar8,*(undefined8 *)puVar3);
                  return uVar5;
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

