/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameGeneratorItemTutorial$$FindGeneratorCell
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__FindGeneratorCell (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameGeneratorItemTutorial$$FindGeneratorCell
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__FindGeneratorCell
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__FindGeneratorCell_3fb4890
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar4 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar3 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_040b4904;
        uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__HasItem_410f66c
                          (lVar3,1,0);
        if ((uVar2 & 1) != 0) {
          return lVar3;
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return 0;
  }
LAB_040b4904:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

