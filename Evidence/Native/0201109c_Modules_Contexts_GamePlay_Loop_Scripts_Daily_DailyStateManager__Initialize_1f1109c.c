/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.DailyStateManager$$Initialize
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager__Initialize (Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.DailyStateManager$$Initialize
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager__Initialize
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyStateManager__Initialize_1f1109c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_0578c028;
  if ((bRam0000000005c285fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05787c90);
    FUN_012d0dc8(PTR_DAT_057cb3e0);
    FUN_012d0dc8(PTR_DAT_05809500);
    FUN_012d0dc8(PTR_DAT_057efd18);
    FUN_012d0dc8(PTR_DAT_057c9c48);
    FUN_012d0dc8(PTR_DAT_0577e5c0);
    FUN_012d0dc8(PTR_DAT_0580acb0);
    FUN_012d0dc8(PTR_DAT_057cc418);
    FUN_012d0dc8(PTR_DAT_0576d310);
    FUN_012d0dc8(PTR_DAT_05801398);
    FUN_012d0dc8(PTR_DAT_0578c028);
    FUN_012d0dc8(PTR_DAT_057e12c0);
    FUN_012d0dc8(PTR_DAT_057ddae0);
    FUN_012d0dc8(PTR_DAT_05802750);
    FUN_012d0dc8(PTR_DAT_057be720);
    bRam0000000005c285fd = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_05787c90;
  if (lVar4 != 0) {
    Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum____ctor_31287f8
              (lVar4,*(undefined8 *)PTR_DAT_05801398);
    plVar9 = (long *)(param_1 + 0x10);
    *plVar9 = lVar4;
    FUN_012d0d74(plVar9,lVar4);
    lVar10 = *plVar9;
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar4 != 0) &&
       (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_057c9c48, puVar1 = PTR_DAT_0576d310,
       lVar10 != 0)) {
      Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                (lVar10,lVar4,*(undefined8 *)PTR_DAT_0576d310);
      lVar10 = *plVar9;
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar4 != 0) &&
         (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_0577e5c0, lVar10 != 0)) {
        Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                  (lVar10,lVar4,*(undefined8 *)puVar1);
        lVar10 = *plVar9;
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar4 != 0) &&
           (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_057cc418, lVar10 != 0)) {
          Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                    (lVar10,lVar4,*(undefined8 *)puVar1);
          lVar10 = *plVar9;
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if ((lVar4 != 0) &&
             (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_057e12c0, lVar10 != 0)) {
            Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                      (lVar10,lVar4,*(undefined8 *)puVar1);
            lVar10 = *plVar9;
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if ((lVar4 != 0) &&
               (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_057efd18, lVar10 != 0)) {
              Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                        (lVar10,lVar4,*(undefined8 *)puVar1);
              lVar10 = *plVar9;
              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              if ((lVar4 != 0) &&
                 (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_05809500, lVar10 != 0)) {
                Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                          (lVar10,lVar4,*(undefined8 *)puVar1);
                lVar10 = *plVar9;
                lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if ((lVar4 != 0) &&
                   (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_057ddae0, lVar10 != 0))
                {
                  Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                            (lVar10,lVar4,*(undefined8 *)puVar1);
                  lVar10 = *plVar9;
                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  if ((lVar4 != 0) &&
                     (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_057be720, lVar10 != 0)
                     ) {
                    Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                              (lVar10,lVar4,*(undefined8 *)puVar1);
                    lVar10 = *plVar9;
                    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    if ((lVar4 != 0) &&
                       (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_057cb3e0,
                       lVar10 != 0)) {
                      Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                                (lVar10,lVar4,*(undefined8 *)puVar1);
                      lVar10 = *plVar9;
                      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                      if ((lVar4 != 0) &&
                         (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_0580acb0,
                         lVar10 != 0)) {
                        Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                                  (lVar10,lVar4,*(undefined8 *)puVar1);
                        lVar10 = *plVar9;
                        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                        if ((lVar4 != 0) &&
                           (System_Object___ctor_23dfe5c(lVar4,0), puVar2 = PTR_DAT_05802750,
                           lVar10 != 0)) {
                          Modules_Infrastructure_FiniteStateMachine_StateMachine_Int32Enum___AddState_31288bc
                                    (lVar10,lVar4,*(undefined8 *)puVar1);
                          lVar4 = *plVar9;
                          plVar9 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar2);
                          if ((plVar9 != (long *)0x0) &&
                             (System_Object___ctor_23dfe5c(plVar9,0), lVar4 != 0)) {
                            lVar10 = *(long *)puVar1;
                            if (plVar9 != (long *)0x0) {
                              lVar11 = *(long *)(lVar4 + 0x10);
                              lVar4 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x20);
                              if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                                lVar4 = FUN_0131942c(lVar4);
                              }
                              lVar6 = *plVar9;
                              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
                              if (uVar7 != 0) {
                                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar8 + -2) == lVar4) {
                                    puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                                    goto LAB_0322893c;
                                  }
                                  uVar7 = uVar7 - 1;
                                  piVar8 = piVar8 + 4;
                                } while (uVar7 != 0);
                              }
                              puVar5 = (undefined8 *)FUN_0131971c(plVar9,lVar4,0);
LAB_0322893c:
                              uVar3 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                              if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03228970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x30) + 8))(lVar11,uVar3,plVar9);
                                return;
                              }
                            }
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

