/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetAddedTournamentScoreForAnimation
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetAddedTournamentScoreForAnimation (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetAddedTournamentScoreForAnimation
   int32_t
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetAddedTournamentScoreForAnimation
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetAddedTournamentScoreForAnimation_411f9b0
          (long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000005c3ac7d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577a308);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    bRam0000000005c3ac7d = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakStateService__CanEarnTournamentScore_3e0803c
                      (*(long *)(param_1 + 0x18),0);
    puVar1 = PTR_DAT_057d6f00;
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    iVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentMultiplierIndex_411f8f8
                      (param_1);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar3 = System_Math__Max_26cd24c(iVar2 + -1,0,0);
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                  (0,uVar3,*(undefined8 *)PTR_DAT_0577a308);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 != 0) {
        if (uVar3 < *(uint *)(lVar5 + 0x18)) {
          return *(undefined4 *)(lVar5 + (long)(int)uVar3 * 4 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

