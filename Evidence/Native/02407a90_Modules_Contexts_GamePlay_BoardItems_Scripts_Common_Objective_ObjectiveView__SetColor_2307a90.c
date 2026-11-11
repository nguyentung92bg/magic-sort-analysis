/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.Objective.ObjectiveView$$SetColor
void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView__SetColor (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.Objective.ObjectiveView$$SetColor
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView__SetColor
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView_o* __this,
   UnityEngine_Color_o color, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView__SetColor_2307a90
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* try { // try from 02407a94 to 02507a97 has its CatchHandler @ 02407ab8 */
  lVar1 = *(long *)(param_5 + 0x18);
                    /* try { // try from 02407a98 to 02507a9b has its CatchHandler @ 02407ab4 */
  if (lVar1 != 0) {
    uStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    uStack_24 = param_4;
    if (pcRam0000000005c3a788 == (code *)0x0) {
      pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
    }
    (*pcRam0000000005c3a788)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02407aa8 to 02507ae3 has its CatchHandler @ 024077a0 */
  FUN_012d0ef0();
}

