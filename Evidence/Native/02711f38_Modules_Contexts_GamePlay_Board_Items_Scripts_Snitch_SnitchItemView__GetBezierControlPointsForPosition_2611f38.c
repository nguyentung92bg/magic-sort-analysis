/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetBezierControlPointsForPosition
System_ValueTuple_Vector3__Vector3__o Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetBezierControlPointsForPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o startPosition, UnityEngine_Vector3_o targetPosition, int32_t startRowIndex, int32_t targetRowIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetBezierControlPointsForPosition
   System_ValueTuple_Vector3__Vector3__o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetBezierControlPointsForPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o startPosition, UnityEngine_Vector3_o targetPosition, int32_t startRowIndex,
   int32_t targetRowIndex, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetBezierControlPointsForPosition_2611f38
               (float *param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5,
               float param_6,long param_7,int param_8,int param_9)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = PTR_DAT_05764ae0;
  if ((bRam0000000005c2ba0e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05764ae0);
    FUN_012d0dc8(PTR_DAT_05799ed8);
    bRam0000000005c2ba0e = 1;
  }
  if (**(float **)(*(long *)puVar1 + 0xb8) <= ABS(param_2 - param_5)) {
    bVar2 = param_5 < param_2;
  }
  else {
    bVar2 = (param_2 < 0.0 && param_5 < 0.0) && (param_2 <= 0.0 || param_5 <= 0.0);
  }
  if (cRam0000000005c244b8 == '\0') {
    FUN_012d0dc8(PTR_DAT_057d6f00);
    cRam0000000005c244b8 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_05799ed8;
  lVar4 = *(long *)(param_7 + 0x38);
  if (lVar4 != 0) {
    if (*(float *)(lVar4 + 0x3a8) <=
        SQRT((param_2 - param_5) * (param_2 - param_5) + (param_3 - param_6) * (param_3 - param_6)))
    {
      fVar6 = *(float *)(lVar4 + 900);
      fVar7 = 1.0;
      if (param_6 <= param_3) {
        fVar7 = -1.0;
      }
      fVar9 = 0.0;
      fVar8 = 0.0;
      if (fVar6 != *(float *)(lVar4 + 0x388)) {
        fVar6 = (ABS(param_5 - param_2) - fVar6) / (*(float *)(lVar4 + 0x388) - fVar6);
        fVar8 = 0.0;
        if ((0.0 <= fVar6) && (fVar8 = fVar6, 1.0 < fVar6)) {
          fVar8 = 1.0;
        }
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      fVar6 = 1.0;
      if (!bVar2) {
        fVar6 = -1.0;
      }
      if (param_9 - param_8 == 2) {
        fVar9 = *(float *)(lVar4 + 0x3a0);
        bVar2 = false;
        fVar5 = -0.0;
      }
      else if (param_9 - param_8 == 1) {
        fVar5 = *(float *)(lVar4 + 0x39c);
        bVar2 = true;
      }
      else {
        bVar2 = false;
        fVar5 = 0.0;
      }
      if (param_9 == param_8) {
        fVar5 = *(float *)(lVar4 + 0x3a4);
      }
      else {
        fVar5 = fVar7 * ABS(param_6 - param_3) + fVar5;
      }
      fVar7 = *(float *)(lVar4 + 0x398) +
              fVar8 * (*(float *)(lVar4 + 0x394) - *(float *)(lVar4 + 0x398));
      fVar8 = 0.0;
      if (!bVar2) {
        fVar8 = fVar9 + *(float *)(lVar4 + 0x358);
      }
      fVar9 = *(float *)(lVar4 + 0x354);
    }
    else {
      fVar7 = *(float *)(lVar4 + 0x3ac);
      fVar5 = *(float *)(lVar4 + 0x3b0);
      fVar9 = *(float *)(lVar4 + 0x3b8);
      fVar8 = *(float *)(lVar4 + 0x3bc);
      fVar6 = 1.0;
      if (!bVar2) {
        fVar6 = -1.0;
      }
    }
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    uVar3 = *(undefined8 *)puVar1;
    *param_1 = fVar6 * fVar7;
    param_1[1] = fVar5;
    param_1[2] = 0.0;
    param_1[3] = fVar6 * fVar9;
    param_1[4] = fVar8;
    param_1[5] = 0.0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

