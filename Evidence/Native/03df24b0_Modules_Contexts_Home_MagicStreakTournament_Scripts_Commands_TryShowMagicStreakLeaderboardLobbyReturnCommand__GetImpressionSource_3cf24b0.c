/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryShowMagicStreakLeaderboardLobbyReturnCommand$$GetImpressionSource
int32_t Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand__GetImpressionSource (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.Commands.TryShowMagicStreakLeaderboardLobbyReturnCommand$$GetImpressionSource
   int32_t
   Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand__GetImpressionSource
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand_o*
   __this, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_MagicStreakTournament_Scripts_Commands_TryShowMagicStreakLeaderboardLobbyReturnCommand__GetImpressionSource_3cf24b0
          (void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c3713e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c3713e = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) &&
     (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_058030e0), lVar4 != 0)) {
    iVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetPopupState_411f444
                      (lVar4,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df245c with catch @ 03df2524
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03df2424 with catch @ 03df2528
                        */
    if (iVar2 - 2U < 3) {
      uVar3 = *(undefined4 *)(&UNK_043e33f0 + (long)(int)(iVar2 - 2U) * 4);
    }
    else {
      uVar3 = 4;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

