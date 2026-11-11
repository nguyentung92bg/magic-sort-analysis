/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$ToggleWaterShape
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ToggleWaterShape (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, bool active, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterShapeRenderer$$ToggleWaterShape
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ToggleWaterShape
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer_o* __this, bool active,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ToggleWaterShape_1e9ebec
               (undefined8 param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

