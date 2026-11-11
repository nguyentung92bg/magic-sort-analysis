/* IL2CPP: Modules.Contexts.Application.Player.Scripts.PlayerService$$IncreaseLevel
void Modules_Contexts_Application_Player_Scripts_PlayerService__IncreaseLevel (Modules_Contexts_Application_Player_Scripts_PlayerService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Player.Scripts.PlayerService$$IncreaseLevel
   void Modules_Contexts_Application_Player_Scripts_PlayerService__IncreaseLevel
   (Modules_Contexts_Application_Player_Scripts_PlayerService_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Application_Player_Scripts_PlayerService__IncreaseLevel_3cee384(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    iVar2 = 4;
    if (*(int *)(lVar1 + 0x10) != 1) {
      iVar2 = 1;
    }
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined4 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xbc) = 0xffffffff00000000;
    *(int *)(lVar1 + 0x10) = iVar2 + *(int *)(lVar1 + 0x10);
    *(undefined2 *)(param_1 + 0x20) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03dee3c8 to 03eee487 has its CatchHandler @ 03dee3c8
                       catch() { ... } // from try @ 03dee3c8 with catch @ 03dee3c8
                       catch() { ... } // from try @ 03dee6c8 with catch @ 03dee3c8
                       catch() { ... } // from try @ 03dee874 with catch @ 03dee3c8
                       catch() { ... } // from try @ 03dee914 with catch @ 03dee3c8
                       catch() { ... } // from try @ 03dee984 with catch @ 03dee3c8
                       catch() { ... } // from try @ 03dee9d8 with catch @ 03dee3c8
                       catch() { ... } // from try @ 03deea48 with catch @ 03dee3c8
                       catch() { ... } // from try @ 03deea9c with catch @ 03dee3c8
                       catch() { ... } // from try @ 03deeb18 with catch @ 03dee3c8 */
  FUN_012d0ef0();
}

