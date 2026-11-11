/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$GetBelowWaterSortOrder
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBelowWaterSortOrder (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$GetBelowWaterSortOrder
   int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBelowWaterSortOrder
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBelowWaterSortOrder_1e9e7fc
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x48);
  if (lVar1 != 0) {
    if (pcRam0000000005c39c38 == (code *)0x0) {
      pcRam0000000005c39c38 = (code *)FUN_012d0d84(&UNK_043eaf97);
    }
                    /* WARNING: Could not recover jumptable at 0x041826f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c39c38)(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,0);
}

