/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButtonAnimation$$Update
void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation__Update (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButtonAnimation$$Update
   void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation__Update
   (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButtonAnimation__Update_38d5bc8
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 == 0) {
LAB_039d5c4c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar2 = UnityEngine_GameObject__get_activeSelf_408e35c(lVar1,0);
  if ((uVar2 & 1) != 0) {
    fVar5 = *(float *)(param_1 + 0x2c);
    fVar4 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
    fVar5 = fVar5 + fVar4;
    *(float *)(param_1 + 0x2c) = fVar5;
    if (*(float *)(param_1 + 0x28) <= fVar5) {
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar1 = *(long *)(param_1 + 0x18);
        uVar3 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x20),0);
        if (lVar1 != 0) {
          UnityEngine_Animation__Play_1f7a100(lVar1,uVar3,0);
          *(undefined4 *)(param_1 + 0x2c) = 0;
          return;
        }
      }
      goto LAB_039d5c4c;
    }
  }
  return;
}

