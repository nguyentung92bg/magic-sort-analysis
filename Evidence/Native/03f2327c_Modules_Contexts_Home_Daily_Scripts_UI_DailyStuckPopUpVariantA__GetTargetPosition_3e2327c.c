/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$GetTargetPosition
UnityEngine_Vector3_o Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__GetTargetPosition (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, int32_t animationDirection, UnityEngine_Vector3_o initialPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpVariantA$$GetTargetPosition
   UnityEngine_Vector3_o
   Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__GetTargetPosition
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA_o* __this, int32_t
   animationDirection, UnityEngine_Vector3_o initialPosition, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpVariantA__GetTargetPosition_3e2327c
          (undefined1 param_1 [16],long param_2,int param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  uVar3 = param_1._8_8_;
  if (param_3 == 2) {
    lVar1 = *(long *)(param_2 + 0x18);
joined_r0x03f232d0:
    if (lVar1 == 0) goto LAB_03f23304;
    UnityEngine_Transform__get_position_4092b08(lVar1,0);
    auVar2._8_8_ = uVar3;
    auVar2._0_8_ = param_1._0_8_;
  }
  else {
    if (param_3 == 1) {
      lVar1 = *(long *)(param_2 + 0x30);
    }
    else {
      if (param_3 != 0) {
        lVar1 = *(long *)(param_2 + 0x20);
        goto joined_r0x03f232d0;
      }
      lVar1 = *(long *)(param_2 + 0x28);
    }
    if (lVar1 == 0) {
LAB_03f23304:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    auVar2 = UnityEngine_Transform__get_position_4092b08(lVar1,0);
  }
  return auVar2;
}

