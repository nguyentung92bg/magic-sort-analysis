/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetPivot
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetPivot (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t height, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$SetPivot
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetPivot
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t height, int32_t
   bottleHeight, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetPivot_1e9e5cc
               (undefined1 param_1 [16],undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_3 + 0x48);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b279 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577d048,param_4,param_5,0);
    bRam0000000005c2b279 = 1;
  }
  if (((*(long *)(lVar2 + 0x68) != 0) &&
      (lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                         (*(long *)(lVar2 + 0x68),param_5 & 0xffffffff), puVar1 = PTR_DAT_0577d048,
      lVar3 != 0)) && (*(long *)(lVar3 + 0x18) != 0)) {
    uVar4 = System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                      (*(long *)(lVar3 + 0x18),param_4 & 0xffffffff,*(undefined8 *)PTR_DAT_0577d048)
    ;
    if (*(long *)(lVar3 + 0x18) != 0) {
      System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                (*(long *)(lVar3 + 0x18),param_4 & 0xffffffff,*(undefined8 *)puVar1);
      if ((*(long *)(lVar2 + 0x58) != 0) &&
         (lVar3 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(lVar2 + 0x58),0),
         lVar3 != 0)) {
        UnityEngine_Transform__set_localScale_40932d0(0x3f800000,0x3f800000,0x3f800000,lVar3,0);
        if ((*(long *)(lVar2 + 0x58) != 0) &&
           (lVar3 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(lVar2 + 0x58),0),
           lVar3 != 0)) {
          UnityEngine_Transform__set_localPosition_4092ce0(uVar4,param_2,0,lVar3,0);
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

