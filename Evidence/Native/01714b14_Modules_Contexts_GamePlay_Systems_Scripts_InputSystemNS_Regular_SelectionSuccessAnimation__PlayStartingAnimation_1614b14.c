/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayStartingAnimation
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayStartingAnimation (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayStartingAnimation
   bool 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayStartingAnimation
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayStartingAnimation_1614b14
               (long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x10) < 1) {
      return false;
    }
    *(undefined1 *)(param_1 + 0x161) = 1;
    if (*(long *)(param_1 + 0x50) != 0) {
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetPosition_2d9762c
                (*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),
                 *(undefined4 *)(param_1 + 0x9c),*(long *)(param_1 + 0x50),0);
      if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x58) != 0)) {
        Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48
                  (*(long *)(param_1 + 0x58),*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x18),0);
        plVar2 = *(long **)(param_1 + 0x58);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x228))
                    (*(float *)(param_1 + 200) + *(float *)(param_1 + 0x130) +
                     *(float *)(param_1 + 0xf8),plVar2,*(undefined4 *)(param_1 + 0xa4),
                     *(undefined1 *)(param_1 + 0x90),*(undefined8 *)(*plVar2 + 0x230));
          if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWater_249ce6c
                      (*(long *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xa4),
                       *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x70),1,
                       *(undefined1 *)(param_1 + 0x170),1,0);
            if (*(long *)(param_1 + 0x78) != 0) {
              lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                (*(long *)(param_1 + 0x78),0);
              if ((*(long *)(param_1 + 0x68) != 0) && (lVar3 != *(long *)(param_1 + 0x68))) {
                *(long *)(param_1 + 0x178) = lVar3;
                FUN_012d0d74(param_1 + 0x178);
                if (*(long *)(param_1 + 0x178) != 0) {
                  if (*(long *)(param_1 + 0x68) == 0) goto LAB_01714ce0;
                  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetColorAsEllipseColor_1e9e8a4
                            (*(long *)(param_1 + 0x178),
                             *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x58),0);
                }
              }
              if (*(long *)(param_1 + 0x78) != 0) {
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetDirectionOfWaters_2496c48
                          (*(long *)(param_1 + 0x78),1,0);
                if (*(long *)(param_1 + 0x78) != 0) {
                  lVar3 = *(long *)(param_1 + 0x80);
                  uVar4 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                    (*(long *)(param_1 + 0x78),0);
                  if (lVar3 != 0) {
                    Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent_40ea518
                              (lVar3,uVar4,0);
                    lVar3 = *(long *)(param_1 + 0x88);
                    if ((lVar3 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
                      Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineStartView__SetColor_230860c
                                (*(undefined4 *)(lVar3 + 0x60),*(undefined4 *)(lVar3 + 100),
                                 *(undefined4 *)(lVar3 + 0x68),*(undefined4 *)(lVar3 + 0x6c),
                                 *(long *)(param_1 + 0x70),0);
                      if (*(long *)(param_1 + 0x58) != 0) {
                        lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                          (*(long *)(param_1 + 0x58),0);
                        if (lVar3 != 0) {
                          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse_1e9e33c
                                    (lVar3,1,0);
                        }
                        if (*(long *)(param_1 + 0x58) != 0) {
                          lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater_24956b8
                                            (*(long *)(param_1 + 0x58),0);
                          if (lVar3 != 0) {
                            Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse_1e9e33c
                                      (lVar3,1,0);
                          }
                          iVar1 = *(int *)(lVar5 + 0x10) + -1;
                          *(int *)(lVar5 + 0x10) = iVar1;
                          return 0 < iVar1;
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
    }
  }
LAB_01714ce0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

