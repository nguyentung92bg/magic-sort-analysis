/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.TryShowDailyCommand$$ShouldOpenAutomaticallyOnLobbyReturn
bool Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand__ShouldOpenAutomaticallyOnLobbyReturn (Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Loop.Scripts.TryShowDailyCommand$$ShouldOpenAutomaticallyOnLobbyReturn
   bool 
   Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand__ShouldOpenAutomaticallyOnLobbyReturn
   (Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand_o* __this, const MethodInfo* method);
    */

bool Modules_Contexts_GamePlay_Loop_Scripts_TryShowDailyCommand__ShouldOpenAutomaticallyOnLobbyReturn_1f05854
               (void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c285a5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05778bf8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c285a5 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
     (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar2,*(undefined8 *)PTR_DAT_05778bf8), lVar2 != 0)) {
    uVar3 = Modules_Contexts_Home_Daily_Scripts_DailyService__IsEligibleForDaily_4104fb0(lVar2,0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(lVar2 + 0x10) == 0) ||
         (lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + 0x20), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(char *)(lVar2 + 0x18) == '\0') {
        return *(char *)(lVar2 + 0x19) == '\0';
      }
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

