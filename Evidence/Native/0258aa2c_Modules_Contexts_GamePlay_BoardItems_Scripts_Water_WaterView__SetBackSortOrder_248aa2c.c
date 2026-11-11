/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetBackSortOrder
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetBackSortOrder (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t sortOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetBackSortOrder
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetBackSortOrder
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t sortOrder, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetBackSortOrder_248aa2c
               (long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x48),param_2,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      UnityEngine_Renderer__set_sortingOrder_40826fc
                (*(long *)(param_1 + 0x38),(int)param_2 + -0xc,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        UnityEngine_Renderer__set_sortingOrder_40826fc
                  (*(long *)(param_1 + 0x20),param_2 & 0xffffffff,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          UnityEngine_Renderer__set_sortingOrder_40826fc
                    (*(long *)(param_1 + 0x28),param_2 & 0xffffffff,0);
          if (*(long *)(param_1 + 0x30) != 0) {
            UnityEngine_Renderer__set_sortingOrder_40826fc
                      (*(long *)(param_1 + 0x30),param_2 & 0xffffffff,0);
            uVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                              (param_1);
            if ((uVar1 & 1) == 0) {
              return;
            }
            if (*(long *)(param_1 + 0x90) != 0) {
              Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__SetSortOrder_20eefd4
                        (*(long *)(param_1 + 0x90),param_2 & 0xffffffff,0);
              lVar2 = *(long *)(param_1 + 0x40);
              if (lVar2 != 0) {
                if (pcRam0000000005c39c40 == (code *)0x0) {
                  pcRam0000000005c39c40 = (code *)FUN_012d0d84(&UNK_043eafc0);
                }
                    /* WARNING: Could not recover jumptable at 0x0418273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000005c39c40)(lVar2,(int)param_2 + -0xb);
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

