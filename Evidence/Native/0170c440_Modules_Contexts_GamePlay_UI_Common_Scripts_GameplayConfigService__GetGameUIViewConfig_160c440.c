/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.GameplayConfigService$$GetGameUIViewConfig
Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_GameUIViewConfig_o* Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetGameUIViewConfig (Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.GameplayConfigService$$GetGameUIViewConfig
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_GameUIViewConfig_o*
   Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetGameUIViewConfig
   (Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetGameUIViewConfig_160c440
          (long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 0x40;
    if (*(char *)(param_1 + 0x18) != '\0') {
      lVar1 = 0x48;
    }
    return *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

