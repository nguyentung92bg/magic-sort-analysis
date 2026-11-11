/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemTouchDown
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemTouchDown (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemTouchDown
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemTouchDown
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemTouchDown_4112434
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  float fVar15;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  if ((bRam0000000005c3ac24 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_058164b8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057916a0);
    bRam0000000005c3ac24 = 1;
  }
  if (((*(long *)(param_4 + 0x10) != 0) &&
      (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__SuspendHint_411788c
                 (), param_5 != 0)) && (*(long *)(param_5 + 0x60) != 0)) {
    uVar9 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                      (*(long *)(param_5 + 0x60),0);
    if ((uVar9 & 1) == 0) {
      uVar9 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__IsSelectableAsActiveCell_410efac
                        (param_5);
      puVar1 = PTR_DAT_057b8520;
      if ((uVar9 & 1) != 0) {
        uVar13 = *(undefined8 *)(param_4 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        puVar2 = PTR_DAT_058164b8;
        bVar6 = UnityEngine_Object__op_Equality_407f288(param_5,uVar13,0);
        *(byte *)(param_4 + 0x3c) = bVar6 & 1;
        Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__SetActiveCell_4118448
                  (param_4,param_5);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                           (*(undefined8 *)puVar2);
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0x10) == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057916a0 + 0x20) + 0xc0) +
                                0x20) + 8))(*(long *)(lVar10 + 0x10),1);
          return;
        }
        goto LAB_0421257c;
      }
      if (*(char *)(param_5 + 0x68) == '\0') {
        if ((bRam0000000005c3abe5 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057815e0);
          FUN_012d0dc8(PTR_DAT_057f7f10);
          FUN_012d0dc8(PTR_DAT_0576d610);
          FUN_012d0dc8(PTR_DAT_05772e50);
          FUN_012d0dc8(PTR_DAT_057bc5e8);
          FUN_012d0dc8(PTR_DAT_05818d08);
          FUN_012d0dc8(PTR_DAT_057a3b00);
          FUN_012d0dc8(PTR_DAT_057be8c8);
          FUN_012d0dc8(PTR_DAT_057e2db0);
          FUN_012d0dc8(PTR_DAT_057b8520);
          FUN_012d0dc8(PTR_DAT_05786c70);
          FUN_012d0dc8(PTR_DAT_057606c8);
          FUN_012d0dc8(PTR_DAT_0579e470);
          FUN_012d0dc8(PTR_DAT_0577fe10);
          FUN_012d0dc8(PTR_DAT_057fc1d0);
          FUN_012d0dc8(PTR_DAT_057737a0);
          FUN_012d0dc8(PTR_DAT_057a0a58);
          FUN_012d0dc8(PTR_DAT_05812c18);
          bRam0000000005c3abe5 = 1;
        }
        puVar1 = PTR_DAT_057815e0;
        uStack_98 = 0;
        lStack_90 = 0;
        uStack_a0 = 0;
        if (*(long *)(param_5 + 0xa0) != 0) {
          if (*(int *)(*(long *)(param_5 + 0xa0) + 0x18) == 0) {
            return;
          }
          plVar12 = (long *)(param_5 + 0x70);
          *(undefined1 *)(param_5 + 0x68) = 1;
          if (*plVar12 != 0) {
            DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar12,0,0);
          }
          puVar2 = PTR_DAT_057fc1d0;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar13 = DG_Tweening_DOTween__Sequence_1eda154(0);
          uVar7 = UnityEngine_Component__get_gameObject_408b480(param_5,0);
          uVar13 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                             (uVar13,uVar7,*(undefined8 *)puVar2);
          *(undefined8 *)(param_5 + 0x70) = uVar13;
          FUN_012d0d74(plVar12,uVar13);
          puVar4 = PTR_DAT_057a0a58;
          puVar3 = PTR_DAT_0577fe10;
          puVar2 = PTR_DAT_057737a0;
          puVar1 = PTR_DAT_0576d610;
          if (*(long *)(param_5 + 0xa0) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_b8,*(long *)(param_5 + 0xa0),*(undefined8 *)PTR_DAT_05818d08);
            puVar5 = PTR_DAT_05805c10;
            uStack_98 = uStack_b0;
            uStack_a0 = uStack_b8;
            lStack_90 = lStack_a8;
            while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                     (&uStack_a0,*(undefined8 *)puVar1), lVar10 = lStack_90,
                  (uVar9 & 1) != 0) {
              lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              System_Object___ctor_23dfe5c(lVar8,0);
              plVar14 = (long *)(lVar8 + 0x10);
              *plVar14 = lVar10;
              FUN_012d0d74(plVar14,lVar10);
              if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              lVar10 = *plVar12;
              uVar13 = UnityEngine_Component__get_transform_408b444(*plVar14,0);
              if (cRam0000000005c24e32 == '\0') {
                FUN_012d0dc8(puVar5);
                cRam0000000005c24e32 = '\x01';
              }
              lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
              param_2 = *(float *)(lVar11 + 0x4c) * 15.0;
              param_3 = *(float *)(lVar11 + 0x50) * 15.0;
              uVar13 = DG_Tweening_ShortcutExtensions__DOPunchRotation_1ee7424
                                 (*(float *)(lVar11 + 0x48) * 15.0,param_2,param_3,0x3e800000,
                                  0x3f800000,uVar13,10,0);
              lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              DG_Tweening_TweenCallback___ctor_1ed6da8(lVar11,lVar8,*(undefined8 *)puVar2,0);
              uVar13 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                 (uVar13,lVar11,*(undefined8 *)puVar3);
              DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(lVar10,uVar13,0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_a0,*(undefined8 *)PTR_DAT_057f7f10);
            lVar8 = *plVar12;
            lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
            if (lVar10 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar10,param_5,*(undefined8 *)PTR_DAT_057be8c8,0);
              DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                        (lVar8,lVar10,*(undefined8 *)PTR_DAT_0579e470);
              uVar9 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__HasItem_410f66c
                                (param_5,4);
              if ((uVar9 & 1) == 0) {
                return;
              }
              if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                 (*(undefined8 *)PTR_DAT_057e2db0);
              if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_057bc5e8);
              }
              uVar13 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                                 (*(undefined8 *)PTR_DAT_05812c18,0);
              lVar8 = UnityEngine_Component__get_transform_408b444(param_5,0);
              if (lVar8 != 0) {
                fVar15 = (float)UnityEngine_Transform__get_position_4092b08(lVar8,0);
                if (cRam0000000005c230ac == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230ac = '\x01';
                }
                if (lVar10 != 0) {
                  lVar8 = *(long *)(*(long *)puVar5 + 0xb8);
                  Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object__Vector3___Invoke_333eb10
                            (fVar15 + *(float *)(lVar8 + 0x18) * 1.5,
                             param_2 + *(float *)(lVar8 + 0x1c) * 1.5,
                             param_3 + *(float *)(lVar8 + 0x20) * 1.5,lVar10,uVar13,
                             *(undefined8 *)PTR_DAT_05786c70);
                  return;
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
    else {
      *(undefined1 *)(param_4 + 0x3c) = 0;
    }
    return;
  }
LAB_0421257c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

