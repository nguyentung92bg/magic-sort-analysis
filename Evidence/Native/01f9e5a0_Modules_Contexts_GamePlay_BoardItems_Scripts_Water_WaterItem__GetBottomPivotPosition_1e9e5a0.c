/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$GetBottomPivotPosition
float Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBottomPivotPosition (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$GetBottomPivotPosition
   float Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBottomPivotPosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t bottleHeight,
   const MethodInfo* method); */

float Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBottomPivotPosition_1e9e5a0
                (undefined1 param_1 [16],float param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = *(long *)(param_3 + 0x48);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar1 = *(int *)(param_3 + 100) + 1;
  if ((bRam0000000005c2b27a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577d048,iVar1,param_4,0);
    bRam0000000005c2b27a = 1;
  }
  lVar3 = *(long *)(lVar3 + 0x68);
  if (((lVar3 != 0) &&
      (lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                         (lVar3,param_4), puVar2 = PTR_DAT_0577d048, lVar3 != 0)) &&
     (*(long *)(lVar3 + 0x18) != 0)) {
    System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
              (*(long *)(lVar3 + 0x18),1,*(undefined8 *)PTR_DAT_0577d048);
    if (*(long *)(lVar3 + 0x18) != 0) {
      fVar4 = param_2;
      System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                (*(long *)(lVar3 + 0x18),iVar1,*(undefined8 *)puVar2);
      return fVar4 - param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

