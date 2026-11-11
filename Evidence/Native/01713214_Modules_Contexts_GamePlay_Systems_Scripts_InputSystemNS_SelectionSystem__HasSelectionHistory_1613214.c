/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$HasSelectionHistory
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__HasSelectionHistory (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$HasSelectionHistory
   bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__HasSelectionHistory
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__HasSelectionHistory_1613214
               (long param_1)

{
  if ((bRam0000000005c24489 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dac98);
    bRam0000000005c24489 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    return 0 < *(int *)(*(long *)(param_1 + 0x28) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

