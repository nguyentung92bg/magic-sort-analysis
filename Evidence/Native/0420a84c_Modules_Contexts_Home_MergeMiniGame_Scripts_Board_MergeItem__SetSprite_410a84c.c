/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$SetSprite
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetSprite (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItem$$SetSprite
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetSprite
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem_o* __this, UnityEngine_Sprite_o*
   sprite, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetSprite_410a84c
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3abc0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3abc0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      if (pcRam0000000005c3a730 == (code *)0x0) {
        pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
      }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a730)(lVar3,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

