/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$Dispose
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__Dispose (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$Dispose
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__Dispose
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__Dispose_248aee8
               (long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x58),0,0);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),0);
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
               *(undefined4 *)(lVar2 + 0x14),lVar1,0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,0,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_localRotation_4092f3c(lVar1,0);
      *(undefined1 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

