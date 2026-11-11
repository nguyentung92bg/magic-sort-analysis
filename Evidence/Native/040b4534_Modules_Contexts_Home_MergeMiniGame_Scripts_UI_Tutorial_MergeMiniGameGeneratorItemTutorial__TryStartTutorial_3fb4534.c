/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameGeneratorItemTutorial$$TryStartTutorial
System_Threading_Tasks_Task_bool__o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__TryStartTutorial (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameGeneratorItemTutorial$$TryStartTutorial
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__TryStartTutorial
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__TryStartTutorial_3fb4534
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  float fVar10;
  
  puVar2 = PTR_DAT_0576c200;
  if ((bRam0000000005c39077 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d128);
    FUN_012d0dc8(PTR_DAT_05815900);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057dad70);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b8828);
    FUN_012d0dc8(PTR_DAT_057c2a10);
    FUN_012d0dc8(PTR_DAT_058003d8);
    FUN_012d0dc8(PTR_DAT_057f41b8);
    FUN_012d0dc8(PTR_DAT_0576ae60);
    FUN_012d0dc8(PTR_DAT_05798298);
    FUN_012d0dc8(PTR_DAT_057d4590);
    bRam0000000005c39077 = 1;
  }
  uVar3 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__FindGeneratorCell_3fb4890
                    (param_4);
  puVar9 = (undefined8 *)(param_4 + 0x70);
  *puVar9 = uVar3;
  FUN_012d0d74(puVar9,uVar3);
  uVar3 = *puVar9;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Equality_407f288(uVar3,0,0);
  puVar1 = PTR_DAT_0576ae60;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_05798298 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = *(long *)puVar1;
    lVar6 = **(long **)(lVar5 + 0x38);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      lVar6 = FUN_0131942c(lVar6);
    }
    lVar6 = thunk_FUN_01320e48(lVar6);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(*(long *)(lVar5 + 0x38) + 8) + 8))(lVar6,0);
      return lVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f41b8);
  if (lVar6 != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool____ctor_1db4b60
              (lVar6,*(undefined8 *)PTR_DAT_057c2a10);
    plVar8 = (long *)(param_4 + 0x78);
    *plVar8 = lVar6;
    FUN_012d0d74(plVar8,lVar6);
    Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__HighlightCell_3fb490c
              (param_4,*(undefined8 *)(param_4 + 0x70));
    if (*(long *)(param_4 + 0x70) != 0) {
      lVar5 = *(long *)(param_4 + 0x30);
      lVar6 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x70),0);
      if (lVar6 != 0) {
        fVar10 = (float)UnityEngine_Transform__get_position_4092b08(lVar6,0);
        lVar6 = *(long *)(param_4 + 0x40);
        if ((lVar6 != 0) && (lVar5 != 0)) {
          UnityEngine_Transform__set_position_4092ba8
                    (fVar10 + *(float *)(lVar6 + 0x24),param_2 + *(float *)(lVar6 + 0x28),
                     param_3 + *(float *)(lVar6 + 0x2c),lVar5,0);
          if ((*(long *)(param_4 + 0x30) != 0) &&
             (lVar6 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x30),0),
             lVar6 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
            if (*(long *)(param_4 + 0x38) != 0) {
              UnityEngine_Animation__Play_1f7a100
                        (*(long *)(param_4 + 0x38),*(undefined8 *)PTR_DAT_057d4590,0);
              if ((*(long *)(param_4 + 0x28) != 0) &&
                 (lVar6 = *(long *)(*(long *)(param_4 + 0x28) + 0x20), lVar6 != 0)) {
                if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
                  uVar4 = 0;
                  uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                  do {
                    if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef8();
                    }
                    lVar5 = *(long *)(lVar6 + 0x20 + uVar4 * 8);
                    uVar3 = *puVar9;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    uVar7 = UnityEngine_Object__op_Equality_407f288(lVar5,uVar3,0);
                    if ((uVar7 & 1) == 0) {
                      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x60) == 0)) goto LAB_040b4888;
                      Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                                (*(long *)(lVar5 + 0x60),param_4,0);
                    }
                    uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
                    uVar4 = uVar4 + 1;
                  } while ((long)uVar4 < (long)(int)*(uint *)(lVar6 + 0x18));
                }
                puVar1 = PTR_DAT_057dad70;
                puVar2 = PTR_DAT_057b8520;
                if (*(long *)(param_4 + 0x68) != 0) {
                  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_4 + 0x68),1,0);
                  Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameTutorialBase__PlayFingerFadeIn_3fb3134
                            (param_4);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                    (*(undefined8 *)puVar1);
                  if (lVar6 != 0) {
                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576d128);
                    puVar2 = PTR_DAT_057b8828;
                    if (lVar5 == 0) goto LAB_040b4888;
                    System_Action_int__int__int____ctor_1c4e288
                              (lVar5,param_4,*(undefined8 *)PTR_DAT_05815900,0);
                    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int__int__int___Subscribe_333ef04
                              (lVar6,lVar5,*(undefined8 *)puVar2);
                  }
                  if (*plVar8 != 0) {
                    return *(long *)(*plVar8 + 0x10);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_040b4888:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

