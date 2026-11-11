/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$GetTargetProbabilitiesForV2
System_Collections_Generic_List_DailyRewardProbabilityRewardModelV2__o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetTargetProbabilitiesForV2 (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardService$$GetTargetProbabilitiesForV2
   System_Collections_Generic_List_DailyRewardProbabilityRewardModelV2__o*
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetTargetProbabilitiesForV2
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetTargetProbabilitiesForV2_38d3ef8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c34bc3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05776540);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c34bc3 = 1;
  }
  lVar2 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__GetConfig_38d4004(param_1);
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_05776540), lVar3 != 0)) {
    uVar4 = Modules_Contexts_Home_Collection_Scripts_CollectionService__IsEventActive_376c5e0
                      (lVar3,0);
    uVar5 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardService__ShouldForceOpen_38d4028
                      (param_1);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_039d4000;
      uVar5 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsPlayerHasNoLifeOrInHardLevel_38d1a98
                        ();
      if ((uVar5 & 1) == 0) {
        if ((uVar4 & 1) == 0) {
          if (lVar2 == 0) goto LAB_039d4000;
        }
        else {
          if (lVar2 == 0) goto LAB_039d4000;
          if (*(long *)(lVar2 + 0x48) != 0) {
            return *(long *)(lVar2 + 0x48);
          }
        }
        lVar2 = *(long *)(lVar2 + 0x30);
      }
      else {
        if ((uVar4 & 1) == 0) {
          if (lVar2 == 0) goto LAB_039d4000;
        }
        else {
          if (lVar2 == 0) goto LAB_039d4000;
          if (*(long *)(lVar2 + 0x40) != 0) {
            return *(long *)(lVar2 + 0x40);
          }
        }
        lVar2 = *(long *)(lVar2 + 0x28);
      }
    }
    else {
      if ((uVar4 & 1) == 0) {
        if (lVar2 == 0) goto LAB_039d4000;
      }
      else {
        if (lVar2 == 0) goto LAB_039d4000;
        if (*(long *)(lVar2 + 0x38) != 0) {
          return *(long *)(lVar2 + 0x38);
        }
      }
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    return lVar2;
  }
LAB_039d4000:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

