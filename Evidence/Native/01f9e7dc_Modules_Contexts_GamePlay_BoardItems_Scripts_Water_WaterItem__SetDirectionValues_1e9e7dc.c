/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetDirectionValues
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetDirectionValues (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, bool isLeftSide, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetDirectionValues
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetDirectionValues
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, bool isLeftSide, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetDirectionValues_1e9e7dc
               (long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar1 + 0x88) != 0) {
    *(byte *)(*(long *)(lVar1 + 0x88) + 0x34) = param_2 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(lVar1,param_2 & 1,0);
}

