/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$OnBannerLeave
void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__OnBannerLeave (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelFailPopUpNS.Scripts.LevelFailPopUp$$OnBannerLeave
   void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__OnBannerLeave
   (Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__OnBannerLeave_16f4a18
               (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x18), lVar1 != 0)) {
    UnityEngine_SpriteRenderer__set_color_4095de0(0,0,0,0x3f000000,lVar1,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),1,0);
        Modules_Contexts_GamePlay_UI_LevelFailPopUpNS_Scripts_LevelFailPopUp__ShowAndIterateLevelFailedContainers_16f4aa0
                  (param_1);
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x48),0),
           lVar1 != 0)) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar1,1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

