/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$SetActiveMask
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetActiveMask (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorView$$SetActiveMask
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetActiveMask
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView_o* __this, bool isActive,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetActiveMask_2751dd0
               (long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

