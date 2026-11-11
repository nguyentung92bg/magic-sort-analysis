/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$SendSuperChargerUsedEvent
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__SendSuperChargerUsedEvent (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$SendSuperChargerUsedEvent
   void 
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__SendSuperChargerUsedEvent
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__SendSuperChargerUsedEvent_20eeba0
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057d68b0;
  if ((bRam0000000005c29744 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576abf8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0575f4f8);
    FUN_012d0dc8(PTR_DAT_057d68b0);
    bRam0000000005c29744 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerUseEventDTO___ctor_296fe2c(lVar2,0);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
                    /* try { // try from 021eec20 to 022eeca3 has its CatchHandler @ 021eec20
                       catch() { ... } // from try @ 021eec20 with catch @ 021eec20
                       catch() { ... } // from try @ 021eecb4 with catch @ 021eec20
                       catch() { ... } // from try @ 021eecf8 with catch @ 021eec20
                       catch() { ... } // from try @ 021eed2c with catch @ 021eec20 */
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar4 == 0)) goto LAB_021eec88;
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 != 0) {
        Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__AddRainbowUsage_1f1a8a4
                  (lVar4,*(undefined8 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x20),0);
      }
    }
    puVar1 = PTR_DAT_0576abf8;
    if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0575f4f8 + 0x20) + 0xc0) + 0x20)
                    + 8))(*(long *)(lVar3 + 0x10),lVar2);
        return;
      }
      return;
    }
  }
LAB_021eec88:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

