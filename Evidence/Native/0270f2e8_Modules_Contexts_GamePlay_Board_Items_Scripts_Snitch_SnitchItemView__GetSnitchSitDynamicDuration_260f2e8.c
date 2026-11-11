/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetSnitchSitDynamicDuration
float Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchSitDynamicDuration (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o startPos, UnityEngine_Vector3_o targetPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetSnitchSitDynamicDuration
   float 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchSitDynamicDuration
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o startPos, UnityEngine_Vector3_o targetPos, const MethodInfo* method); */

float Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchSitDynamicDuration_260f2e8
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,long param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (cRam0000000005c25e4a == '\0') {
    FUN_012d0dc8(PTR_DAT_057d6f00);
    cRam0000000005c25e4a = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar1 = *(long *)(param_7 + 0x38);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  fVar2 = *(float *)(lVar1 + 0x3cc);
  fVar3 = 0.0;
  if (fVar2 != *(float *)(lVar1 + 0x3d0)) {
    fVar2 = (SQRT((param_3 - param_6) * (param_3 - param_6) +
                  (param_1 - param_4) * (param_1 - param_4) +
                  (param_2 - param_5) * (param_2 - param_5)) - fVar2) /
            (*(float *)(lVar1 + 0x3d0) - fVar2);
    fVar3 = 0.0;
    if ((0.0 <= fVar2) && (fVar3 = fVar2, 1.0 < fVar2)) {
      fVar3 = 1.0;
    }
  }
  return *(float *)(lVar1 + 0x3c4) + (*(float *)(lVar1 + 0x3c8) - *(float *)(lVar1 + 0x3c4)) * fVar3
  ;
}

