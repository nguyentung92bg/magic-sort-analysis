/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$TryStartTutorial
System_Threading_Tasks_Task_bool__o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__TryStartTutorial (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameCollectibleItemTutorial$$TryStartTutorial
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__TryStartTutorial
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__TryStartTutorial_3fb299c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  
  puVar2 = PTR_DAT_0576c200;
  if ((bRam0000000005c39067 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d128);
    FUN_012d0dc8(PTR_DAT_057981a0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057e0ac0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b8828);
    FUN_012d0dc8(PTR_DAT_057c2a10);
    FUN_012d0dc8(PTR_DAT_058003d8);
    FUN_012d0dc8(PTR_DAT_057f41b8);
    FUN_012d0dc8(PTR_DAT_0576ae60);
    FUN_012d0dc8(PTR_DAT_05798298);
    FUN_012d0dc8(PTR_DAT_057d4590);
    bRam0000000005c39067 = 1;
  }
  puVar7 = (undefined8 *)(param_4 + 0x70);
  uVar8 = *puVar7;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    uVar8 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__FindCollectibleCell_3fb2d20
                      (param_4);
    *(undefined8 *)(param_4 + 0x70) = uVar8;
    FUN_012d0d74(puVar7,uVar8);
  }
  uVar8 = *puVar7;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(uVar8,0,0);
  puVar1 = PTR_DAT_0576ae60;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_05798298 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = *(long *)puVar1;
    lVar5 = **(long **)(lVar4 + 0x38);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_0131942c(lVar5);
    }
    lVar5 = thunk_FUN_01320e48(lVar5);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(*(long *)(lVar4 + 0x38) + 8) + 8))(lVar5,0);
      return lVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f41b8);
  if (lVar5 != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool____ctor_1db4b60
              (lVar5,*(undefined8 *)PTR_DAT_057c2a10);
    plVar9 = (long *)(param_4 + 0x80);
    *plVar9 = lVar5;
    FUN_012d0d74(plVar9,lVar5);
    Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameCollectibleItemTutorial__HighlightCell_3fb2e5c
              (param_4,*(undefined8 *)(param_4 + 0x70));
    if (*(long *)(param_4 + 0x68) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_4 + 0x68),1,0);
      if (*(long *)(param_4 + 0x70) != 0) {
        lVar4 = *(long *)(param_4 + 0x30);
        lVar5 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x70),0);
        if (lVar5 != 0) {
          fVar10 = (float)UnityEngine_Transform__get_position_4092b08(lVar5,0);
          lVar5 = *(long *)(param_4 + 0x40);
          if ((lVar5 != 0) && (lVar4 != 0)) {
            UnityEngine_Transform__set_position_4092ba8
                      (fVar10 + *(float *)(lVar5 + 0x24),param_2 + *(float *)(lVar5 + 0x28),
                       param_3 + *(float *)(lVar5 + 0x2c),lVar4,0);
            if ((*(long *)(param_4 + 0x30) != 0) &&
               (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_4 + 0x30),0),
               lVar5 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
              if (*(long *)(param_4 + 0x38) != 0) {
                UnityEngine_Animation__Play_1f7a100
                          (*(long *)(param_4 + 0x38),*(undefined8 *)PTR_DAT_057d4590,0);
                if ((*(long *)(param_4 + 0x28) != 0) &&
                   (lVar5 = *(long *)(*(long *)(param_4 + 0x28) + 0x20), lVar5 != 0)) {
                  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                    uVar3 = 0;
                    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                    do {
                      if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef8();
                      }
                      lVar4 = *(long *)(lVar5 + 0x20 + uVar3 * 8);
                      uVar8 = *puVar7;
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                      }
                      uVar6 = UnityEngine_Object__op_Equality_407f288(lVar4,uVar8,0);
                      if ((uVar6 & 1) == 0) {
                        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x60) == 0)) goto LAB_040b2d18;
                        Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                                  (*(long *)(lVar4 + 0x60),param_4,0);
                      }
                      uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
                      uVar3 = uVar3 + 1;
                    } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
                  }
                  puVar1 = PTR_DAT_057e0ac0;
                  puVar2 = PTR_DAT_057b8520;
                  Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameTutorialBase__PlayFingerFadeIn_3fb3134
                            (param_4);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                    (*(undefined8 *)puVar1);
                  if (lVar5 != 0) {
                    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576d128);
                    puVar2 = PTR_DAT_057b8828;
                    if (lVar4 == 0) goto LAB_040b2d18;
                    System_Action_int__int__int____ctor_1c4e288
                              (lVar4,param_4,*(undefined8 *)PTR_DAT_057981a0,0);
                    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int__int__int___Subscribe_333ef04
                              (lVar5,lVar4,*(undefined8 *)puVar2);
                  }
                  if (*plVar9 != 0) {
                    return *(long *)(*plVar9 + 0x10);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_040b2d18:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

