/* IL2CPP: Modules.LevelEditor.WaterSort.Common.GridRenderer$$GetRoundedSnapPosition
UnityEngine_Vector2_o Modules_LevelEditor_WaterSort_Common_GridRenderer__GetRoundedSnapPosition (Modules_LevelEditor_WaterSort_Common_GridRenderer_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.GridRenderer$$GetRoundedSnapPosition
   UnityEngine_Vector2_o Modules_LevelEditor_WaterSort_Common_GridRenderer__GetRoundedSnapPosition
   (Modules_LevelEditor_WaterSort_Common_GridRenderer_o* __this, UnityEngine_Vector2_o position,
   const MethodInfo* method); */

float Modules_LevelEditor_WaterSort_Common_GridRenderer__GetRoundedSnapPosition_37a13e8
                (float param_1,float param_2,long param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  double dStack_58;
  
  param_1 = param_1 / *(float *)(param_3 + 0x20);
  dVar1 = (double)FUN_01038b50((double)param_1,&dStack_58);
  if (0.0 <= param_1) {
    if (dVar1 != 0.5) {
      fVar3 = (float)(int)(param_1 + 0.5);
      goto LAB_038a14cc;
    }
    fVar2 = (float)dStack_58 + 1.0;
  }
  else {
    if (dVar1 != -0.5) {
      fVar3 = (float)(int)(param_1 + -0.5);
      goto LAB_038a14cc;
    }
    fVar2 = (float)dStack_58 + -1.0;
  }
  fVar3 = (float)dStack_58;
  if (((long)dStack_58 & 1U) != 0) {
    fVar3 = fVar2;
  }
LAB_038a14cc:
  fVar2 = *(float *)(param_3 + 0x20);
  FUN_01038b50((double)(param_2 / fVar2),&dStack_58);
  return fVar3 * fVar2;
}

