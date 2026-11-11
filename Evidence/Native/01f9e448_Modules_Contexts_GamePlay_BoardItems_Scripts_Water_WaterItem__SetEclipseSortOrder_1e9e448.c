/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetEclipseSortOrder
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetEclipseSortOrder (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetEclipseSortOrder
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetEclipseSortOrder
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t sortOrder, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetEclipseSortOrder_1e9e448
               (long param_1,ulong param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x50);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x28);
    if (lVar1 != 0) {
      if (pcRam0000000005c39c40 == (code *)0x0) {
        pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
      }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c39c40)(lVar1,param_2 & 0xffffffff);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0(0,param_2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,param_2,0);
}

