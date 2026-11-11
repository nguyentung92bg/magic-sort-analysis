/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$PlayUnlockAnimationQuick
void Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__PlayUnlockAnimationQuick (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this, UnityEngine_Vector3_o targetPosition, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Key.KeyView$$PlayUnlockAnimationQuick
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__PlayUnlockAnimationQuick
   (Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView_o* __this,
   UnityEngine_Vector3_o targetPosition, float delay, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__PlayUnlockAnimationQuick_248fb14
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,long *param_5
          )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  
  puVar2 = PTR_DAT_05802b98;
  if ((bRam0000000005c2b29b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_057778b8);
    FUN_012d0dc8(PTR_DAT_05802b98);
    bRam0000000005c2b29b = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0576aae0;
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = (long)param_5;
    FUN_012d0d74((long *)(lVar4 + 0x10),param_5);
    *(undefined4 *)(lVar4 + 0x18) = param_1;
    *(undefined4 *)(lVar4 + 0x1c) = param_2;
    *(undefined4 *)(lVar4 + 0x20) = param_3;
    if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
        (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) &&
       (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar5,*(undefined8 *)PTR_DAT_0575c3c8), lVar5 != 0)) {
      auVar17 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleAnimatingSorting_40029bc
                          (lVar5,0x212,0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__SetSorting_248faa0
                (param_5,auVar17._0_8_,auVar17._8_8_);
      plVar12 = (long *)param_5[3];
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      puVar2 = PTR_DAT_057815e0;
      if (plVar12 != (long *)0x0) {
        lVar5 = *plVar12;
        lVar10 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
        uVar16 = *(undefined4 *)(lVar10 + 0xc);
        uVar15 = *(undefined4 *)(lVar10 + 0x10);
        uVar14 = *(undefined4 *)(lVar10 + 0x14);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0575a2d8) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar11 + 7) * 0x10 + 0x138);
              goto LAB_0258fce8;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_0575a2d8,7);
LAB_0258fce8:
        puVar3 = PTR_DAT_057fc1d0;
        puVar1 = PTR_DAT_057606c8;
        (*(code *)*puVar6)(uVar16,uVar15,uVar14,plVar12,puVar6[1]);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
        uVar8 = UnityEngine_Component__get_gameObject_408b480(param_5,0);
        uVar7 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                          (uVar7,uVar8,*(undefined8 *)puVar3);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar4,*(undefined8 *)PTR_DAT_057778b8,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(param_4,uVar7,lVar5,0);
          uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__RotateAnim_248fe38
                            (param_5);
          fVar13 = (float)param_4;
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar13 + 0.75,uVar7,uVar8,0);
          uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_KeyAndLock_Key_KeyView__ScaleAnim_248feb8
                            (param_5);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar13 + _UNK_04359fbc,uVar7,uVar8,0);
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if ((lVar4 != 0) && (param_5 != (long *)0x0)) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar4,param_5,*(undefined8 *)(*param_5 + 0x1d0),0);
            fVar13 = fVar13 + _UNK_0438e934;
            uVar9 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar7,0,1);
            if ((lVar4 != 0) && ((uVar9 & 1) != 0)) {
              DG_Tweening_Sequence__DoInsertCallback_1edffe8(fVar13,uVar7,lVar4);
            }
            return uVar7;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

