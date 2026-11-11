/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$TryIntroduceNewBooster
void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__TryIntroduceNewBooster (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$TryIntroduceNewBooster
   void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__TryIntroduceNewBooster
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__TryIntroduceNewBooster_1e933d0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  
  uVar4 = Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__ShouldShowMegaShuffleTutorial_1e93408
                    ();
  puVar1 = PTR_DAT_0576aae0;
  if ((uVar4 & 1) == 0) {
    uVar4 = Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__ShouldShowRevealTutorial_1e938d4
                      ();
    puVar1 = PTR_DAT_0576aae0;
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((bRam0000000005c2814c & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057a1e60);
      FUN_012d0dc8(PTR_DAT_057c9ae0);
      FUN_012d0dc8(PTR_DAT_0576aae0);
      FUN_012d0dc8(PTR_DAT_057636d0);
      FUN_012d0dc8(PTR_DAT_05789658);
      FUN_012d0dc8(PTR_DAT_057f0e20);
      FUN_012d0dc8(PTR_DAT_057b8520);
      FUN_012d0dc8(PTR_DAT_058078f0);
      bRam0000000005c2814c = 1;
    }
    lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
      plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
      lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
      if ((lVar9 != 0) &&
         ((lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0 &&
          (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar9,*(undefined8 *)PTR_DAT_057c9ae0), lVar9 != 0)))) {
        iVar3 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleCurrencyAmountByType_137de74
                          (lVar9,0x13,0);
        if (iVar3 == 0) {
          Modules_Contexts_Application_Inventory_Scripts_InventoryService__Earn_137da88
                    (lVar9,0x13,2,0);
        }
        puVar1 = PTR_DAT_057b8520;
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x3e) * 0x10 + 0x138);
                goto LAB_01f93cfc;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,0x3e);
LAB_01f93cfc:
          puVar2 = PTR_DAT_057f0e20;
          (*(code *)*puVar6)(plVar5,puVar6[1]);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          puVar1 = PTR_DAT_05789658;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar7 != 0)) {
            iVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                              (lVar7,0);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if ((lVar7 != 0) &&
               (Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroPopUpArguments___ctor_1e93da0
                          (lVar7,0x13,iVar3 == 3), lVar9 != 0)) {
              lVar8 = *(long *)PTR_DAT_058078f0;
              goto Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2814e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c9ae0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_05789658);
    FUN_012d0dc8(PTR_DAT_057f0e20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058078f0);
    bRam0000000005c2814e = 1;
  }
  lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
    plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
    lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar9 != 0) &&
       ((lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0 &&
        (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar9,*(undefined8 *)PTR_DAT_057c9ae0), lVar9 != 0)))) {
      iVar3 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleCurrencyAmountByType_137de74
                        (lVar9,0x12,0);
      if (iVar3 == 0) {
        Modules_Contexts_Application_Inventory_Scripts_InventoryService__Earn_137da88
                  (lVar9,0x12,2,0);
      }
      puVar1 = PTR_DAT_057b8520;
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x3d) * 0x10 + 0x138);
              goto LAB_01f93830;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,0x3d);
LAB_01f93830:
        puVar2 = PTR_DAT_057f0e20;
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        puVar1 = PTR_DAT_05789658;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar7 != 0)) {
          iVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                            (lVar7,0);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if ((lVar7 != 0) &&
             (Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroPopUpArguments___ctor_1e93da0
                        (lVar7,0x12,iVar3 == 3), lVar9 != 0)) {
            lVar8 = *(long *)PTR_DAT_058078f0;
Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418:
            if (*(long *)(lVar9 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x20) + 8))
                        (*(long *)(lVar9 + 0x10),lVar7);
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

