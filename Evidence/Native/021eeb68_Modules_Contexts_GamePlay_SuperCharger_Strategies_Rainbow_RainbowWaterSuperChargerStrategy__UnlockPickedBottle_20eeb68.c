/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$UnlockPickedBottle
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__UnlockPickedBottle (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$UnlockPickedBottle
   void 
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__UnlockPickedBottle
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

ulong Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__UnlockPickedBottle_20eeb68
                (ulong param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar3 == 0)) {
    return param_1;
  }
  lVar3 = *(long *)(lVar3 + 0x40);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c3aa98 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aeae8,param_1,0);
    bRam0000000005c3aa98 = 1;
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *(long *)PTR_DAT_057aeae8;
  iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0xa0) + 8))
                    (lVar3,param_1);
  if (-1 < iVar1) {
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x158) + 8))(lVar3,iVar1);
  }
  return (ulong)(-1 < iVar1);
}

