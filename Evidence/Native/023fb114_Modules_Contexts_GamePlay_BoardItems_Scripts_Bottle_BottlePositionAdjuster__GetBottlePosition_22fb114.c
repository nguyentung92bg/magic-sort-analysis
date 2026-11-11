/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetBottlePosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBottlePosition (int32_t bottleCount, int32_t x, float yPos, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o* bottleCollectionCameraConfig, bool useDefaultCalculation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetBottlePosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBottlePosition
   (int32_t bottleCount, int32_t x, float yPos,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o*
   bottleCollectionCameraConfig, bool useDefaultCalculation, const MethodInfo* method); */

float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBottlePosition_22fb114
                (int param_1,int param_2,long param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  fVar1 = *(float *)(param_3 + 0x30);
  if ((param_4 & 1) == 0) {
                    /* try { // try from 023fb170 to 024fb197 has its CatchHandler @ 023fb334 */
    fVar3 = fVar1 + *(float *)(param_3 + 0x24);
    fVar2 = fVar3 * (float)(param_1 + -1) * -0.5;
  }
  else {
    if (param_1 < 2) {
      fVar2 = 0.0;
      fVar3 = 0.0;
      if (param_1 == 1) goto LAB_023fb1c8;
      fVar3 = fVar1 * (float)(6 - param_1);
      fVar2 = 0.0;
    }
    else {
      fVar3 = fVar1 * (float)(6 - param_1);
      fVar2 = -(*(float *)(param_3 + 0x20) * 5.0 * 0.5 - fVar3 * 0.5);
    }
                    /* try { // try from 023fb1b0 to 024fb213 has its CatchHandler @ 023fb338 */
    fVar3 = (((fVar1 + *(float *)(param_3 + 0x20) * 5.0) - fVar3) - fVar1) / (float)(param_1 + -1);
  }
LAB_023fb1c8:
  return fVar2 + fVar3 * (float)param_2;
}

