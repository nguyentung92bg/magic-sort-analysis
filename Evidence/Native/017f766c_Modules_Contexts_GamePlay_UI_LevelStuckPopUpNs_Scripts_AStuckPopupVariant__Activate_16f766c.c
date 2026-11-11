/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.AStuckPopupVariant$$Activate
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AStuckPopupVariant__Activate (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AStuckPopupVariant_o* __this, Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o* animationConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.AStuckPopupVariant$$Activate
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AStuckPopupVariant__Activate
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AStuckPopupVariant_o* __this,
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o*
   animationConfig, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AStuckPopupVariant__Activate_16f766c
               (long *param_1,long param_2)

{
  long lVar1;
  
  param_1[10] = param_2;
  FUN_012d0d74();
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
  if ((char)param_1[0xb] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
                    /* WARNING: Could not recover jumptable at 0x017f76cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  return;
}

