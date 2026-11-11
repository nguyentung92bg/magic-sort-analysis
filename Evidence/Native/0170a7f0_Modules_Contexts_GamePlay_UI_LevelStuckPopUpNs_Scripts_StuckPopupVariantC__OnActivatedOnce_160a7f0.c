/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$OnActivatedOnce
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__OnActivatedOnce (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopupVariantC$$OnActivatedOnce
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__OnActivatedOnce
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopupVariantC__OnActivatedOnce_160a7f0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  
  Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AStuckPopupVariant__OnActivatedOnce_16f76d4
            (param_5,0);
  if (*(long *)(param_5 + 0x60) != 0) {
    uVar1 = UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_5 + 0x60),0);
    *(undefined4 *)(param_5 + 0x88) = uVar1;
    *(undefined4 *)(param_5 + 0x8c) = param_2;
    *(undefined4 *)(param_5 + 0x90) = param_3;
    if (*(long *)(param_5 + 0x68) != 0) {
      uVar1 = UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_5 + 0x68),0);
      *(undefined4 *)(param_5 + 0x94) = uVar1;
      *(undefined4 *)(param_5 + 0x98) = param_2;
      *(undefined4 *)(param_5 + 0x9c) = param_3;
      if (*(long *)(param_5 + 0x70) != 0) {
        uVar1 = UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_5 + 0x70),0);
        *(undefined4 *)(param_5 + 0xa0) = uVar1;
        *(undefined4 *)(param_5 + 0xa4) = param_2;
        *(undefined4 *)(param_5 + 0xa8) = param_3;
        if (*(long *)(param_5 + 0x48) != 0) {
          uVar1 = UnityEngine_Transform__get_localPosition_4092c40(*(long *)(param_5 + 0x48),0);
          *(undefined4 *)(param_5 + 0xac) = uVar1;
          *(undefined4 *)(param_5 + 0xb0) = param_2;
          *(undefined4 *)(param_5 + 0xb4) = param_3;
          if (*(long *)(param_5 + 0x38) != 0) {
            UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_5 + 0x38),0);
            *(undefined4 *)(param_5 + 0xb8) = param_4;
            if (*(long *)(param_5 + 0x40) != 0) {
              UnityEngine_SpriteRenderer__get_color_4095d44(*(long *)(param_5 + 0x40),0);
              *(undefined4 *)(param_5 + 0xc0) = param_4;
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

