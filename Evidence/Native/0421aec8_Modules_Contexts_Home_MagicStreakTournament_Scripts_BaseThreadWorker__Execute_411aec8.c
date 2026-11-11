/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.BaseThreadWorker$$Execute
void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__Execute (Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker_o* __this, System_EventArgs_o* args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.BaseThreadWorker$$Execute
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__Execute
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker_o* __this,
   System_EventArgs_o* args, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__Execute_411aec8
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_057f41b8;
  if ((bRam0000000005c3ac44 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057efa90);
    FUN_012d0dc8(PTR_DAT_057c2a10);
    FUN_012d0dc8(PTR_DAT_057f41b8);
    bRam0000000005c3ac44 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = param_2;
  FUN_012d0d74(&uStack_68,param_2);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool____ctor_1db4b60
              (lVar2,*(undefined8 *)PTR_DAT_057c2a10);
    lStack_60 = lVar2;
    FUN_012d0d74(&lStack_60,lVar2);
    if (lVar3 != 0) {
      lStack_48 = lStack_60;
      uStack_50 = uStack_68;
      uStack_40 = uStack_58;
      System_Collections_Generic_Queue_QueueItem___Enqueue_3369984
                (lVar3,&uStack_50,*(undefined8 *)PTR_DAT_057efa90);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

