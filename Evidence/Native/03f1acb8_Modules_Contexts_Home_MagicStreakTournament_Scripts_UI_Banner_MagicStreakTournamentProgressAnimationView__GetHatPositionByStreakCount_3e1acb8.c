/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$GetHatPositionByStreakCount
UnityEngine_Transform_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetHatPositionByStreakCount (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, int32_t streakCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$GetHatPositionByStreakCount
   UnityEngine_Transform_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetHatPositionByStreakCount
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, int32_t streakCount, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetHatPositionByStreakCount_3e1acb8
          (long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam0000000005c380d9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c2030);
    bRam0000000005c380d9 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = param_2 - 1;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,uVar1,*(undefined8 *)PTR_DAT_057c2030);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 != 0) {
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

