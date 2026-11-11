/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$EvaluateCubicBezierTangent
UnityEngine_Vector3_o Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__EvaluateCubicBezierTangent (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, UnityEngine_Vector3_o p0, UnityEngine_Vector3_o p1, UnityEngine_Vector3_o p2, UnityEngine_Vector3_o p3, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$EvaluateCubicBezierTangent
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__EvaluateCubicBezierTangent
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this,
   UnityEngine_Vector3_o p0, UnityEngine_Vector3_o p1, UnityEngine_Vector3_o p2,
   UnityEngine_Vector3_o p3, float t, const MethodInfo* method); */

float Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__EvaluateCubicBezierTangent_2755a24
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float fVar1;
  float in_stack_00000000;
  float in_stack_00000010;
  float in_stack_00000020;
  
  fVar1 = 1.0 - in_stack_00000020;
  return (in_stack_00000010 - in_stack_00000000) * in_stack_00000020 * 3.0 * in_stack_00000020 +
         (param_4 - param_1) * fVar1 * fVar1 * 3.0 +
         (in_stack_00000000 - param_4) * fVar1 * 6.0 * in_stack_00000020;
}

