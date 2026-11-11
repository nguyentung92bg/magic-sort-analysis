/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$SetLeftMaskXScale
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetLeftMaskXScale (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, float xScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$SetLeftMaskXScale
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetLeftMaskXScale
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, float xScale, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetLeftMaskXScale_274edb8
               (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x40),0), lVar1 != 0)
     ) {
    UnityEngine_Transform__get_localScale_4093230(lVar1,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x40),0),
       lVar1 != 0)) {
      if (pcRam0000000005c3a650 == (code *)0x0) {
        pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
      }
      (*pcRam0000000005c3a650)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

