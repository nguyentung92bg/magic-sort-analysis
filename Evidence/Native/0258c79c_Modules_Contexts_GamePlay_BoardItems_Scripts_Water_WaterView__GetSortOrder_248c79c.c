/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$GetSortOrder
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetSortOrder (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$GetSortOrder
   int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetSortOrder
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetSortOrder_248c79c
               (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x28);
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

