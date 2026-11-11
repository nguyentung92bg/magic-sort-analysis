/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$GetAnimationLockDelay
float Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetAnimationLockDelay (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, bool shouldOpen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$GetAnimationLockDelay
   float Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetAnimationLockDelay
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, bool shouldOpen,
   const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetAnimationLockDelay_2609708
          (long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 extraout_s0;
  float fVar5;
  float fVar6;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x40),0);
    if (lVar4 != 0) {
      lVar4 = UnityEngine_Animation__get_Item_1f79fb0(lVar4,uVar1,0);
      uVar2 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__IsToggleAnimationAlreadyPlaying_260a7e8
                        (param_1);
      if ((uVar2 & 1) == 0) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != 0) {
          if ((param_2 & 1) == 0) {
            fVar6 = *(float *)(lVar4 + 0x28);
          }
          else {
            fVar6 = *(float *)(lVar4 + 0x24);
          }
LAB_027097ac:
          return ZEXT416((uint)fVar6);
        }
      }
      else if (lVar4 != 0) {
        fVar5 = (float)UnityEngine_AnimationState__get_time_1f7a460(lVar4,0);
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != 0) {
          if ((param_2 & 1) == 0) {
            fVar6 = *(float *)(lVar3 + 0x28);
            if (fVar5 <= fVar6) {
              if (pcRam0000000005c28c40 == (code *)0x0) {
                pcRam0000000005c28c40 = (code *)FUN_012d0d84(&UNK_0438d3a5);
              }
                    /* WARNING: Could not recover jumptable at 0x0207a498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c28c40)(lVar4);
              auVar7._4_4_ = extraout_var;
              auVar7._0_4_ = extraout_s0;
              auVar7._8_8_ = extraout_var_00;
              return auVar7;
            }
          }
          else {
            fVar6 = *(float *)(lVar3 + 0x24);
            if (fVar6 < fVar5) {
              fVar6 = 0.0;
            }
          }
          goto LAB_027097ac;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

