/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$GetTopLocalPosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetTopLocalPosition (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$GetTopLocalPosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetTopLocalPosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetTopLocalPosition_248bb94
          (long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x50),0);
  if (lVar1 != 0) {
    uStack_28 = 0;
    uStack_30 = 0;
    if (pcRam0000000005c3a618 == (code *)0x0) {
      pcRam0000000005c3a618 = (code *)FUN_012d0d84(&UNK_043eef0d,0);
    }
    (*pcRam0000000005c3a618)(lVar1,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

