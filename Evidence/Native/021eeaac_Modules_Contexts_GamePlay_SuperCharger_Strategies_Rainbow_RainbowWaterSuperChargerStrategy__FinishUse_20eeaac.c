/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$FinishUse
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__FinishUse (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$FinishUse
   void 
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__FinishUse
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__FinishUse_20eeaac
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c29743 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d6390);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c29743 = 1;
  }
  puVar2 = PTR_DAT_057d6390;
  Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__ApplyRainbow_20eeb40
            (param_1);
  Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__UnlockPickedBottle_20eeb68
            (param_1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar3,0);
  puVar1 = PTR_DAT_057d68b0;
  if ((bRam0000000005c29744 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576abf8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0575f4f8);
    FUN_012d0dc8(PTR_DAT_057d68b0);
    bRam0000000005c29744 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerUseEventDTO___ctor_296fe2c(lVar3,0);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar5 == 0)) goto LAB_021eec88;
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 != 0) {
        Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__AddRainbowUsage_1f1a8a4
                  (lVar5,*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x20),0);
      }
    }
    puVar1 = PTR_DAT_0576abf8;
    if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0575f4f8 + 0x20) + 0xc0) + 0x20)
                    + 8))(*(long *)(lVar4 + 0x10),lVar3);
        return;
      }
      return;
    }
  }
LAB_021eec88:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

