/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetStartTimeAsUnix
int64_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStartTimeAsUnix (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetStartTimeAsUnix
   int64_t
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStartTimeAsUnix
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetStartTimeAsUnix_4120248
          (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x20);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

