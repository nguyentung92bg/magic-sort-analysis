/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$ReverseCapAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__ReverseCapAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, bool shouldOpen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$ReverseCapAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__ReverseCapAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, bool shouldOpen,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__ReverseCapAnimation_260a820
               (long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
    if ((lVar2 != 0) && (lVar2 = UnityEngine_Animation__get_Item_1f79fb0(lVar2,uVar1,0), lVar2 != 0)
       ) {
      fVar3 = (float)UnityEngine_AnimationState__get_speed_1f7a534(lVar2,0);
      UnityEngine_AnimationState__set_speed_1f7a570(-fVar3,lVar2,0);
      if ((param_2 & 1) == 0) {
        fVar3 = (float)UnityEngine_AnimationState__get_time_1f7a460(lVar2,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0270a8e8;
        if (fVar3 <= *(float *)(*(long *)(param_1 + 0x20) + 0x34)) {
          UnityEngine_AnimationState__get_time_1f7a460(lVar2,0);
        }
        UnityEngine_AnimationState__set_time_1f7a49c(lVar2,0);
      }
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
LAB_0270a8e8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

