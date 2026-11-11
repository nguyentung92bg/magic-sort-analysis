/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.PlayingState$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayingState__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayingState_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.PlayingState$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayingState__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayingState_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_PlayingState__Enter_1f11aa4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar4 = PTR_DAT_057b8520;
  if ((bRam0000000005c2860b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_0576f7d8);
    FUN_012d0dc8(PTR_DAT_057620d8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057f81c0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057c53c0);
    FUN_012d0dc8(PTR_DAT_057cc698);
    bRam0000000005c2860b = 1;
  }
  puVar2 = PTR_DAT_0576f7d8;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar3 = PTR_DAT_0576aae0;
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
  }
  if (((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
      (lVar5 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar5 != 0)) &&
     (plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar5,*(undefined8 *)PTR_DAT_057e8f70), puVar2 = PTR_DAT_0581aae8,
     plVar6 != (long *)0x0)) {
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_02011c04;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0581aae8,1);
LAB_02011c04:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    puVar3 = PTR_DAT_057cc698;
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendDailyLevelEvent_144f1dc
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),1,0,0);
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar5 = *(long *)puVar3;
      }
      puVar1 = PTR_DAT_057606c8;
      lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar11 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar5 = *(long *)puVar3;
        }
        uVar12 = **(undefined8 **)(lVar5 + 0xb8);
        lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar11 == 0) goto LAB_02011dac;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar11,uVar12,*(undefined8 *)PTR_DAT_057c53c0,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar8 = lVar11;
        FUN_012d0d74(plVar8,lVar11);
      }
      DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_0434ccf4,lVar11,1,0);
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 10) * 0x10 + 0x138);
            goto LAB_02011d44;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar2,10);
LAB_02011d44:
      lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar2 = PTR_DAT_057620d8;
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) {
        Modules_Contexts_GamePlay_Systems_Scripts_TimeNS_LevelTimeTracker__OnLevelStart_1610f44
                  (*(long *)(lVar5 + 0x28),0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        if (lVar5 != 0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057f81c0 + 0x20) + 0xc0) +
                                  0x20) + 8))(*(long *)(lVar5 + 0x10),2);
            return;
          }
          return;
        }
      }
    }
  }
LAB_02011dac:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

