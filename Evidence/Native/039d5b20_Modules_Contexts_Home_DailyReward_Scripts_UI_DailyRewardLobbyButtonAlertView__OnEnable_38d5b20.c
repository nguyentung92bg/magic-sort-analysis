/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButtonAlertView$$OnEnable
void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAlertView__OnEnable (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAlertView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButtonAlertView$$OnEnable
   void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAlertView__OnEnable
   (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAlertView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAlertView__OnEnable_38d5b20
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c34bd6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c778);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c34bd6 = 1;
  }
  if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
      (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar3,*(undefined8 *)PTR_DAT_0575c778), lVar3 != 0)) &&
     (*(long *)(lVar3 + 0x20) != 0)) {
    lVar3 = *(long *)(param_1 + 0x18);
    uVar2 = Modules_Contexts_Home_DailyReward_Scripts_DailyRewardStateService__ShouldShowAlertView_38d3c28
                      ();
    if (lVar3 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar3,uVar2 & 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

