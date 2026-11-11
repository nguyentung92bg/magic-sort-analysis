/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$End
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__End (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$End
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__End
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__End_1f1da30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
  *puVar4 = 0;
  FUN_012d0d74(puVar4,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__Deinitialize_16134d0
              (*(long *)(param_1 + 0x30),0);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__Deinitialize_2d94bb0
              (*(long *)(param_1 + 0x40),0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__Deinitialize_16109dc
              (*(long *)(param_1 + 0x10),0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__Deinitialize_1e8fea8
              (*(long *)(param_1 + 0x18),0);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    Modules_Contexts_GamePlay_Tutorial_Scripts_TutorialSystem__Deinitialize_160fe14
              (*(long *)(param_1 + 0x60),0);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    Modules_Contexts_Application_Events_Scripts_TutorialEventHandler__Deinitialize_1ccb13c
              (*(long *)(param_1 + 0x68),0);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_GameplayInputSystem__Deinitialize_1612108
              (*(long *)(param_1 + 0x58),0);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager__Dispose_214c3d0
              (*(long *)(param_1 + 0x50),0);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    Modules_Contexts_GamePlay_Snitch_Scripts_SnitchInGameManager__Dispose_2143040
              (*(long *)(param_1 + 0x80),0);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    Modules_Contexts_GamePlay_SuperCharger_Scripts_SuperChargerInGameManager__Dispose_20e8918
              (*(long *)(param_1 + 0x88),0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__Deinitialize_1f1a9a4();
  }
  lVar5 = *(long *)(param_1 + 0x88);
  if (lVar5 == 0) {
    return;
  }
  if ((bRam0000000005c2971a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05817288,0);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057c54b8);
    FUN_012d0dc8(PTR_DAT_057d6390);
    FUN_012d0dc8(PTR_DAT_0576abf8);
    FUN_012d0dc8(PTR_DAT_0575d980);
    FUN_012d0dc8(PTR_DAT_057ba338);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b2e18);
    FUN_012d0dc8(PTR_DAT_057e3a98);
    FUN_012d0dc8(PTR_DAT_0578bdd0);
    FUN_012d0dc8(PTR_DAT_057f2038);
    FUN_012d0dc8(PTR_DAT_05785818);
    FUN_012d0dc8(PTR_DAT_0576caa0);
    bRam0000000005c2971a = 1;
  }
  puVar2 = PTR_DAT_0578b048;
  if (*(long *)(lVar5 + 0x30) != 0) {
    Modules_Contexts_GamePlay_SuperCharger_UI_SuperChargerTrailAnimationController__Dispose_20e6220
              ();
    lVar9 = *(long *)(lVar5 + 0x18);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar6 != 0) &&
       (System_Action___ctor_21239bc(lVar6,lVar5,*(undefined8 *)PTR_DAT_057f2038,0), lVar9 != 0)) {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
                (lVar9,lVar6,0);
      plVar10 = *(long **)(lVar5 + 0x60);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057c54b8) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_021e8aa0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057c54b8,2);
LAB_021e8aa0:
        (*(code *)*puVar4)(plVar10,puVar4[1]);
      }
      *(undefined8 *)(lVar5 + 0x60) = 0;
      FUN_012d0d74((undefined8 *)(lVar5 + 0x60),0);
      puVar1 = PTR_DAT_057ba338;
      puVar3 = PTR_DAT_057b8520;
      if (*(long *)(lVar5 + 0x20) != 0) {
        Modules_Contexts_GamePlay_SuperCharger_SuperChargerButtonUI__Dispose_1618254
                  (*(long *)(lVar5 + 0x20),0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar9 != 0) &&
           (System_Action___ctor_21239bc(lVar9,lVar5,*(undefined8 *)PTR_DAT_0578bdd0,0),
           puVar1 = PTR_DAT_057d6390, lVar6 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar6,lVar9,0);
          lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          if (lVar6 != 0) {
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar9 == 0) goto LAB_021e8c7c;
            System_Action___ctor_21239bc(lVar9,lVar5,*(undefined8 *)PTR_DAT_057e3a98,0);
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                      (lVar6,lVar9,0);
          }
          puVar1 = PTR_DAT_0575d980;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          if (lVar6 != 0) {
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar9 == 0) goto LAB_021e8c7c;
            System_Action___ctor_21239bc(lVar9,lVar5,*(undefined8 *)PTR_DAT_05785818,0);
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                      (lVar6,lVar9,0);
          }
          puVar2 = PTR_DAT_0576abf8;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          if (lVar6 == 0) {
            return;
          }
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05817288);
          puVar2 = PTR_DAT_057b2e18;
          if (lVar9 != 0) {
            System_Action_object____ctor_1647468(lVar9,lVar5,*(undefined8 *)PTR_DAT_0576caa0,0);
                    /* WARNING: Could not recover jumptable at 0x0343d3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x10) + 8))
                      (lVar6,lVar9);
            return;
          }
        }
      }
    }
  }
LAB_021e8c7c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

