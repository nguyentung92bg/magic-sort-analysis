/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$GetWoodBoxKeyPositionValuesForWater
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetWoodBoxKeyPositionValuesForWater (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* previousWater, float rotation, BakedFluid_BottleAnimationConfig_o* bottleAnimationConfig, UnityEngine_Vector3_o bottleRootPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$GetWoodBoxKeyPositionValuesForWater
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetWoodBoxKeyPositionValuesForWater
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* previousWater, float rotation,
   BakedFluid_BottleAnimationConfig_o* bottleAnimationConfig, UnityEngine_Vector3_o
   bottleRootPosition, const MethodInfo* method); */

float Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetWoodBoxKeyPositionValuesForWater_1e9e658
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4,
                long param_5,long param_6,long param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (*(long *)(param_5 + 0x48) != 0) {
    fVar2 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetTopPosition_248bb78
                             (*(long *)(param_5 + 0x48),0);
    if (param_6 == 0) {
      uVar6 = 0;
      uVar7 = (ulong)(uint)(param_1 * _UNK_04339bec);
      uVar5 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,uVar7,0);
      if (cRam0000000005c25e49 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c25e49 = '\x01';
      }
      lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      fVar3 = (float)UnityEngine_Quaternion__op_Multiply_3831578
                               (uVar5,uVar6,uVar7,param_4,*(undefined4 *)(lVar1 + 0x24),
                                *(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),0);
      if (param_7 == 0) goto LAB_01f9e7a0;
      fVar4 = (float)BakedFluid_BottleAnimationConfig__GetDistanceToBottomOfTheBottleIfBottomWaterForKey_3af5874
                               (param_7,*(undefined4 *)(param_5 + 0x60),0);
      fVar2 = fVar2 + fVar3 * fVar4;
    }
    else {
      if (*(long *)(param_6 + 0x48) == 0) goto LAB_01f9e7a0;
      fVar3 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__GetTopPosition_248bb78
                               (*(long *)(param_6 + 0x48),0);
      fVar2 = (fVar2 + fVar3) * 0.5;
    }
    return fVar2;
  }
LAB_01f9e7a0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

