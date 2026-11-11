/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$SerializeModelForSync
System_String_o* Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__SerializeModelForSync (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$SerializeModelForSync
   System_String_o*
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__SerializeModelForSync
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__SerializeModelForSync_38d046c
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c34ba4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b94a0);
    bRam0000000005c34ba4 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_057b94a0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_039d04fc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057b94a0,2);
LAB_039d04fc:
                    /* WARNING: Could not recover jumptable at 0x039d0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
  return;
}

