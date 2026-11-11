/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButtonAnimation$$OnEnable
void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation__OnEnable (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButtonAnimation$$OnEnable
   void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation__OnEnable
   (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation__OnEnable_38d5c50
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x20),0);
    if (lVar2 != 0) {
      UnityEngine_Animation__Play_1f7a100(lVar2,uVar1,0);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

