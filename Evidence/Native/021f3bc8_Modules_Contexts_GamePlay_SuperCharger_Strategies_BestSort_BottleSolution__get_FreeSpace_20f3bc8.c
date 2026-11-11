/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.BestSort.BottleSolution$$get_FreeSpace
int32_t Modules_Contexts_GamePlay_SuperCharger_Strategies_BestSort_BottleSolution__get_FreeSpace (Modules_Contexts_GamePlay_SuperCharger_Strategies_BestSort_BottleSolution_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.BestSort.BottleSolution$$get_FreeSpace
   int32_t Modules_Contexts_GamePlay_SuperCharger_Strategies_BestSort_BottleSolution__get_FreeSpace
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_BestSort_BottleSolution_o* __this, const
   MethodInfo* method); */

int Modules_Contexts_GamePlay_SuperCharger_Strategies_BestSort_BottleSolution__get_FreeSpace_20f3bc8
              (long param_1)

{
  if ((bRam0000000005c29776 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f55a8);
    bRam0000000005c29776 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(int *)(param_1 + 0x2c) - *(int *)(*(long *)(param_1 + 0x20) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

