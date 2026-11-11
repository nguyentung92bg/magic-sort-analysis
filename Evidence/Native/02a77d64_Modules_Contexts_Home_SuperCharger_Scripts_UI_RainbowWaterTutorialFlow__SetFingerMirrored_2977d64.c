/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$SetFingerMirrored
void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetFingerMirrored (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, bool isMirrored, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$SetFingerMirrored
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetFingerMirrored
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, bool
   isMirrored, const MethodInfo* method); */

void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetFingerMirrored_2977d64
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,byte param_5)

{
  long lVar1;
  float fVar2;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  if (*(byte *)(param_4 + 0x34) == (param_5 & 1)) {
    return;
  }
  *(byte *)(param_4 + 0x34) = param_5 & 1;
  if (((*(long *)(param_4 + 0x10) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_4 + 0x10) + 0x48), lVar1 != 0)) &&
     (lVar1 = UnityEngine_GameObject__get_transform_408e25c(lVar1,0), lVar1 != 0)) {
    fVar2 = (float)UnityEngine_Transform__get_localEulerAngles_4092e84(lVar1,0);
    param_2 = param_2 * _UNK_04339bec;
    param_3 = param_3 * _UNK_04339bf0;
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834(fVar2 * _UNK_04339bec,0);
    UnityEngine_Transform__set_localRotation_4092f3c(lVar1,0);
    fStack_30 = (float)UnityEngine_Transform__get_localScale_4093230(lVar1,0);
    fStack_30 = -fStack_30;
    fStack_2c = param_2;
    fStack_28 = param_3;
    if (pcRam0000000005c3a650 == (code *)0x0) {
      pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
    }
    (*pcRam0000000005c3a650)(lVar1,&fStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

