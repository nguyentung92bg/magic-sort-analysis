/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$PlayBottleMoveToggleAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayBottleMoveToggleAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, int32_t pourCount, bool isLeft, float animationDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$PlayBottleMoveToggleAnimation
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayBottleMoveToggleAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, int32_t pourCount,
   bool isLeft, float animationDuration, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayBottleMoveToggleAnimation_2609a70
               (float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 02709a80 to 02809adb has its CatchHandler @ 02709980 */
  uVar1 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__IsToggleAnimationAlreadyPlaying_260a7e8
                    ();
  if ((param_1 == 0.0) || ((uVar1 & 1) != 0)) {
                    /* try { // try from 02709af0 to 02809af3 has its CatchHandler @ 02709afc */
                    /* try { // try from 02709af4 to 02809aff has its CatchHandler @ 02709980 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02709af0 with catch @ 02709afc
                        */
    return;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    lVar4 = *(long *)(param_2 + 0x28);
    param_1 = *(float *)(*(long *)(param_2 + 0x20) + 0x38) / param_1;
    if ((param_4 & 1) == 0) {
                    /* try { // try from 02709b00 to 02809e0f has its CatchHandler @ 02709b00
                       catch() { ... } // from try @ 02709b00 with catch @ 02709b00
                       catch() { ... } // from try @ 02709ef0 with catch @ 02709b00
                       catch() { ... } // from try @ 02709fb4 with catch @ 02709b00
                       catch() { ... } // from try @ 0270a050 with catch @ 02709b00 */
      if (((*(long *)(param_2 + 0x70) == 0) ||
          (uVar2 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_2 + 0x70),0), lVar4 == 0))
         || (lVar4 = UnityEngine_Animation__get_Item_1f79fb0(lVar4,uVar2,0), lVar4 == 0))
      goto LAB_02709b68;
      UnityEngine_AnimationState__set_speed_1f7a570(param_1,lVar4,0);
      lVar4 = *(long *)(param_2 + 0x70);
    }
    else {
      if (((*(long *)(param_2 + 0x68) == 0) ||
          (uVar2 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_2 + 0x68),0), lVar4 == 0))
         || (lVar4 = UnityEngine_Animation__get_Item_1f79fb0(lVar4,uVar2,0), lVar4 == 0))
      goto LAB_02709b68;
                    /* try { // try from 02709adc to 02809aeb has its CatchHandler @ 02709aec */
      UnityEngine_AnimationState__set_speed_1f7a570(param_1,lVar4,0);
      lVar4 = *(long *)(param_2 + 0x68);
    }
    if (lVar4 != 0) {
      lVar3 = *(long *)(param_2 + 0x28);
      uVar2 = UnityEngine_Object__get_name_4078cb0(lVar4,0);
      if (lVar3 != 0) {
        if (pcRam0000000005c28c10 == (code *)0x0) {
          pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c10)(lVar3,uVar2,0);
        return;
      }
    }
  }
LAB_02709b68:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

