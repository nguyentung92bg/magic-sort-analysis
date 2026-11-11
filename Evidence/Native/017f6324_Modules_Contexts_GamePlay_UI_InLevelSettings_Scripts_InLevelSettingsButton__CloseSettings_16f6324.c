/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelSettingsButton$$CloseSettings
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__CloseSettings (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelSettingsButton$$CloseSettings
   void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__CloseSettings
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__CloseSettings_16f6324
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c24b81 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f5df0);
    FUN_012d0dc8(PTR_DAT_057ba8b8);
    FUN_012d0dc8(PTR_DAT_057ad170);
    FUN_012d0dc8(PTR_DAT_05793f20);
    FUN_012d0dc8(PTR_DAT_0578c878);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05767198);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_05769930);
    FUN_012d0dc8(PTR_DAT_05807d28);
    bRam0000000005c24b81 = 1;
  }
  *(undefined1 *)(param_1 + 0xa0) = 0;
  lVar8 = *(long *)(param_1 + 0x40);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar6 != 0) &&
     (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057f5df0,0), lVar8 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar8,lVar6,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
       lVar6 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
      lVar6 = *(long *)(param_1 + 0x90);
      if (lVar6 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar6,0,0);
      }
      puVar1 = PTR_DAT_057606c8;
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar7 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                          (*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),
                           *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                           *(float *)(*(long *)(param_1 + 0x30) + 0x28) * 0.5,
                           *(undefined8 *)(param_1 + 0x38),0);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_05767198;
        if (lVar6 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057ba8b8,0);
          uVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                            (uVar7,lVar6,*(undefined8 *)puVar1);
          *(undefined8 *)(param_1 + 0x90) = uVar7;
          FUN_012d0d74((long *)(param_1 + 0x90),uVar7);
          lVar6 = *(long *)(param_1 + 0x88);
          if (lVar6 != 0) {
            DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar6,0,0);
          }
          if (*(long *)(param_1 + 0x28) != 0) {
            uVar7 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x28),0);
            lVar6 = *(long *)(param_1 + 0x30);
            if (lVar6 != 0) {
              fVar14 = -*(float *)(lVar6 + 0x3c);
              fVar15 = -*(float *)(lVar6 + 0x40);
              uVar7 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                                (-*(float *)(lVar6 + 0x38),fVar14,fVar15,
                                 *(undefined4 *)(lVar6 + 0x28),uVar7,1,0);
              puVar1 = PTR_DAT_057815e0;
              if (*(long *)(param_1 + 0x30) != 0) {
                uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar7,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30),
                                   *(undefined8 *)PTR_DAT_057bcc80);
                *(undefined8 *)(param_1 + 0x88) = uVar7;
                FUN_012d0d74((long *)(param_1 + 0x88),uVar7);
                plVar9 = (long *)(param_1 + 0x98);
                if (*plVar9 != 0) {
                  DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar9,0,0);
                }
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
                *(undefined8 *)(param_1 + 0x98) = uVar7;
                FUN_012d0d74(plVar9,uVar7);
                puVar5 = PTR_DAT_05807d28;
                puVar4 = PTR_DAT_05793f20;
                puVar3 = PTR_DAT_0578c878;
                puVar2 = PTR_DAT_057874c0;
                puVar1 = PTR_DAT_05769930;
                if (*(long *)(param_1 + 0xa8) != 0) {
                  iVar10 = *(int *)(*(long *)(param_1 + 0xa8) + 0x18) + -1;
                  if (-1 < iVar10) {
                    fVar16 = 0.0;
                    do {
                      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                      if (lVar6 == 0) goto LAB_017f6760;
                      System_Object___ctor_23dfe5c(lVar6,0);
                      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_017f6760;
                      lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                        (*(long *)(param_1 + 0xa8),iVar10,*(undefined8 *)puVar3);
                      plVar11 = (long *)(lVar6 + 0x10);
                      *plVar11 = lVar8;
                      FUN_012d0d74(plVar11,lVar8);
                      if (*plVar11 == 0) goto LAB_017f6760;
                      lVar12 = *plVar9;
                      uVar7 = UnityEngine_GameObject__get_transform_408e25c(*plVar11,0);
                      lVar8 = *(long *)(param_1 + 0x30);
                      if ((lVar8 == 0) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_017f6760;
                      fVar19 = *(float *)(lVar8 + 0x48);
                      fVar17 = *(float *)(lVar8 + 0x4c);
                      fVar18 = *(float *)(lVar8 + 0x44);
                      fVar13 = (float)System_Collections_Generic_List_Vector3___get_Item_2275a94
                                                (*(long *)(param_1 + 0x18),iVar10,
                                                 *(undefined8 *)puVar4);
                      if (*(long *)(param_1 + 0x30) == 0) goto LAB_017f6760;
                      fVar14 = fVar19 + fVar14;
                      fVar15 = fVar17 + fVar15;
                      uVar7 = DG_Tweening_ShortcutExtensions__DOLocalMove_1ee56a4
                                        (fVar18 + fVar13,fVar14,fVar15,
                                         *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18),uVar7,0,0
                                        );
                      if (*(long *)(param_1 + 0x30) == 0) goto LAB_017f6760;
                      uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                        (uVar7,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20),
                                         *(undefined8 *)puVar2);
                      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar16,lVar12,uVar7,0);
                      if (*(long *)(param_1 + 0x30) == 0) goto LAB_017f6760;
                      fVar13 = *(float *)(*(long *)(param_1 + 0x30) + 0x18);
                      uVar7 = *(undefined8 *)(param_1 + 0x98);
                      lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                      if (lVar8 == 0) goto LAB_017f6760;
                      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,lVar6,*(undefined8 *)puVar1,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (fVar16 + fVar13,uVar7,lVar8,0);
                      if (*(long *)(param_1 + 0x30) == 0) goto LAB_017f6760;
                      iVar10 = iVar10 + -1;
                      fVar16 = fVar16 + *(float *)(*(long *)(param_1 + 0x30) + 0x1c);
                    } while (-1 < iVar10);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_017f6760:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

