/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.QuitState$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitState__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitState_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.QuitState$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitState__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitState_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_QuitState__Enter_1f136a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c28619 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791da0);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057913b0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0575bba8);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c28619 = 1;
  }
  puVar2 = PTR_DAT_057b8520;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_057e7410;
  DG_Tweening_DOTween__KillAll_1eda810(0,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0576aae0;
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
      plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar3,*(undefined8 *)PTR_DAT_057e8f70);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      if ((lVar3 != 0) &&
         ((lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0 &&
          (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar3,*(undefined8 *)PTR_DAT_057913b0), puVar2 = PTR_DAT_0581aae8,
          plVar4 != (long *)0x0)))) {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0581aae8) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
              goto LAB_02013844;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0581aae8,10);
LAB_02013844:
        lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) && (lVar3 != 0)) {
          Modules_Contexts_GamePlay_Loop_Scripts_ReturnToHomeSequenceService__LevelLoseOrQuit_2154290
                    (lVar3,*(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x20),0);
          lVar3 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                goto LAB_020138c0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar2,7);
LAB_020138c0:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
          lVar3 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 10) * 0x10 + 0x138);
                goto LAB_0201391c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar2,10);
LAB_0201391c:
          lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((lVar3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) {
            Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__SendLevelDurationEvent_1611118
                      (*(long *)(lVar3 + 0x28),2,0xc,0);
            if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
               ((lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0 &&
                (plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                            (lVar3,*(undefined8 *)PTR_DAT_05791da0),
                plVar6 != (long *)0x0)))) {
              lVar3 = *plVar6;
              uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575bba8) {
                    puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
                    goto LAB_020139cc;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575bba8,0xb);
LAB_020139cc:
              (*(code *)*puVar5)(plVar6,puVar5[1]);
              if (cRam0000000005c230a8 == '\0') {
                FUN_012d0dc8(PTR_DAT_057ece38);
                cRam0000000005c230a8 = '\x01';
              }
              if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
                Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyLevelEvent_144f1dc
                          (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),6,0,0);
                lVar3 = *plVar4;
                uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                      puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                      goto LAB_02013a70;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)puVar2,9);
LAB_02013a70:
                    /* WARNING: Could not recover jumptable at 0x02013a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar5)(plVar4,puVar5[1]);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

