/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$PlayDefault
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayDefault (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$PlayDefault
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayDefault
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayDefault_2609a1c
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x48),0);
    if (lVar2 != 0) {
      if (pcRam0000000005c28c10 == (code *)0x0) {
        pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar1,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28c10)(lVar2,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 027099d8 with catch @ 02709a50
                       try { // try from 02709a50 to 02809a67 has its CatchHandler @ 02709980 */
  FUN_012d0ef0();
}

