/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetTransformValuesForSprite
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, UnityEngine_Transform_o* sprite, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterSpritePositionScale_o waterSpritePositionScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$SetTransformValuesForSprite
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, UnityEngine_Transform_o*
   sprite, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterSpritePositionScale_o
   waterSpritePositionScale, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetTransformValuesForSprite_248bad4
               (undefined8 param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((param_2 != 0) &&
     (lVar1 = UnityEngine_Component__get_transform_408b444(param_2,0), lVar1 != 0)) {
    UnityEngine_Transform__set_localPosition_4092ce0(*param_3,param_3[1],param_3[2],lVar1,0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_2,0);
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834
              ((float)param_3[3] * _UNK_04339bec,(float)param_3[4] * _UNK_04339bec,
               (float)param_3[5] * _UNK_04339bec,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_localRotation_4092f3c(lVar1,0);
      lVar1 = UnityEngine_Component__get_transform_408b444(param_2,0);
      if (lVar1 != 0) {
        uStack_2c = param_3[7];
        uStack_28 = param_3[8];
        uStack_30 = param_3[6];
        if (pcRam0000000005c3a650 == (code *)0x0) {
          pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
        }
        (*pcRam0000000005c3a650)(lVar1,&uStack_30);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

