/* IL2CPP: Modules.Contexts.Application.Player.Scripts.PlayerService$$SaveLastSelectedSeedId
void Modules_Contexts_Application_Player_Scripts_PlayerService__SaveLastSelectedSeedId (Modules_Contexts_Application_Player_Scripts_PlayerService_o* __this, System_String_o* lastSelectedSeedId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Player.Scripts.PlayerService$$SaveLastSelectedSeedId
   void Modules_Contexts_Application_Player_Scripts_PlayerService__SaveLastSelectedSeedId
   (Modules_Contexts_Application_Player_Scripts_PlayerService_o* __this, System_String_o*
   lastSelectedSeedId, const MethodInfo* method); */

void Modules_Contexts_Application_Player_Scripts_PlayerService__SaveLastSelectedSeedId_3cee2f4
               (long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28) = param_2;
    FUN_012d0d74();
    *(undefined2 *)(param_1 + 0x20) = 0x101;
                    /* try { // try from 03dee318 to 03eee327 has its CatchHandler @ 03dee348 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

