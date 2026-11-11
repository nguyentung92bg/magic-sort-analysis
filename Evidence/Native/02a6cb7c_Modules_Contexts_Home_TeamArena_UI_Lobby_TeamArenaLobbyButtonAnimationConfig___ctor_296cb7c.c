/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Lobby.TeamArenaLobbyButtonAnimationConfig$$.ctor
void Modules_Contexts_Home_TeamArena_UI_Lobby_TeamArenaLobbyButtonAnimationConfig___ctor (Modules_Contexts_Home_TeamArena_UI_Lobby_TeamArenaLobbyButtonAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Lobby.TeamArenaLobbyButtonAnimationConfig$$.ctor
   void Modules_Contexts_Home_TeamArena_UI_Lobby_TeamArenaLobbyButtonAnimationConfig___ctor
   (Modules_Contexts_Home_TeamArena_UI_Lobby_TeamArenaLobbyButtonAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_TeamArena_UI_Lobby_TeamArenaLobbyButtonAnimationConfig___ctor_296cb7c
               (long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = _UNK_0438dc10;
  *(undefined8 *)(param_1 + 0x20) = _UNK_0438dc18;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  puVar2 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
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

