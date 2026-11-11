/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$HideAnimation
DG_Tweening_Sequence_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__HideAnimation (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this, UnityEngine_Vector3_o fromPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$HideAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__HideAnimation
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this,
   UnityEngine_Vector3_o fromPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__HideAnimation_3fb1570
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c3905b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c3905b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  uVar8 = *(undefined8 *)(param_4 + 0x50);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar2 = PTR_DAT_05805c10;
  puVar6 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
  uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c(*puVar6,puVar6[1],puVar6[2],0,uVar8,0);
  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar8,0);
  uVar8 = *(undefined8 *)(param_4 + 0x58);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar6 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
  uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c(*puVar6,puVar6[1],puVar6[2],0,uVar8,0);
  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar8,0);
  uVar8 = *(undefined8 *)(param_4 + 0x60);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar6 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
  uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c(*puVar6,puVar6[1],puVar6[2],0,uVar8,0);
  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar8,0);
  uVar8 = *(undefined8 *)(param_4 + 0x48);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  uVar1 = _UNK_0434ccf4;
  puVar6 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
  uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                    (*puVar6,puVar6[1],puVar6[2],_UNK_0434ccf4,uVar8,0);
  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar8,0);
  uVar8 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0(0,uVar1,*(undefined8 *)(param_4 + 0x20),0)
  ;
  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar8,0);
  if ((*(long *)(param_4 + 0x18) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x18),0), lVar5 != 0
     )) {
    uVar8 = UnityEngine_GameObject__get_transform_408e25c(lVar5,0);
    if (*(long *)(param_4 + 0x40) != 0) {
      uVar8 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                        (param_1,param_2,param_3,*(undefined4 *)(*(long *)(param_4 + 0x40) + 0x1d8),
                         uVar8,0,0);
      puVar3 = PTR_DAT_057874c0;
      if (*(long *)(param_4 + 0x40) != 0) {
        uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar8,*(undefined8 *)(*(long *)(param_4 + 0x40) + 0x1e0),
                           *(undefined8 *)PTR_DAT_057874c0);
        uVar1 = _UNK_04339bf8;
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(_UNK_04339bf8,uVar4,uVar8,0);
        if ((*(long *)(param_4 + 0x18) != 0) &&
           (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x18),0),
           lVar5 != 0)) {
          uVar8 = UnityEngine_GameObject__get_transform_408e25c(lVar5,0);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230a9 = '\x01';
          }
          lVar5 = *(long *)(param_4 + 0x40);
          if (lVar5 != 0) {
            fVar9 = *(float *)(lVar5 + 0x1c0);
            lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
            uVar8 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                              (*(float *)(lVar7 + 0xc) * fVar9,*(float *)(lVar7 + 0x10) * fVar9,
                               *(float *)(lVar7 + 0x14) * fVar9,*(undefined4 *)(lVar5 + 0x1d8),uVar8
                               ,0);
            if (*(long *)(param_4 + 0x40) != 0) {
              uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar8,*(undefined8 *)(*(long *)(param_4 + 0x40) + 0x1e0),
                                 *(undefined8 *)puVar3);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar1,uVar4,uVar8,0);
              return uVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

