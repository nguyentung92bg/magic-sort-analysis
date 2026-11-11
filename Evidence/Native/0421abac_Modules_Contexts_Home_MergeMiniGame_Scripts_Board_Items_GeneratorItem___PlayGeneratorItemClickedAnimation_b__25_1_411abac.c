/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$<PlayGeneratorItemClickedAnimation>b__25_1
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___PlayGeneratorItemClickedAnimation_b__25_1 (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$<PlayGeneratorItemClickedAnimation>b__25_1
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___PlayGeneratorItemClickedAnimation_b__25_1
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, float t, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem___PlayGeneratorItemClickedAnimation_b__25_1_411abac
               (long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x58), lVar1 != 0)) {
    fVar3 = (float)UnityEngine_AnimationCurve__Evaluate_4084894(lVar1,0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      fStack_30 = fVar3 * *(float *)(lVar2 + 0xc);
      fStack_2c = fVar3 * *(float *)(lVar2 + 0x10);
      fStack_28 = fVar3 * *(float *)(lVar2 + 0x14);
      if (pcRam0000000005c3a650 == (code *)0x0) {
        pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
      }
      (*pcRam0000000005c3a650)(lVar1,&fStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

