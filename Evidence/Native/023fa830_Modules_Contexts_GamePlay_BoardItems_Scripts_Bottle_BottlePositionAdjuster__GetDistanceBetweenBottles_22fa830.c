/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetDistanceBetweenBottles
float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetDistanceBetweenBottles (int32_t bottleCount, float bottleWidth, float distanceBetweenBottlesFor6, float distanceBetweenBottles, bool useDefaultCalculation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetDistanceBetweenBottles
   float 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetDistanceBetweenBottles
   (int32_t bottleCount, float bottleWidth, float distanceBetweenBottlesFor6, float
   distanceBetweenBottles, bool useDefaultCalculation, const MethodInfo* method); */

float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetDistanceBetweenBottles_22fa830
                (float param_1,float param_2,float param_3,int param_4,uint param_5)

{
  if ((param_5 & 1) == 0) {
    param_3 = param_1 + param_3;
  }
  else {
    param_3 = 0.0;
    if (param_4 + -1 != 0) {
      param_3 = (((param_2 * 5.0 + param_1) - (float)(6 - param_4) * param_1) - param_1) /
                (float)(param_4 + -1);
    }
  }
  return param_3;
}

