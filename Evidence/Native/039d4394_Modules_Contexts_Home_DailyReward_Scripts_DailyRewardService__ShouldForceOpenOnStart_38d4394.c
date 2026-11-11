/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ShouldForceOpenOnStart
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpenOnStart (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$ShouldForceOpenOnStart
   bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpenOnStart
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpenOnStart_38d4394
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  
  uVar6 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpen_38d4028();
  puVar1 = PTR_DAT_0576aae0;
  if ((uVar6 & 1) == 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar7 = *(long *)(lVar7 + 0x18);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x38) == 0)) {
      if ((bRam0000000005c34bb8 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057a1e60);
        FUN_012d0dc8(PTR_DAT_057c9ae0);
        FUN_012d0dc8(PTR_DAT_0576aae0);
        FUN_012d0dc8(PTR_DAT_057636d0);
        bRam0000000005c34bb8 = 1;
      }
      lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
      if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
         (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar7,*(undefined8 *)PTR_DAT_057c9ae0), lVar7 != 0)) {
        uVar6 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__DoesEnoughVisibleCurrency_137ed28
                          (lVar7,2,1,0);
        if ((uVar6 & 1) == 0) {
          bVar2 = true;
        }
        else {
          lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
          if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0)) ||
             (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                         (lVar7,*(undefined8 *)PTR_DAT_057a1e60),
             plVar4 == (long *)0x0)) goto LAB_039d1c08;
          lVar7 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_039d1bbc;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,1);
LAB_039d1bbc:
          iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          bVar2 = iVar3 % 10 == 4 || iVar3 % 10 == 9;
        }
        return bVar2;
      }
LAB_039d1c08:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

