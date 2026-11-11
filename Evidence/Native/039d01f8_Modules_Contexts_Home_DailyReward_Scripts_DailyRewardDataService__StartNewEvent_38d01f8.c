/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$StartNewEvent
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__StartNewEvent (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, Modules_Contexts_Home_DailyReward_Scripts_DailyRewardEventInfoResponse_o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$StartNewEvent
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__StartNewEvent
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this,
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardEventInfoResponse_o* response, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__StartNewEvent_38d01f8
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_057741e0;
  if ((bRam0000000005c34ba2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057741e0);
    FUN_012d0dc8(PTR_DAT_057ad8f8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c34ba2 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar3 != 0) && (System_Object___ctor_23dfe5c(lVar3,0), param_2 != 0)) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    FUN_012d0d74();
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_2 + 0x30);
    FUN_012d0d74();
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    *(undefined1 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x38),0);
    *(undefined8 *)(lVar3 + 0x40) = 0;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x40),0);
    puVar2 = PTR_DAT_057b8520;
    puVar1 = PTR_DAT_057ad8f8;
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0x18);
      *plVar5 = lVar3;
      FUN_012d0d74(plVar5,lVar3);
      *(undefined2 *)(param_1 + 0x20) = 0x101;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      if (lVar3 == 0) {
        return;
      }
      lVar4 = *(long *)(lVar3 + 0x20);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      }
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),lVar3,0,*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

