/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardRemoteService$$Initialize
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService__Initialize (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardRemoteService$$Initialize
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService__Initialize
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardRemoteService__Initialize_38d3468
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_05801560;
  if ((bRam0000000005c34bbe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05801560);
    bRam0000000005c34bbe = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Threading_CancellationTokenSource___ctor_2a9cf74(lVar5,0);
    plVar6 = (long *)(param_1 + 0x20);
    *plVar6 = lVar5;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

