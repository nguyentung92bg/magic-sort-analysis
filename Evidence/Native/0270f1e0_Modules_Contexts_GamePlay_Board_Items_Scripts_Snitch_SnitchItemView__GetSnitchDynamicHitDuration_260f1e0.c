/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetSnitchDynamicHitDuration
float Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchDynamicHitDuration (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o targetPos, int32_t snitchIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0270f2b4) */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetSnitchDynamicHitDuration
   float 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchDynamicHitDuration
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o targetPos, int32_t snitchIndex, const MethodInfo* method); */

float Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchDynamicHitDuration_260f1e0
                (float param_1,float param_2,float param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)(param_4 + 0x38) != 0) {
    fVar3 = param_2;
    fVar2 = (float)Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseWorldTargetPositionsByIndex_20fa0e8
                             (*(long *)(param_4 + 0x38),param_5,0);
    if (cRam0000000005c25e4a == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c25e4a = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar1 = *(long *)(param_4 + 0x38);
    if (lVar1 != 0) {
      fVar4 = *(float *)(lVar1 + 0x140);
      fVar2 = SQRT((0.0 - param_3) * (0.0 - param_3) +
                   (fVar2 - param_1) * (fVar2 - param_1) + (fVar3 - param_2) * (fVar3 - param_2));
      fVar3 = fVar4;
      if (fVar2 <= fVar4) {
        fVar3 = fVar2;
      }
      if (fVar2 < 2.0) {
        fVar3 = 2.0;
      }
      fVar3 = 1.0 - fVar3 / fVar4;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      return *(float *)(lVar1 + 0x13c) +
             (*(float *)(lVar1 + 0x138) - *(float *)(lVar1 + 0x13c)) * fVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

