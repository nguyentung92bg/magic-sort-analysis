/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.BaseThreadWorker$$Update
void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__Update (Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.BaseThreadWorker$$Update
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__Update
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__Update_411ae04
               (long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c3ac43 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ab290);
    FUN_012d0dc8(PTR_DAT_057d16a0);
    bRam0000000005c3ac43 = 1;
  }
  lStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  if (param_1[2] != 0) {
    uVar1 = System_Collections_Generic_Queue_QueueItem___TryDequeue_3369c7c
                      (param_1[2],&uStack_38,*(undefined8 *)PTR_DAT_057ab290);
    if ((uVar1 & 1) != 0) {
      uVar2 = (**(code **)(*param_1 + 0x178))(param_1,uStack_38,*(undefined8 *)(*param_1 + 0x180));
      if (lStack_30 == 0) goto LAB_0421aec4;
      System_Threading_Tasks_TaskCompletionSource_bool___TrySetResult_1db4dec
                (lStack_30,1,*(undefined8 *)PTR_DAT_057d16a0);
      uStack_28 = uVar2;
      FUN_012d0d74(&uStack_28,uVar2);
    }
    return;
  }
LAB_0421aec4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

