/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$Initialize
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__Initialize (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o* __this, Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_SuperChargerStrategyContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterSuperChargerStrategy$$Initialize
   void 
   Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__Initialize
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy_o*
   __this, Modules_Contexts_GamePlay_SuperCharger_Scripts_Strategies_SuperChargerStrategyContext_o*
   context, const MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterSuperChargerStrategy__Initialize_20ee6e0
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000005c29741 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c02d0);
    FUN_012d0dc8(PTR_DAT_057972f8);
    bRam0000000005c29741 = 1;
  }
  *(long *)(param_1 + 0x10) = param_2;
  FUN_012d0d74((long *)(param_1 + 0x10),param_2);
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057972f8);
    puVar1 = PTR_DAT_057c02d0;
    if (lVar2 != 0) {
      System_Object___ctor_23dfe5c(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      FUN_012d0d74((undefined8 *)(lVar2 + 0x10),uVar3);
      *(long *)(param_1 + 0x18) = lVar2;
      FUN_012d0d74((long *)(param_1 + 0x18),lVar2);
      *(undefined8 *)(param_1 + 0x20) = 0;
      FUN_012d0d74((undefined8 *)(param_1 + 0x20),0);
      *(undefined1 *)(param_1 + 0x28) = 0;
      **(undefined1 **)(*(long *)puVar1 + 0xb8) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

