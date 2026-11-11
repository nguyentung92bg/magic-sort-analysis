/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$SetSpriteAlpha
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSpriteAlpha (UnityEngine_SpriteRenderer_o* sprite, float alpha, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$SetSpriteAlpha
   void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSpriteAlpha
   (UnityEngine_SpriteRenderer_o* sprite, float alpha, const MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSpriteAlpha_20ef304
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_4 != 0) {
    uStack_30 = UnityEngine_SpriteRenderer__get_color_4095d44(param_4,0);
    uStack_2c = param_2;
    uStack_28 = param_3;
    uStack_24 = param_1;
    if (pcRam0000000005c3a788 == (code *)0x0) {
      pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
    }
    (*pcRam0000000005c3a788)(param_4,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

