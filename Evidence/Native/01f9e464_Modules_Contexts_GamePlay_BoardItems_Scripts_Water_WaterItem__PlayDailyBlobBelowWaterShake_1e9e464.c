/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$PlayDailyBlobBelowWaterShake
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayDailyBlobBelowWaterShake (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$PlayDailyBlobBelowWaterShake
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayDailyBlobBelowWaterShake
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayDailyBlobBelowWaterShake_1e9e464
               (long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x48) + 0x50);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0258c794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,0);
}

