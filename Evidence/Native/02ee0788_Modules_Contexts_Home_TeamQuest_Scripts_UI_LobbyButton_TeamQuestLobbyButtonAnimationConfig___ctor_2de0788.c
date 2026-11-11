/* IL2CPP: Modules.Contexts.Home.TeamQuest.Scripts.UI.LobbyButton.TeamQuestLobbyButtonAnimationConfig$$.ctor
void Modules_Contexts_Home_TeamQuest_Scripts_UI_LobbyButton_TeamQuestLobbyButtonAnimationConfig___ctor (Modules_Contexts_Home_TeamQuest_Scripts_UI_LobbyButton_TeamQuestLobbyButtonAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.TeamQuest.Scripts.UI.LobbyButton.TeamQuestLobbyButtonAnimationConfig$$.ctor
   void 
   Modules_Contexts_Home_TeamQuest_Scripts_UI_LobbyButton_TeamQuestLobbyButtonAnimationConfig___ctor
   (Modules_Contexts_Home_TeamQuest_Scripts_UI_LobbyButton_TeamQuestLobbyButtonAnimationConfig_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_TeamQuest_Scripts_UI_LobbyButton_TeamQuestLobbyButtonAnimationConfig___ctor_2de0788
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = _UNK_04394d18;
  uVar1 = _UNK_04394d10;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  puVar3 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Object___ctor_23dfe5c(param_1,0);
  if (pcRam0000000005c3a3d8 == (code *)0x0) {
    pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
  }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a3d8)(param_1);
  return;
}

