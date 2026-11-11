/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$GetRotatedTopLine
System_ValueTuple_Vector3__Vector3__o Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetRotatedTopLine (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this, UnityEngine_Vector2_o topRight, UnityEngine_Vector2_o topLeft, float rotation, float waterHeight, int32_t pourableWaterHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0258d348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$GetRotatedTopLine
   System_ValueTuple_Vector3__Vector3__o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetRotatedTopLine
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this,
   UnityEngine_Vector2_o topRight, UnityEngine_Vector2_o topLeft, float rotation, float waterHeight,
   int32_t pourableWaterHeight, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetRotatedTopLine_248d29c
               (undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6)

{
  float fVar1;
  float fVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  cosf(param_6 * _UNK_04339bec);
  fVar1 = (param_2 - param_4) * 10.0;
  fVar2 = (param_3 - param_5) * 10.0;
  Modules_Infrastructure_Utils_LineUtils__RotateAround_3de3270
            (&uStack_68,param_2 + fVar1,param_3 + fVar2,0,param_4 - fVar1,param_5 - fVar2,0,0);
  param_1[2] = uStack_58;
  param_1[1] = uStack_60;
  *param_1 = uStack_68;
  return;
}

