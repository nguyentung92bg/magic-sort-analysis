/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$GetTargetPosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__GetTargetPosition (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, int32_t animationDirection, UnityEngine_Vector3_o initialPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$GetTargetPosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__GetTargetPosition
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, int32_t
   animationDirection, UnityEngine_Vector3_o initialPosition, const MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__GetTargetPosition_160aff4
          (undefined1 param_1 [16],long param_2,int param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  uVar3 = param_1._8_8_;
  if (param_3 == 2) {
    lVar1 = *(long *)(param_2 + 0x18);
joined_r0x0170b058:
    if (lVar1 == 0) goto LAB_0170b08c;
    UnityEngine_Transform__get_localPosition_4092c40(lVar1,0);
    auVar2._8_8_ = uVar3;
    auVar2._0_8_ = param_1._0_8_;
  }
  else {
    if (param_3 == 1) {
      if (*(long *)(param_2 + 0x50) == 0) goto LAB_0170b08c;
      lVar1 = *(long *)(param_2 + 0x30);
    }
    else {
      if (param_3 != 0) {
        lVar1 = *(long *)(param_2 + 0x20);
        goto joined_r0x0170b058;
      }
      if (*(long *)(param_2 + 0x50) == 0) goto LAB_0170b08c;
      lVar1 = *(long *)(param_2 + 0x28);
    }
    if (lVar1 == 0) {
LAB_0170b08c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    auVar2 = UnityEngine_Transform__get_localPosition_4092c40(lVar1,0);
  }
  return auVar2;
}

