/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$GetCenterPosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__GetCenterPosition (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$GetCenterPosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__GetCenterPosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__GetCenterPosition_22fe22c
               (long param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_30 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_Renderer__get_bounds_4081df0(&uStack_48,*(long *)(param_1 + 0x30),0);
    uStack_28 = uStack_40;
    uStack_30 = uStack_48;
    uStack_20 = uStack_38;
    UnityEngine_Bounds__get_center_38374e8(&uStack_30,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

