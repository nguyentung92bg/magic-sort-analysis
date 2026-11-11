/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryPlayMagicStreakRewardAnimationLobbyReturnCommand$$IsSkippable
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand__IsSkippable (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryPlayMagicStreakRewardAnimationLobbyReturnCommand$$IsSkippable
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand__IsSkippable
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand_o*
   __this, const MethodInfo* method); */

uint Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryPlayMagicStreakRewardAnimationLobbyReturnCommand__IsSkippable_3cf179c
               (void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c37136 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c37136 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_058030e0), lVar3 != 0)) {
    uVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ShouldPlayProgressbarRewardAnimationLobbyReturn_411f8a0
                      (lVar3,0);
    return ~uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

