/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$ShouldBoosterHitAnimationPlay
bool Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__ShouldBoosterHitAnimationPlay (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardOverItem$$ShouldBoosterHitAnimationPlay
   bool 
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__ShouldBoosterHitAnimationPlay
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__ShouldBoosterHitAnimationPlay_2189c64
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c29d65 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c29d65 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (*(char *)(param_1 + 0x78) != '\0') {
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar3 = UnityEngine_SpriteRenderer__get_sprite_4095b28(*(long *)(param_1 + 0x38),0);
      uVar4 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardOverItem__GetDestroyedSprite_218bb70
                        (param_1);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      puVar1 = PTR_DAT_0576c200;
      if ((bRam0000000005c3a4e4 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576c200,uVar4,0);
        bRam0000000005c3a4e4 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__CompareBaseObjects_40913ac(uVar3,uVar4);
      return ~uVar2 & 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return 0;
}

