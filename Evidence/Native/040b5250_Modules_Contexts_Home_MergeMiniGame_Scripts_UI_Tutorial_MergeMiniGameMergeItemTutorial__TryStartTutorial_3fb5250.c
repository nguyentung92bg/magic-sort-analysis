/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$TryStartTutorial
System_Threading_Tasks_Task_bool__o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__TryStartTutorial (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$TryStartTutorial
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__TryStartTutorial
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__TryStartTutorial_3fb5250
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3907e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057973b0);
    FUN_012d0dc8(PTR_DAT_057d64c8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057611b0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057c2a10);
    FUN_012d0dc8(PTR_DAT_058003d8);
    FUN_012d0dc8(PTR_DAT_057f41b8);
    FUN_012d0dc8(PTR_DAT_0576ae60);
    FUN_012d0dc8(PTR_DAT_05798298);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05777ce8);
    FUN_012d0dc8(PTR_DAT_057d4590);
    FUN_012d0dc8(PTR_DAT_05810ee8);
    bRam0000000005c3907e = 1;
  }
  puVar6 = (undefined8 *)(param_4 + 0x70);
  uVar8 = *puVar6;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Equality_407f288(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_4 + 0x78);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Equality_407f288(uVar8,0,0);
    if ((uVar4 & 1) != 0) goto LAB_040b5398;
  }
  else {
LAB_040b5398:
    uVar8 = *puVar6;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__ResetCell_3fb5768
                (param_4,*(undefined8 *)(param_4 + 0x70));
      *(undefined8 *)(param_4 + 0x70) = 0;
      FUN_012d0d74(puVar6,0);
    }
    puVar9 = (undefined8 *)(param_4 + 0x78);
    uVar8 = *puVar9;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__ResetCell_3fb5768
                (param_4,*(undefined8 *)(param_4 + 0x78));
      *(undefined8 *)(param_4 + 0x78) = 0;
      FUN_012d0d74(puVar9,0);
    }
    uVar4 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__TryGetMergeableCells_3fb593c
                      (param_4,puVar6,puVar9);
    puVar2 = PTR_DAT_0576ae60;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_05798298 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar10 = *(long *)puVar2;
      lVar12 = **(long **)(lVar10 + 0x38);
      if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
        lVar12 = FUN_0131942c(lVar12);
      }
      lVar12 = thunk_FUN_01320e48(lVar12);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(*(long *)(lVar10 + 0x38) + 8) + 8))(lVar12,0);
        return lVar12;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  if ((*(long *)(param_4 + 0x28) != 0) &&
     (lVar12 = *(long *)(*(long *)(param_4 + 0x28) + 0x20), lVar12 != 0)) {
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar4 = 0;
      uVar5 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar10 = *(long *)(lVar12 + 0x20 + uVar4 * 8);
        uVar8 = *puVar6;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar5 = UnityEngine_Object__op_Equality_407f288(lVar10,uVar8,0);
        if ((uVar5 & 1) == 0) {
          uVar8 = *(undefined8 *)(param_4 + 0x78);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar5 = UnityEngine_Object__op_Equality_407f288(lVar10,uVar8,0);
          if ((uVar5 & 1) == 0) {
            if ((lVar10 == 0) || (*(long *)(lVar10 + 0x60) == 0)) goto LAB_040b5760;
            Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                      (*(long *)(lVar10 + 0x60),param_4,0);
          }
        }
        uVar5 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f41b8);
    if (lVar12 != 0) {
      System_Threading_Tasks_TaskCompletionSource_bool____ctor_1db4b60
                (lVar12,*(undefined8 *)PTR_DAT_057c2a10);
      plVar7 = (long *)(param_4 + 0x80);
      *plVar7 = lVar12;
      FUN_012d0d74(plVar7,lVar12);
      Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__HighlightCell_3fb5ce0
                (param_4,*(undefined8 *)(param_4 + 0x70));
      Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__HighlightCell_3fb5ce0
                (param_4,*(undefined8 *)(param_4 + 0x78));
      if ((*(long *)(param_4 + 0x30) != 0) &&
         (lVar12 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x30),0),
         lVar12 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar12,1,0);
        if (*(long *)(param_4 + 0x38) != 0) {
          UnityEngine_Animation__Stop_1f79ea8
                    (*(long *)(param_4 + 0x38),*(undefined8 *)PTR_DAT_057d4590,0);
          if (*(long *)(param_4 + 0x38) != 0) {
            UnityEngine_Animation__Play_1f7a100
                      (*(long *)(param_4 + 0x38),*(undefined8 *)PTR_DAT_05810ee8,0);
            puVar1 = PTR_DAT_057815e0;
            if (*(long *)(param_4 + 0x68) != 0) {
              UnityEngine_GameObject__SetActive_408e318(*(long *)(param_4 + 0x68),1,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              uVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
              if (*(long *)(param_4 + 0x78) != 0) {
                uVar11 = *(undefined8 *)(param_4 + 0x30);
                lVar12 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x78),0);
                if (lVar12 != 0) {
                  fVar13 = (float)UnityEngine_Transform__get_position_4092b08(lVar12,0);
                  puVar1 = PTR_DAT_057606c8;
                  lVar12 = *(long *)(param_4 + 0x40);
                  if (lVar12 != 0) {
                    uVar11 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                                       (fVar13 + *(float *)(lVar12 + 0x24),
                                        param_2 + *(float *)(lVar12 + 0x28),
                                        param_3 + *(float *)(lVar12 + 0x2c),0x3f000000,uVar11,0,0);
                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar8,uVar11,0);
                    lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    puVar3 = PTR_DAT_057b8520;
                    puVar2 = PTR_DAT_05777ce8;
                    puVar1 = PTR_DAT_057611b0;
                    if (lVar12 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar12,param_4,*(undefined8 *)PTR_DAT_057d64c8,0);
                      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                (0x3f400000,uVar8,lVar12,0);
                      DG_Tweening_TweenSettingsExtensions__SetId_object__2450e60
                                (uVar8,param_4,*(undefined8 *)puVar2);
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                      }
                      lVar12 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                         (*(undefined8 *)puVar1);
                      if (lVar12 != 0) {
                        lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578b048);
                        if (lVar10 == 0) goto LAB_040b5760;
                        System_Action___ctor_21239bc
                                  (lVar10,param_4,*(undefined8 *)PTR_DAT_057973b0,0);
                        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                  (lVar12,lVar10,0);
                      }
                      if (*plVar7 != 0) {
                        return *(long *)(*plVar7 + 0x10);
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
LAB_040b5760:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

