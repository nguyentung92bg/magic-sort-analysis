/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$IsBottlesCountReachedMax
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__IsBottlesCountReachedMax (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$IsBottlesCountReachedMax
   bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__IsBottlesCountReachedMax
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__IsBottlesCountReachedMax_2f6b7b8
               (long param_1)

{
  int iVar1;
  
  iVar1 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleCount_2f68a70();
  return *(int *)(param_1 + 100) <= iVar1;
}

