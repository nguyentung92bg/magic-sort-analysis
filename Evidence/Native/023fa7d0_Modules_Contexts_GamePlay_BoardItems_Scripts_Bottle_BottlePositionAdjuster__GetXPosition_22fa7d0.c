/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetXPosition
float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetXPosition (int32_t bottleCount, bool useDefaultCalculation, float bottleWidth, float distanceBetweenBottlesFor6, float distanceBetweenBottles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetXPosition
   float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetXPosition
   (int32_t bottleCount, bool useDefaultCalculation, float bottleWidth, float
   distanceBetweenBottlesFor6, float distanceBetweenBottles, const MethodInfo* method); */

float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetXPosition_22fa7d0
                (float param_1,float param_2,float param_3,int param_4,uint param_5)

{
  float fVar1;
  
  if ((param_5 & 1) == 0) {
    fVar1 = (param_1 + param_3) * (float)(param_4 + -1) * -0.5;
  }
  else {
    fVar1 = 0.0;
    if (1 < param_4) {
      fVar1 = -(param_2 * 5.0 * 0.5 - (float)(6 - param_4) * param_1 * 0.5);
    }
  }
  return fVar1;
}

