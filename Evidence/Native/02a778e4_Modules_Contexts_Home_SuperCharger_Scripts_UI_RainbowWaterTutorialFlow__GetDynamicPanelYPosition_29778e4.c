/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$GetDynamicPanelYPosition
float Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__GetDynamicPanelYPosition (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$GetDynamicPanelYPosition
   float 
   Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__GetDynamicPanelYPosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, const MethodInfo*
   method); */

undefined4
Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__GetDynamicPanelYPosition_29778e4
          (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_30 = 0;
  if (param_3 != 0) {
    uStack_20 = *(undefined8 *)(param_3 + 0x78);
    uStack_28 = *(undefined8 *)(param_3 + 0x70);
    uStack_30 = *(undefined8 *)(param_3 + 0x68);
    UnityEngine_Bounds__get_center_38374e8(&uStack_30,0);
    uVar1 = 0xc0a00000;
    if (param_2 <= 1.5) {
      uVar1 = 0x40a00000;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

