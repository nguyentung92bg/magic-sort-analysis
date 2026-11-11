/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.QuitPressedState$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitPressedState__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitPressedState_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.QuitPressedState$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitPressedState__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitPressedState_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitPressedState__Enter_1f11ec0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2860e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057b7e78);
    FUN_012d0dc8(PTR_DAT_057e6098);
    FUN_012d0dc8(PTR_DAT_057c0e48);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    FUN_012d0dc8(PTR_DAT_057792e8);
    bRam0000000005c2860e = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
     (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar4,*(undefined8 *)PTR_DAT_057e8f70), puVar1 = PTR_DAT_057b8520,
     plVar5 != (long *)0x0)) {
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02011ff0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0581aae8,2);
LAB_02011ff0:
    puVar3 = PTR_DAT_057f0e20;
    puVar2 = PTR_DAT_057b7e78;
    (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar3);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_057792e8;
    if (lVar7 != 0) {
      Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)puVar1;
      FUN_012d0d74();
      puVar1 = PTR_DAT_057e6098;
      if (lVar4 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418
                  (lVar4,lVar7,*(undefined8 *)PTR_DAT_058078f0);
        lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_057c0e48;
        if (lVar4 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
          lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          if (lVar4 != 0) {
            lVar7 = *(long *)(lVar4 + 0x20);
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
            }
            lVar7 = *(long *)(lVar4 + 0x10);
            if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),lVar4,0,*(undefined8 *)(lVar7 + 0x28));
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

