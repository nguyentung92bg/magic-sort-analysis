/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetBackSortOrder
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetBackSortOrder (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetBackSortOrder
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetBackSortOrder
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t sortOrder, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetBackSortOrder_1e9e7c0
               (long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar1 + 0x48) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar1 + 0x48),param_2,0);
    if (*(long *)(lVar1 + 0x38) != 0) {
      UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar1 + 0x38),(int)param_2 + -0xc,0);
      if (*(long *)(lVar1 + 0x20) != 0) {
        UnityEngine_Renderer__set_sortingOrder_40826fc
                  (*(long *)(lVar1 + 0x20),param_2 & 0xffffffff,0);
        if (*(long *)(lVar1 + 0x28) != 0) {
          UnityEngine_Renderer__set_sortingOrder_40826fc
                    (*(long *)(lVar1 + 0x28),param_2 & 0xffffffff,0);
          if (*(long *)(lVar1 + 0x30) != 0) {
            UnityEngine_Renderer__set_sortingOrder_40826fc
                      (*(long *)(lVar1 + 0x30),param_2 & 0xffffffff,0);
            uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                              (lVar1);
            if ((uVar2 & 1) == 0) {
              return;
            }
            if (*(long *)(lVar1 + 0x90) != 0) {
              Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSortOrder_20eefd4
                        (*(long *)(lVar1 + 0x90),param_2 & 0xffffffff,0);
              lVar1 = *(long *)(lVar1 + 0x40);
              if (lVar1 != 0) {
                if (pcRam0000000005c39c40 == (code *)0x0) {
                  pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
                }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000005c39c40)(lVar1,(int)param_2 + -0xb);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

