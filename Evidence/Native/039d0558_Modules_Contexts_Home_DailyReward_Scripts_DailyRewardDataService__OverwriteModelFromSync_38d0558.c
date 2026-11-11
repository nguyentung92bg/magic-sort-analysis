/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$OverwriteModelFromSync
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__OverwriteModelFromSync (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$OverwriteModelFromSync
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__OverwriteModelFromSync
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, System_String_o*
   data, const MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__OverwriteModelFromSync_38d0558
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  puVar2 = PTR_DAT_058031d8;
  if ((bRam0000000005c34ba6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b94a0);
    FUN_012d0dc8(PTR_DAT_057e56f0);
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c34ba6 = 1;
  }
  puVar1 = PTR_DAT_057e56f0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b1ff4
                    (param_2,*(undefined8 *)puVar1);
  puVar8 = (undefined8 *)(param_1 + 0x10);
  *puVar8 = uVar3;
  FUN_012d0d74(puVar8,uVar3);
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar7;
  uVar3 = *puVar8;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057b94a0) {
        puVar8 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_039d0640;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057b94a0,0);
LAB_039d0640:
                    /* WARNING: Could not recover jumptable at 0x039d0658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar7,uVar3,puVar8[1]);
  return;
}

