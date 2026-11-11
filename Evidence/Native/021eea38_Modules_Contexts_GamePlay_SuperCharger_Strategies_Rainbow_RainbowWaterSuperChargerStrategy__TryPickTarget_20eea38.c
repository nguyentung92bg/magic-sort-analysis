/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$TryPickTarget
bool Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__TryPickTarget (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$TryPickTarget
   bool 
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__TryPickTarget
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__TryPickTarget_20eea38
               (long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowTargetPicker__PickWater_20ec440
                      ();
    plVar2 = (long *)(param_1 + 0x20);
    *plVar2 = lVar1;
    FUN_012d0d74(plVar2,lVar1);
    return *plVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

