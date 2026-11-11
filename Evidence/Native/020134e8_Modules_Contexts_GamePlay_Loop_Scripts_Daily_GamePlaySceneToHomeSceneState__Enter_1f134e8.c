/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.GamePlaySceneToHomeSceneState$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GamePlaySceneToHomeSceneState__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GamePlaySceneToHomeSceneState_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.GamePlaySceneToHomeSceneState$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GamePlaySceneToHomeSceneState__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_GamePlaySceneToHomeSceneState_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_GamePlaySceneToHomeSceneState__Enter_1f134e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c28618 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789328);
    FUN_012d0dc8(PTR_DAT_05763c88);
    FUN_012d0dc8(PTR_DAT_057f4dd8);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c28618 = 1;
  }
  puVar1 = PTR_DAT_057e7410;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar2 = PTR_DAT_0576aae0;
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
      (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 == 0)) ||
     (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar4,*(undefined8 *)PTR_DAT_057e8f70), puVar2 = PTR_DAT_057f4dd8,
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_058165e8) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02013630;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_058165e8,0);
LAB_02013630:
  puVar3 = PTR_DAT_05789328;
  puVar1 = PTR_DAT_05763c88;
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar7 = Modules_Infrastructure_Common_Scripts_CommandNS_CommandPool__GetCommand_object__27202f8
                    (*(undefined8 *)puVar1);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  puVar2 = PTR_DAT_05789328;
  if ((bRam0000000005c3aa9b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789328,0);
    FUN_012d0dc8(PTR_DAT_057d7510);
    bRam0000000005c3aa9b = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar4 = *(long *)puVar2;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    System_Collections_Generic_Queue_object___Enqueue_3368ec8
              (**(long **)(lVar4 + 0xb8),uVar7,*(undefined8 *)PTR_DAT_057d7510);
    if (*(char *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) != '\0') {
      return;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar2 = PTR_DAT_057c1ea0;
    if ((bRam0000000005c3aa9c & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057c1ea0);
      bRam0000000005c3aa9c = 1;
    }
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_a0,0);
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    uStack_50 = uStack_98;
    uStack_58 = uStack_a0;
    uStack_40 = uStack_88;
    uStack_48 = uStack_90;
    FUN_012d0d74((ulong)&uStack_60 | 8,0);
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_CommandExecutor__ExecuteNextCommand_d__3__216c1d4
              ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

