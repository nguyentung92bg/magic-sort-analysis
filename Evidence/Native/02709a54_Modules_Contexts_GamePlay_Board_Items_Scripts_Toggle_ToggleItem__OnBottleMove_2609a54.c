/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnBottleMove
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnBottleMove (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, int32_t pourableHeight, bool isLeft, float animationDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OnBottleMove
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnBottleMove
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, int32_t
   pourableHeight, bool isLeft, float animationDuration, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OnBottleMove_2609a54
               (float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_2 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar2 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__IsToggleAnimationAlreadyPlaying_260a7e8
                    ();
                    /* try { // try from 02709a68 to 02809a7f has its CatchHandler @ 02709aec */
  if ((param_1 == 0.0) || ((uVar2 & 1) != 0)) {
    return;
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    lVar4 = *(long *)(lVar1 + 0x28);
    param_1 = *(float *)(*(long *)(lVar1 + 0x20) + 0x38) / param_1;
    if ((param_4 & 1) == 0) {
      if (((*(long *)(lVar1 + 0x70) == 0) ||
          (uVar3 = UnityEngine_Object__get_name_4078cb0(*(long *)(lVar1 + 0x70),0), lVar4 == 0)) ||
         (lVar4 = UnityEngine_Animation__get_Item_1f79fb0(lVar4,uVar3,0), lVar4 == 0))
      goto LAB_02709b68;
      UnityEngine_AnimationState__set_speed_1f7a570(param_1,lVar4,0);
      lVar4 = *(long *)(lVar1 + 0x70);
    }
    else {
      if (((*(long *)(lVar1 + 0x68) == 0) ||
          (uVar3 = UnityEngine_Object__get_name_4078cb0(*(long *)(lVar1 + 0x68),0), lVar4 == 0)) ||
         (lVar4 = UnityEngine_Animation__get_Item_1f79fb0(lVar4,uVar3,0), lVar4 == 0))
      goto LAB_02709b68;
      UnityEngine_AnimationState__set_speed_1f7a570(param_1,lVar4,0);
      lVar4 = *(long *)(lVar1 + 0x68);
    }
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar1 + 0x28);
      uVar3 = UnityEngine_Object__get_name_4078cb0(lVar4,0);
      if (lVar1 != 0) {
        if (pcRam0000000005c28c10 == (code *)0x0) {
          pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar3,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c10)(lVar1,uVar3,0);
        return;
      }
    }
  }
LAB_02709b68:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

