/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.BubbleItem$$Dispose
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem__Dispose (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.BubbleItem$$Dispose
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem__Dispose
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_BubbleItem__Dispose_41093f0(long *param_1)

{
  Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__Dispose_4109428();
  if (param_1[0x12] != 0) {
    UnityEngine_GameObject__SetActive_408e318(param_1[0x12],0,0);
                    /* WARNING: Could not recover jumptable at 0x04209420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

