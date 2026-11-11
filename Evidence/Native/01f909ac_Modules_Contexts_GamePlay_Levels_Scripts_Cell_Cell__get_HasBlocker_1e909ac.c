/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$get_HasBlocker
bool Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__get_HasBlocker (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$get_HasBlocker
   bool Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__get_HasBlocker
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__get_HasBlocker_1e909ac(long param_1)

{
  if ((bRam0000000005c2812c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e5fc8);
    bRam0000000005c2812c = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0 < *(int *)(*(long *)(param_1 + 0x38) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

