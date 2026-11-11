/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.UI.InLevelSuperChargerView$$UpdateProgress
void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__UpdateProgress (Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView_o* __this, float progressRatio, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.UI.InLevelSuperChargerView$$UpdateProgress
   void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__UpdateProgress
   (Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView_o* __this, float
   progressRatio, const MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__UpdateProgress_20e5a84
               (float param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  float fStack_18;
  undefined4 uStack_14;
  
  if (*(long *)(param_3 + 0x20) != 0) {
    UnityEngine_SpriteRenderer__get_size_4095c28(*(long *)(param_3 + 0x20),0);
    lVar1 = *(long *)(param_3 + 0x20);
    if (lVar1 != 0) {
      fStack_18 = 0.0;
      if (param_1 != 0.0) {
        fStack_18 = _UNK_0434cc40;
      }
      fStack_18 = param_1 * _UNK_0438dc60 - fStack_18;
      uStack_14 = param_2;
      if (pcRam0000000005c3a778 == (code *)0x0) {
        pcRam0000000005c3a778 = (code *)FUN_012d0d84(&UNK_043efb27,0);
      }
      (*pcRam0000000005c3a778)(lVar1,&fStack_18);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

