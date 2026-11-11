/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies.ChargeableBottleSuperChargerStrategy$$CanIncreaseProgress
bool Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__CanIncreaseProgress (Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies.ChargeableBottleSuperChargerStrategy$$CanIncreaseProgress
   bool 
   Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__CanIncreaseProgress
   (Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__CanIncreaseProgress_20e96dc
          (long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 021e96e0 to 022e9747 has its CatchHandler @ 021e95f4 */
  lVar1 = Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_ChargeableBottleSuperChargerStrategy__FindChargeableBottleItem_20e94b8
                    ();
  if (lVar1 == 0) {
LAB_021e9710:
    uVar3 = 0;
  }
  else {
    uVar2 = Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__HasCharge_2f58768
                      (lVar1,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(char *)(*(long *)(param_1 + 0x10) + 0x21) == '\0') goto LAB_021e9710;
    }
    uVar3 = 1;
  }
  return uVar3;
}

