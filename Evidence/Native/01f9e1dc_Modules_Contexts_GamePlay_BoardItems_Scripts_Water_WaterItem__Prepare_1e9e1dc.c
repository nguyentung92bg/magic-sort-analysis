/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, UnityEngine_Vector3_o viewOffset, int32_t frontSortOrder, int32_t backSortOrder, int32_t bottleHeight, int32_t height, int32_t index, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, bool isVisible, int32_t bottlesAndWaterVariant, Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines_o* bottleOutlines, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, UnityEngine_Vector3_o
   viewOffset, int32_t frontSortOrder, int32_t backSortOrder, int32_t bottleHeight, int32_t height,
   int32_t index, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, bool isVisible, int32_t bottlesAndWaterVariant,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines_o* bottleOutlines, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__Prepare_1e9e1dc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               int param_9,undefined8 param_10,byte param_11,undefined4 param_12,undefined8 param_13
               )

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_4 + 0x58) = param_10;
  FUN_012d0d74((undefined8 *)(param_4 + 0x58),param_10);
  *(undefined4 *)(param_4 + 0x40) = param_8;
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  if (*(long *)(param_4 + 0x48) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetColor_248b118
              (*(long *)(param_4 + 0x48),*(undefined8 *)(param_4 + 0x58),0);
    uVar5 = 0;
    *(byte *)(param_4 + 0x54) = param_11 & 1;
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,0,0);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalRotation_40ea1a4(param_4,0);
    if (*(long *)(param_4 + 0x48) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__Prepare_248a8c0
                (*(long *)(param_4 + 0x48),param_5,param_6,param_7,param_12,param_13,1,0);
      lVar2 = *(long *)(param_4 + 0x48);
      *(int *)(param_4 + 0x60) = *(int *)(param_4 + 0x40);
      *(int *)(param_4 + 100) = param_9;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      param_9 = param_9 + *(int *)(param_4 + 0x40);
      if ((bRam0000000005c2b279 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0577d048,param_9,param_7,0);
        bRam0000000005c2b279 = 1;
      }
      if (((*(long *)(lVar2 + 0x68) != 0) &&
          (lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                             (*(long *)(lVar2 + 0x68),param_7), puVar1 = PTR_DAT_0577d048,
          lVar3 != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
        uVar4 = System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                          (*(long *)(lVar3 + 0x18),param_9,*(undefined8 *)PTR_DAT_0577d048);
        if (*(long *)(lVar3 + 0x18) != 0) {
          System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                    (*(long *)(lVar3 + 0x18),param_9,*(undefined8 *)puVar1);
          if ((*(long *)(lVar2 + 0x58) != 0) &&
             (lVar3 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(lVar2 + 0x58),0),
             lVar3 != 0)) {
            UnityEngine_Transform__set_localScale_40932d0(0x3f800000,0x3f800000,0x3f800000,lVar3,0);
            if ((*(long *)(lVar2 + 0x58) != 0) &&
               (lVar3 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(lVar2 + 0x58),0),
               lVar3 != 0)) {
              UnityEngine_Transform__set_localPosition_4092ce0(uVar4,uVar5,0,lVar3,0);
              if (*(long *)(lVar2 + 0x58) != 0) {
                lVar2 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(lVar2 + 0x58),0);
                UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
                if (lVar2 != 0) {
                  if (pcRam0000000005c3a640 == (code *)0x0) {
                    pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074,0);
                  }
                  (*pcRam0000000005c3a640)(lVar2,&stack0xffffffffffffffd0);
                  return;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

