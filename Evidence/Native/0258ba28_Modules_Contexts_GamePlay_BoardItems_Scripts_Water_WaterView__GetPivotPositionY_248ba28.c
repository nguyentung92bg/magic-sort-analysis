/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$GetPivotPositionY
float Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetPivotPositionY (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t height, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$GetPivotPositionY
   float Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetPivotPositionY
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t height, int32_t
   bottleHeight, const MethodInfo* method); */

float Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetPivotPositionY_248ba28
                (undefined1 param_1 [16],float param_2,long param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  if ((bRam0000000005c2b27a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577d048);
    bRam0000000005c2b27a = 1;
  }
  if (((*(long *)(param_3 + 0x68) != 0) &&
      (lVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                         (*(long *)(param_3 + 0x68),param_5), puVar1 = PTR_DAT_0577d048, lVar2 != 0)
      ) && (*(long *)(lVar2 + 0x18) != 0)) {
    System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
              (*(long *)(lVar2 + 0x18),1,*(undefined8 *)PTR_DAT_0577d048);
    if (*(long *)(lVar2 + 0x18) != 0) {
      fVar3 = param_2;
      System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                (*(long *)(lVar2 + 0x18),param_4,*(undefined8 *)puVar1);
      return fVar3 - param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

