/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetBlobUpPosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBlobUpPosition (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetBlobUpPosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBlobUpPosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBlobUpPosition_249d968
                (long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  float extraout_s0;
  float fVar5;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar4 = 0;
  lVar2 = lVar3;
  if ((*(long *)(lVar3 + 0x110) != 0) &&
     (lVar1 = *(long *)(*(long *)(lVar3 + 0x110) + 0x48), lVar2 = 0, lVar1 != 0)) {
    lVar2 = UnityEngine_Transform__get_position_4092b08(lVar1,0);
    uVar4 = extraout_x1;
    if ((*(long *)(lVar3 + 0x110) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar3 + 0x110) + 0x40), lVar2 = 0, lVar3 != 0)) {
      fVar5 = (float)UnityEngine_Transform__get_position_4092b08(lVar3,0);
      return (extraout_s0 + fVar5) * 0.5 + 0.0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(lVar2,uVar4);
}

