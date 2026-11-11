/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$UpdateState
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__UpdateState (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, bool shouldOpen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$UpdateState
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__UpdateState
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, bool shouldOpen,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__UpdateState_260a288
               (long param_1,byte param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  *(byte *)(param_1 + 0x118) = param_2 & 1;
  uVar1 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__IsToggleAnimationAlreadyPlaying_260a7e8
                    ();
  if ((uVar1 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        uVar2 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
        if ((lVar3 != 0) &&
           (lVar3 = UnityEngine_Animation__get_Item_1f79fb0(lVar3,uVar2,0), lVar3 != 0)) {
          UnityEngine_AnimationState__set_speed_1f7a570(0xbf800000,lVar3,0);
          if (*(long *)(param_1 + 0x20) != 0) {
            UnityEngine_AnimationState__set_time_1f7a49c
                      (*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),lVar3,0);
            if (*(long *)(param_1 + 0x40) != 0) {
              lVar3 = *(long *)(param_1 + 0x28);
              uVar2 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
              if (lVar3 != 0) goto UnityEngine_Animation__Play_1f7a100;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      uVar2 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
      if ((lVar3 != 0) &&
         (lVar3 = UnityEngine_Animation__get_Item_1f79fb0(lVar3,uVar2,0), lVar3 != 0)) {
        UnityEngine_AnimationState__set_speed_1f7a570(0x3f800000,lVar3,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_AnimationState__set_time_1f7a49c
                    (*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x30),lVar3,0);
          if (*(long *)(param_1 + 0x40) != 0) {
            lVar3 = *(long *)(param_1 + 0x28);
            uVar2 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
            if (lVar3 != 0) goto UnityEngine_Animation__Play_1f7a100;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    uVar2 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
    if ((lVar3 != 0) && (lVar3 = UnityEngine_Animation__get_Item_1f79fb0(lVar3,uVar2,0), lVar3 != 0)
       ) {
      fVar4 = (float)UnityEngine_AnimationState__get_speed_1f7a534(lVar3,0);
      UnityEngine_AnimationState__set_speed_1f7a570(-fVar4,lVar3,0);
      if ((param_2 & 1) == 0) {
        fVar4 = (float)UnityEngine_AnimationState__get_time_1f7a460(lVar3,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0270a8e8;
        if (fVar4 <= *(float *)(*(long *)(param_1 + 0x20) + 0x34)) {
          UnityEngine_AnimationState__get_time_1f7a460(lVar3,0);
        }
        UnityEngine_AnimationState__set_time_1f7a49c(lVar3,0);
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        uVar2 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
        if (lVar3 != 0) {
UnityEngine_Animation__Play_1f7a100:
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
  }
LAB_0270a8e8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

