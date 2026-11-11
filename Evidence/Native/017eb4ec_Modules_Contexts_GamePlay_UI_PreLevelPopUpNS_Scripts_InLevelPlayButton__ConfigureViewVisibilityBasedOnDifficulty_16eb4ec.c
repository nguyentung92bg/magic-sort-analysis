/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.InLevelPlayButton$$ConfigureViewVisibilityBasedOnDifficulty
void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton__ConfigureViewVisibilityBasedOnDifficulty (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton_o* __this, int32_t difficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.InLevelPlayButton$$ConfigureViewVisibilityBasedOnDifficulty
   void 
   Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton__ConfigureViewVisibilityBasedOnDifficulty
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton_o* __this, int32_t
   difficultyType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_InLevelPlayButton__ConfigureViewVisibilityBasedOnDifficulty_16eb4ec
               (long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 == 2) {
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
    }
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 1;
    goto LAB_017eb558;
  }
  if (param_2 == 1) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      uVar2 = 1;
LAB_017eb544:
      UnityEngine_GameObject__SetActive_408e318(lVar1,uVar2,0);
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      uVar2 = 0;
      goto LAB_017eb544;
    }
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return;
  }
  uVar2 = 0;
LAB_017eb558:
  if (pcRam0000000005c3a388 == (code *)0x0) {
    pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
  }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a388)(lVar1,uVar2);
  return;
}

