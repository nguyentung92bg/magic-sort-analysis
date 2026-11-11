/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.BaseThreadWorker$$<.ctor>b__3_0
void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker____ctor_b__3_0 (Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.BaseThreadWorker$$<.ctor>b__3_0
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker____ctor_b__3_0
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker____ctor_b__3_0_411b0f4
               (long param_1)

{
  if ((bRam0000000005c3ac46 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a2548);
    bRam0000000005c3ac46 = 1;
  }
  while( true ) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_BaseThreadWorker__Update_411ae04(param_1);
    if (*(long *)(param_1 + 0x10) == 0) break;
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x20) == 0) {
      System_Threading_Thread__Sleep_2a0a774(1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

