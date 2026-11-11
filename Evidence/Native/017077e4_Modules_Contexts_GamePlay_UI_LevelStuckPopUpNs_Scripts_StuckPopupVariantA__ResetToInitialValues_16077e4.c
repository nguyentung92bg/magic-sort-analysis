/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$ResetToInitialValues
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__ResetToInitialValues (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantA$$ResetToInitialValues
   void 
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__ResetToInitialValues
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantA__ResetToInitialValues_16077e4
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
              (*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),
               *(undefined4 *)(param_1 + 0xb0),*(long *)(param_1 + 0x60),0);
    if (*(long *)(param_1 + 0x68) != 0) {
      UnityEngine_Transform__set_localPosition_4092ce0
                (*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8),
                 *(undefined4 *)(param_1 + 0xbc),*(long *)(param_1 + 0x68),0);
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x70),0),
         lVar1 != 0)) {
        UnityEngine_Transform__set_localPosition_4092ce0
                  (*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),
                   *(undefined4 *)(param_1 + 200),lVar1,0);
        if (*(long *)(param_1 + 0x78) != 0) {
          UnityEngine_Transform__set_localPosition_4092ce0
                    (*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),
                     *(undefined4 *)(param_1 + 0xd4),*(long *)(param_1 + 0x78),0);
          if (*(long *)(param_1 + 0x80) != 0) {
            UnityEngine_Transform__set_localPosition_4092ce0
                      (*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                       *(undefined4 *)(param_1 + 0xe0),*(long *)(param_1 + 0x80),0);
            if (*(long *)(param_1 + 0x48) != 0) {
              uVar2 = *(undefined4 *)(param_1 + 0xe8);
              uVar3 = *(undefined4 *)(param_1 + 0xec);
              UnityEngine_Transform__set_localPosition_4092ce0
                        (*(undefined4 *)(param_1 + 0xe4),*(long *)(param_1 + 0x48),0);
              if (*(long *)(param_1 + 0x38) != 0) {
                UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_1 + 0x38),0);
                if (*(long *)(param_1 + 0x38) != 0) {
                  UnityEngine_SpriteRenderer__set_color_4095de0(*(long *)(param_1 + 0x38),0);
                  if (*(long *)(param_1 + 0x40) != 0) {
                    uStack_30 = UnityEngine_SpriteRenderer__get_color_4095d44
                                          (*(long *)(param_1 + 0x40),0);
                    lVar1 = *(long *)(param_1 + 0x40);
                    if (lVar1 != 0) {
                      uStack_24 = *(undefined4 *)(param_1 + 0xf4);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

