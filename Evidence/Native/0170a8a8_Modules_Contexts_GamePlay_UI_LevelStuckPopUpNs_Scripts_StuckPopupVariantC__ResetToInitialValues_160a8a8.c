/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$ResetToInitialValues
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__ResetToInitialValues (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$ResetToInitialValues
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__ResetToInitialValues
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__ResetToInitialValues_160a8a8
               (long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    UnityEngine_Transform__set_localPosition_4092ce0
              (*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x68) != 0) {
      UnityEngine_Transform__set_localPosition_4092ce0
                (*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),
                 *(undefined4 *)(param_1 + 0x9c),*(long *)(param_1 + 0x68),0);
      if (*(long *)(param_1 + 0x70) != 0) {
        UnityEngine_Transform__set_localPosition_4092ce0
                  (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),
                   *(undefined4 *)(param_1 + 0xa8),*(long *)(param_1 + 0x70),0);
        if (*(long *)(param_1 + 0x48) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 0xb0);
          uVar3 = *(undefined4 *)(param_1 + 0xb4);
          UnityEngine_Transform__set_localPosition_4092ce0
                    (*(undefined4 *)(param_1 + 0xac),*(long *)(param_1 + 0x48),0);
          if (*(long *)(param_1 + 0x38) != 0) {
            UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_1 + 0x38),0);
            if (*(long *)(param_1 + 0x38) != 0) {
              UnityEngine_SpriteRenderer__set_color_4095de0(*(long *)(param_1 + 0x38),0);
              if (*(long *)(param_1 + 0x40) != 0) {
                uStack_30 = UnityEngine_SpriteRenderer__get_color_4095d44
                                      (*(long *)(param_1 + 0x40),0);
                lVar1 = *(long *)(param_1 + 0x40);
                if (lVar1 != 0) {
                  uStack_24 = *(undefined4 *)(param_1 + 0xc0);
                  uStack_2c = uVar2;
                  uStack_28 = uVar3;
                  if (pcRam0000000005c3a788 == (code *)0x0) {
                    pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
                  }
                  (*pcRam0000000005c3a788)(lVar1,&uStack_30);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

