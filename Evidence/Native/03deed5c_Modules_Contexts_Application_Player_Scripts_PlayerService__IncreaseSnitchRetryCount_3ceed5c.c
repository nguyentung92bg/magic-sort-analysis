/* IL2CPP: Modules.Contexts.Application.Player.Scripts.PlayerService$$IncreaseSnitchRetryCount
void Modules_Contexts_Application_Player_Scripts_PlayerService__IncreaseSnitchRetryCount (Modules_Contexts_Application_Player_Scripts_PlayerService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Player.Scripts.PlayerService$$IncreaseSnitchRetryCount
   void Modules_Contexts_Application_Player_Scripts_PlayerService__IncreaseSnitchRetryCount
   (Modules_Contexts_Application_Player_Scripts_PlayerService_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Application_Player_Scripts_PlayerService__IncreaseSnitchRetryCount_3ceed5c
               (long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
    *(undefined2 *)(param_1 + 0x20) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

