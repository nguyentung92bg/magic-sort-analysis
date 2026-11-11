/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.FromHomeToGamePlayState$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_FromHomeToGamePlayState__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_FromHomeToGamePlayState_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.FromHomeToGamePlayState$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_FromHomeToGamePlayState__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_FromHomeToGamePlayState_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_FromHomeToGamePlayState__Enter_1f1193c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c2860a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791da0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575bba8);
    FUN_012d0dc8(PTR_DAT_05787a88);
    FUN_012d0dc8(PTR_DAT_057e40e0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2860a = 1;
  }
  puVar2 = PTR_DAT_05787a88;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_057e40e0;
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0576aae0;
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
         (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar3,*(undefined8 *)PTR_DAT_05791da0), plVar4 != (long *)0x0)
         ) {
        lVar3 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0575bba8) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_02011a80;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0575bba8,1);
LAB_02011a80:
                    /* WARNING: Could not recover jumptable at 0x02011a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar4,puVar5[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

