/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$StartRevealTutorial
void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__StartRevealTutorial (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$StartRevealTutorial
   void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__StartRevealTutorial
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__StartRevealTutorial_1e93b8c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  puVar1 = PTR_DAT_0576aae0;
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
  lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
    plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
    lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar7 != 0) &&
       ((lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0 &&
        (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar7,*(undefined8 *)PTR_DAT_057c9ae0), lVar7 != 0)))) {
      iVar3 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__GetVisibleCurrencyAmountByType_137de74
                        (lVar7,0x13,0);
      if (iVar3 == 0) {
        Modules_Contexts_Application_Inventory_Scripts_InventoryService__Earn_137da88
                  (lVar7,0x13,2,0);
      }
      puVar1 = PTR_DAT_057b8520;
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x3e) * 0x10 + 0x138);
              goto LAB_01f93cfc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,0x3e);
LAB_01f93cfc:
        puVar2 = PTR_DAT_057f0e20;
        (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        puVar1 = PTR_DAT_05789658;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar6 != 0)) {
          iVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                            (lVar6,0);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if ((lVar6 != 0) &&
             (Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroPopUpArguments___ctor_1e93da0
                        (lVar6,0x13,iVar3 == 3), lVar7 != 0)) {
            if (*(long *)(lVar7 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_058078f0 + 0x20) + 0xc0) +
                                    0x20) + 8))(*(long *)(lVar7 + 0x10),lVar6);
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

