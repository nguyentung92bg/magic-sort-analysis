/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.Commands.TryShowDailyRewardHomeWelcomingCommand$$Initialize
void Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand__Initialize (Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.Commands.TryShowDailyRewardHomeWelcomingCommand$$Initialize
   void 
   Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand__Initialize
   (Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand_o*
   __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_Commands_TryShowDailyRewardHomeWelcomingCommand__Initialize_38d90e8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c34bf6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c778);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c34bf6 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
    uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar2,*(undefined8 *)PTR_DAT_0575c778);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    FUN_012d0d74((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined1 *)(param_1 + 0x10) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

