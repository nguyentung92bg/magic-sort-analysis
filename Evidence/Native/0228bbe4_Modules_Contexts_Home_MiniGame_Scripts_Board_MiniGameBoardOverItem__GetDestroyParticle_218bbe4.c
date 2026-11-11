/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$GetDestroyParticle
UnityEngine_ParticleSystem_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__GetDestroyParticle (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$GetDestroyParticle
   UnityEngine_ParticleSystem_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__GetDestroyParticle
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__GetDestroyParticle_218bbe4
          (long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x10);
  if (iVar1 == 0x11) {
    puVar2 = (undefined8 *)(param_1 + 0x68);
  }
  else if (iVar1 == 0x10) {
    puVar2 = (undefined8 *)(param_1 + 0x60);
  }
  else {
    if (iVar1 != 0xf) {
      return 0;
    }
    puVar2 = (undefined8 *)(param_1 + 0x58);
  }
  return *puVar2;
}

