/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$CheckAndApplyLevelWinOrHasNoMove
void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__CheckAndApplyLevelWinOrHasNoMove (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$CheckAndApplyLevelWinOrHasNoMove
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__CheckAndApplyLevelWinOrHasNoMove
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__CheckAndApplyLevelWinOrHasNoMove_16102f8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  
  if ((bRam0000000005c24465 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791da0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575bba8);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c24465 = 1;
  }
  uVar5 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsAlreadyInStuckOrWinOrLoseState_1610548
                    (param_1);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsBoardStopped_1610628
                        (param_1), puVar3 = PTR_DAT_05791da0, puVar2 = PTR_DAT_0576aae0,
     puVar1 = PTR_DAT_0575bba8, (uVar5 & 1) != 0)) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_01710544;
    uVar5 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsCollectionCleared_2d94c3c
                      (*(long *)(param_1 + 0x18),0);
    if ((uVar5 & 1) == 0) {
      uVar5 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__HasNoMove_1610738
                        (param_1);
      if ((uVar5 & 1) != 0) {
        lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
        if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) ||
           (plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                       (lVar6,*(undefined8 *)puVar3), plVar7 == (long *)0x0))
        goto LAB_01710544;
        lVar9 = *plVar7;
        lVar6 = *(long *)puVar1;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_01710520;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0131971c(plVar7,lVar6,4);
LAB_01710520:
        (*(code *)*puVar8)(plVar7,1,puVar8[1]);
      }
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_01710544;
      uVar5 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsLastCollection_2d94b58
                        (*(long *)(param_1 + 0x18),0);
      puVar4 = PTR_DAT_05814830;
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
LAB_01710544:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__ResetSelectionHistory_16106c8
                  ();
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_01710544;
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__NextBottleCollection_2d94acc
                  (*(long *)(param_1 + 0x18),0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_01710544;
        Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlayBoardMoveAnimation_1f17f60
                  (*(long *)(param_1 + 0x30),0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar4);
        if (lVar6 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar6,0);
        }
        lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
        if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x18), lVar6 == 0)) ||
           (plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                       (lVar6,*(undefined8 *)puVar3), plVar7 == (long *)0x0))
        goto LAB_01710544;
        lVar9 = *plVar7;
        lVar6 = *(long *)puVar1;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 8) * 0x10 + 0x138);
              goto LAB_01710500;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_0131971c(plVar7,lVar6,8);
LAB_01710500:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}

