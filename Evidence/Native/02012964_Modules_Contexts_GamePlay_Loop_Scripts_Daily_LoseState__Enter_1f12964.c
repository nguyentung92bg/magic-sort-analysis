/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.LoseState$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_LoseState__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_LoseState_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.LoseState$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_LoseState__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_LoseState_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_LoseState__Enter_1f12964(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c28614 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791da0);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057913b0);
    FUN_012d0dc8(PTR_DAT_0576b260);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575bba8);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057e7410);
    FUN_012d0dc8(PTR_DAT_0576f370);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c28614 = 1;
  }
  puVar2 = PTR_DAT_0576f370;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_057e7410;
  if (lVar4 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0576aae0;
    if (lVar4 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar4,0);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
         (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar4,*(undefined8 *)PTR_DAT_057e8f70),
         puVar2 = PTR_DAT_0581aae8, plVar5 != (long *)0x0)) {
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0581aae8) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 10) * 0x10 + 0x138);
              goto LAB_02012adc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0581aae8,10);
LAB_02012adc:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
          lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x18);
            if (lVar4 != 0) {
              lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar4,*(undefined8 *)PTR_DAT_057913b0);
              if ((plVar7[4] != 0) && (lVar4 != 0)) {
                Modules_Contexts_GamePlay_Loop_Scripts_ReturnToHomeSequenceService__LevelLoseOrQuit_2154290
                          (lVar4,*(undefined8 *)(plVar7[4] + 0x20),0);
                lVar4 = *plVar5;
                uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                      goto LAB_02012b90;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,6);
LAB_02012b90:
                (*(code *)*puVar6)(plVar5,puVar6[1]);
                lVar4 = *plVar5;
                uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 10) * 0x10 + 0x138);
                      goto LAB_02012bec;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,10);
LAB_02012bec:
                lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                if ((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
                  Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__SendLevelDurationEvent_1611118
                            (*(long *)(lVar4 + 0x28),1,5,0);
                  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
                     ((lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0 &&
                      (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                         (lVar4,*(undefined8 *)PTR_DAT_0576b260), lVar4 != 0)))) {
                    Modules_Contexts_Application_ServerCommunication_Scripts_SyncService__TrySyncAllData_3e33320
                              (lVar4,0,0);
                    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
                       ((lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0
                        && (plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                       (lVar4,*(undefined8 *)PTR_DAT_05791da0),
                           plVar7 != (long *)0x0)))) {
                      lVar4 = *plVar7;
                      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
                      if (uVar8 != 0) {
                        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575bba8) {
                            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                            goto LAB_02012cd4;
                          }
                          uVar8 = uVar8 - 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar8 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0575bba8,7);
LAB_02012cd4:
                      (*(code *)*puVar6)(plVar7,puVar6[1]);
                      if (cRam0000000005c230a8 == '\0') {
                        FUN_012d0dc8(PTR_DAT_057ece38);
                        cRam0000000005c230a8 = '\x01';
                      }
                      if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
                        Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyLevelEvent_144f1dc
                                  (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),2,uVar3,0);
                        lVar4 = *plVar5;
                        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
                        if (uVar8 != 0) {
                          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                              goto LAB_02012d78;
                            }
                            uVar8 = uVar8 - 1;
                            piVar9 = piVar9 + 4;
                          } while (uVar8 != 0);
                        }
                        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,9);
LAB_02012d78:
                    /* WARNING: Could not recover jumptable at 0x02012d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*(code *)*puVar6)(plVar5,puVar6[1]);
                        return;
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

