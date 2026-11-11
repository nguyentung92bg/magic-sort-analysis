/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.GameplayConfigService$$GetBottleCollectionCameraConfig
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o* Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetBottleCollectionCameraConfig (Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService_o* __this, bool is3Row, bool isFirstLevels, bool isDaily, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.Common.Scripts.GameplayConfigService$$GetBottleCollectionCameraConfig
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o*
   Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetBottleCollectionCameraConfig
   (Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService_o* __this, bool is3Row, bool
   isFirstLevels, bool isDaily, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetBottleCollectionCameraConfig_160c3ec
          (long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (((param_2 & 1) == 0) && ((param_4 & 1) == 0)) {
    if (lVar1 == 0) {
LAB_0170c43c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(char *)(param_1 + 0x18) == '\0') {
      puVar2 = (undefined8 *)(lVar1 + 0x28);
    }
    else {
      puVar2 = (undefined8 *)(lVar1 + 0x30);
    }
  }
  else {
    if (lVar1 == 0) goto LAB_0170c43c;
    puVar2 = (undefined8 *)(lVar1 + 0x18);
    if (*(char *)(param_1 + 0x18) != '\0') {
      puVar2 = (undefined8 *)(lVar1 + 0x20);
    }
  }
  return *puVar2;
}

