/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$<PlayGeneratorItemClickedAnimation>b__25_0
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___PlayGeneratorItemClickedAnimation_b__25_0 (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$<PlayGeneratorItemClickedAnimation>b__25_0
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___PlayGeneratorItemClickedAnimation_b__25_0
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___PlayGeneratorItemClickedAnimation_b__25_0_411ab80
               (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0xa8),0), lVar1 != 0
     )) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

