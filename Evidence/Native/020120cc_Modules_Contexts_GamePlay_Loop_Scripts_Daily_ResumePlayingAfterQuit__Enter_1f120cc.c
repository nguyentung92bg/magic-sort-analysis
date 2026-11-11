/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.ResumePlayingAfterQuit$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_ResumePlayingAfterQuit__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_ResumePlayingAfterQuit_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.ResumePlayingAfterQuit$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_ResumePlayingAfterQuit__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_ResumePlayingAfterQuit_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_ResumePlayingAfterQuit__Enter_1f120cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c2860f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_0576f7d8);
    FUN_012d0dc8(PTR_DAT_057fdd48);
    FUN_012d0dc8(PTR_DAT_057e2760);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2860f = 1;
  }
  puVar2 = PTR_DAT_0576f7d8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_0576aae0;
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
       (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar3,*(undefined8 *)PTR_DAT_057e8f70),
       puVar1 = PTR_DAT_057fdd48, plVar4 != (long *)0x0)) {
      lVar3 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0581aae8) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_02012208;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0581aae8,3);
LAB_02012208:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_057e2760;
      if (lVar3 != 0) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
        lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          lVar6 = *(long *)(lVar3 + 0x20);
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28))
            ;
          }
          lVar6 = *(long *)(lVar3 + 0x10);
          if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),lVar3,0,*(undefined8 *)(lVar6 + 0x28));
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

