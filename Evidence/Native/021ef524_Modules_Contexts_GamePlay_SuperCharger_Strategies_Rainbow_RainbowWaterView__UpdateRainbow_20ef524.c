/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$UpdateRainbow
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__UpdateRainbow (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this, bool isRainbow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$UpdateRainbow
   void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__UpdateRainbow
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this, bool
   isRainbow, const MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__UpdateRainbow_20ef524
               (long param_1,uint param_2)

{
  long lVar1;
  
  Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
            ();
  Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__RestoreRainbowSpriteAlphas_20ef560
            (param_1);
  lVar1 = *(long *)(param_1 + 0x20);
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

