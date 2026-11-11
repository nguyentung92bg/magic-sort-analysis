/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$IsLastCollection
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsLastCollection (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$IsLastCollection
   bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsLastCollection
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsLastCollection_2d94b58
               (long param_1)

{
  if ((bRam0000000005c2f9f8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05769ad0);
    bRam0000000005c2f9f8 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    return *(int *)(param_1 + 0x20) == *(int *)(*(long *)(param_1 + 0x18) + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

