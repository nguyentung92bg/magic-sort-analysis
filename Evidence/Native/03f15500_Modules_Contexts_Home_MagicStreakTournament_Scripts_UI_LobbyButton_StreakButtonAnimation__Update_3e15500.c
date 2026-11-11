/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.StreakButtonAnimation$$Update
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_StreakButtonAnimation__Update (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_StreakButtonAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.StreakButtonAnimation$$Update
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_StreakButtonAnimation__Update
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_StreakButtonAnimation_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_StreakButtonAnimation__Update_3e15500
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000005c380ab & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a4f18);
    bRam0000000005c380ab = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_408e35c(lVar1,0);
    if ((uVar2 & 1) != 0) {
      fVar4 = *(float *)(param_1 + 0x24);
      fVar3 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
      fVar4 = fVar4 + fVar3;
      *(float *)(param_1 + 0x24) = fVar4;
      if (*(float *)(param_1 + 0x20) <= fVar4) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_03f1559c;
        UnityEngine_Animation__Play_1f7a100
                  (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057a4f18,0);
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
    return;
  }
LAB_03f1559c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

