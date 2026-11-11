/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$Dispose
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__Dispose (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01fda9f0) */
/* WARNING: Removing unreachable block (ram,0x01fdaa04) */
/* WARNING: Removing unreachable block (ram,0x01fdaa08) */
/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$Dispose
   void 
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__Dispose
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__Dispose_20eed8c
          (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x30;
  
  puVar1 = PTR_DAT_057815e0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021eed78 with catch @ 021eed94
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021eed7c with catch @ 021eed98
                        */
  if ((bRam0000000005c29746 & 1) == 0) {
                    /* try { // try from 021eedb0 to 022eedc7 has its CatchHandler @ 021eee28 */
    FUN_012d0dc8(PTR_DAT_057815e0);
    bRam0000000005c29746 = 1;
  }
  Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__UnlockPickedBottle_20eeb68
            (param_1);
                    /* try { // try from 021eedc8 to 022eee17 has its CatchHandler @ 021eed38 */
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if ((bRam0000000005c28433 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0,0);
    FUN_012d0dc8(PTR_DAT_058163b8);
    bRam0000000005c28433 = 1;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = DG_Tweening_Core_TweenManager__FilteredOperation_3331d1c
                      (0,1,1,param_1,0,0,0,0,in_x7,unaff_x21,unaff_x20,unaff_x19,unaff_x30);
  }
  return uVar2;
}

