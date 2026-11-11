/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.GiveDailyProgressBarStepRewards.<GiveDailyLevelProgressbarStepRewards>d__14$$MoveNext
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14__MoveNext (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Loop.Scripts.Daily.GiveDailyProgressBarStepRewards.<GiveDailyLevelProgressbarStepRewards>d__14$$MoveNext
   void 
   Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14__MoveNext
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14_o
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14__MoveNext_1f1479c
               (undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000005c28625 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bd8a0);
    FUN_012d0dc8(PTR_DAT_0576e800);
    FUN_012d0dc8(PTR_DAT_057acad0);
    FUN_012d0dc8(PTR_DAT_057ec458);
    FUN_012d0dc8(PTR_DAT_057bc6b0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0580f080);
    FUN_012d0dc8(PTR_DAT_057c61c0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057b7e78);
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057eb990);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_057d6730);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    FUN_012d0dc8(PTR_DAT_0578fc60);
    FUN_012d0dc8(PTR_DAT_05798298);
    FUN_012d0dc8(PTR_DAT_057de0f0);
    bRam0000000005c28625 = 1;
  }
  puVar8 = PTR_DAT_057eb990;
  puVar7 = PTR_DAT_057bd8a0;
  puVar6 = PTR_DAT_057b8520;
  puVar5 = PTR_DAT_05798298;
  puVar4 = PTR_DAT_0576e800;
  puVar2 = PTR_DAT_0576aae0;
  uStack_78 = 0;
  lVar15 = *(long *)(param_1 + 8);
  switch(*param_1) {
  case 0:
    uStack_78 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0xffffffff;
LAB_02014930:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult_2444aec(&uStack_78,0);
LAB_0201493c:
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_057bc6b0);
    plVar10 = (long *)(param_1 + 10);
    *plVar10 = lVar9;
    FUN_012d0d74(plVar10);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar11 = Modules_Contexts_Application_Reward_Scripts_RewardService__HasBulkRewardByCurrencyEarnReason_3ce91a0
                       (*plVar10,0x10,0);
    if ((uVar11 & 1) != 0) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar12 = *(undefined8 *)(lVar15 + 0x18);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar15 = System_Threading_Tasks_Task__Delay_2a19fa4(1000,uVar12,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uStack_78 = System_Threading_Tasks_Task__GetAwaiter_2a11c1c(lVar15,0);
      uVar11 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2444a1c(&uStack_78,0);
      if ((uVar11 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0xc) = uStack_78;
        FUN_012d0d74(param_1 + 0xc,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14__1f53e2c
                  (param_1 + 2,&uStack_78,param_1,*(undefined8 *)puVar7);
        return;
      }
      goto LAB_02014a78;
    }
    goto LAB_02014c24;
  case 1:
    uStack_78 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0xffffffff;
LAB_02014a78:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult_2444aec(&uStack_78,0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar15 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                       (*(undefined8 *)PTR_DAT_057e7410);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar15,0);
    lVar15 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                       (*(undefined8 *)PTR_DAT_057d6730);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
              (lVar15,3,*(undefined8 *)PTR_DAT_0578fc60);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar15 = System_Threading_Tasks_Task__Delay_2a1a350(600,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_78 = System_Threading_Tasks_Task__GetAwaiter_2a11c1c(lVar15,0);
    uVar11 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2444a1c(&uStack_78,0);
    if ((uVar11 & 1) == 0) {
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0xc) = uStack_78;
      FUN_012d0d74(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14__1f53e2c
                (param_1 + 2,&uStack_78,param_1,*(undefined8 *)puVar7);
      return;
    }
    break;
  case 2:
    uStack_78 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0xffffffff;
    break;
  case 3:
    uStack_78 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0xffffffff;
    goto code_r0x02014b54;
  case 4:
    uStack_78 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0xffffffff;
    goto code_r0x02014c18;
  default:
    if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)PTR_DAT_05814830);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar9,0);
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar9,*(undefined8 *)PTR_DAT_057ec458);
    puVar3 = PTR_DAT_0576c200;
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (plVar10 == (long *)0x0) {
LAB_02014d14:
      plVar10 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0580f080 + 300);
      if (*(byte *)(*plVar10 + 300) < bVar1) goto LAB_02014d14;
      if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0580f080)
      {
        plVar10 = (long *)0x0;
      }
    }
    uVar11 = UnityEngine_Object__op_Equality_407f288(plVar10,0,0);
    if ((uVar11 & 1) == 0) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined1 *)(lVar15 + 0x10) = 1;
      lVar9 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar9 = *(long *)(lVar9 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar9,*(undefined8 *)PTR_DAT_057acad0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar9 = *plVar10;
      lVar14 = *(long *)PTR_DAT_057c61c0;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)(lVar14 + 0x20)) {
            lVar9 = lVar9 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
            goto LAB_02014ee8;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      lVar9 = FUN_0131971c(plVar10);
LAB_02014ee8:
      thunk_FUN_01306508(*(undefined8 *)(lVar9 + 8),lVar14,&pcStack_70);
      lVar9 = (*pcStack_70)(plVar10,uStack_68);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar11 = UnityEngine_Object__op_Inequality_408e110(lVar9,0,0);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(lVar15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar12 = Modules_Contexts_Home_Daily_Scripts_UI_DailyPopup__PlayClaimDay_3e210b8
                           (lVar9,*(undefined8 *)(*(long *)(lVar15 + 0x20) + 0x40),0);
        lVar9 = Modules_Infrastructure_Utils_TweenExtensions__AsyncWaitForCompletionWithCancellationToken_3de75b8
                          (uVar12,*(undefined8 *)(lVar15 + 0x18),0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uStack_78 = System_Threading_Tasks_Task__GetAwaiter_2a11c1c(lVar9,0);
        uVar11 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2444a1c(&uStack_78,0);
        if ((uVar11 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0xc) = uStack_78;
          FUN_012d0d74(param_1 + 0xc,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14__1f53e2c
                    (param_1 + 2,&uStack_78,param_1,*(undefined8 *)puVar7);
          return;
        }
        goto LAB_02014930;
      }
      goto LAB_0201493c;
    }
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar15 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                       (*(undefined8 *)puVar8);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar15,0);
    goto LAB_02014c58;
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult_2444aec(&uStack_78,0);
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar15 = Modules_Contexts_Application_Reward_Scripts_RewardService__GiveBulkRewards_3ce91b8
                     (*(long *)(param_1 + 10),0x10,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uStack_78 = System_Threading_Tasks_Task__GetAwaiter_2a11c1c(lVar15,0);
  uVar11 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2444a1c(&uStack_78,0);
  if ((uVar11 & 1) == 0) {
    *param_1 = 3;
    *(undefined8 *)(param_1 + 0xc) = uStack_78;
    FUN_012d0d74(param_1 + 0xc,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14__1f53e2c
              (param_1 + 2,&uStack_78,param_1,*(undefined8 *)puVar7);
  }
  else {
code_r0x02014b54:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult_2444aec(&uStack_78,0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar15 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                       (*(undefined8 *)PTR_DAT_057f0e20);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057b7e78);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(lVar9,0);
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_057de0f0;
    FUN_012d0d74();
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418
              (lVar15,lVar9,*(undefined8 *)PTR_DAT_058078f0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar15 = System_Threading_Tasks_Task__Delay_2a1a350(600,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_78 = System_Threading_Tasks_Task__GetAwaiter_2a11c1c(lVar15,0);
    uVar11 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_2444a1c(&uStack_78,0);
    if ((uVar11 & 1) == 0) {
      *param_1 = 4;
      *(undefined8 *)(param_1 + 0xc) = uStack_78;
      FUN_012d0d74(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__GiveDailyProgressBarStepRewards__GiveDailyLevelProgressbarStepRewards_d__14__1f53e2c
                (param_1 + 2,&uStack_78,param_1,*(undefined8 *)puVar7);
    }
    else {
code_r0x02014c18:
      System_Runtime_CompilerServices_TaskAwaiter__GetResult_2444aec(&uStack_78,0);
LAB_02014c24:
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar15 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                         (*(undefined8 *)puVar8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar15,0);
      *(undefined8 *)(param_1 + 10) = 0;
      FUN_012d0d74(param_1 + 10,0);
LAB_02014c58:
      *param_1 = 0xfffffffe;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult_24435bc(param_1 + 2,0);
    }
  }
  return;
}

