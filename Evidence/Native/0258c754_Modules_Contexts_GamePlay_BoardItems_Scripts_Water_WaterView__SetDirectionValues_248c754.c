/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetDirectionValues
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetDirectionValues (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, bool isLeftSide, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetDirectionValues
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetDirectionValues
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, bool isLeftSide, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetDirectionValues_248c754
               (long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    *(byte *)(*(long *)(param_1 + 0x88) + 0x34) = param_2 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

