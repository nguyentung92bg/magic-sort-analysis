/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$CloseCap
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__CloseCap (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$CloseCap
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__CloseCap
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__CloseCap_260a980(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
                    /* try { // try from 0270a98c to 0280aaaf has its CatchHandler @ 0270a98c
                       catch() { ... } // from try @ 0270a98c with catch @ 0270a98c
                       catch() { ... } // from try @ 0270abfc with catch @ 0270a98c
                       catch() { ... } // from try @ 0270ac88 with catch @ 0270a98c
                       catch() { ... } // from try @ 0270ac90 with catch @ 0270a98c
                       catch() { ... } // from try @ 0270ad34 with catch @ 0270a98c */
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
    if ((lVar2 != 0) && (lVar2 = UnityEngine_Animation__get_Item_1f79fb0(lVar2,uVar1,0), lVar2 != 0)
       ) {
      UnityEngine_AnimationState__set_speed_1f7a570(0xbf800000,lVar2,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        UnityEngine_AnimationState__set_time_1f7a49c
                  (*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),lVar2,0);
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar2 = *(long *)(param_1 + 0x28);
          uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

