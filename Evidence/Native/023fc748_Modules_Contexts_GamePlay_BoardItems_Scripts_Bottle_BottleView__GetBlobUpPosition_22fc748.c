/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$GetBlobUpPosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__GetBlobUpPosition (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$GetBlobUpPosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__GetBlobUpPosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo*
   method); */

float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__GetBlobUpPosition_22fc748
                (long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if ((*(long *)(param_1 + 0x110) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x110) + 0x48), lVar1 != 0)) {
    fVar2 = (float)UnityEngine_Transform__get_position_4092b08(lVar1,0);
    if ((*(long *)(param_1 + 0x110) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x110) + 0x40), lVar1 != 0)) {
      fVar3 = (float)UnityEngine_Transform__get_position_4092b08(lVar1,0);
      return (fVar2 + fVar3) * 0.5 + 0.0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

