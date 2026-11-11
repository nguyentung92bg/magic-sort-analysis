/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$IsTimeUp
bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsTimeUp (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$IsTimeUp
   bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsTimeUp
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsTimeUp_1610608
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1d) != '\0')) {
    return *(int *)(lVar1 + 0x18) < 1;
  }
  return false;
}

