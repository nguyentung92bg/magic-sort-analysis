/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$ShowStaticView
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__ShowStaticView (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$ShowStaticView
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__ShowStaticView
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__ShowStaticView_2751df0
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x58),1,0);
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar1,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

