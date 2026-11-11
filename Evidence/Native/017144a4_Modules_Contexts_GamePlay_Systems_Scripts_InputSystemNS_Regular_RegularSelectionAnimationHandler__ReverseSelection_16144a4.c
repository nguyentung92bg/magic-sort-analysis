/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$ReverseSelection
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__ReverseSelection (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult_o* selectionResult, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.RegularSelectionAnimationHandler$$ReverseSelection
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__ReverseSelection
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler_o*
   __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult_o* selectionResult, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_RegularSelectionAnimationHandler__ReverseSelection_16144a4
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               long param_5,long param_6,long param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  if ((((param_4 != 0) && (param_7 != 0)) && (*(long *)(param_7 + 0x10) != 0)) && (param_5 != 0)) {
    iVar1 = *(int *)(param_7 + 0x18);
    lVar9 = *(long *)(param_4 + 0x28);
    uVar2 = *(undefined4 *)(*(long *)(param_7 + 0x10) + 0x70);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBeforeUndoLastWaterPour_249df5c
              (param_5,iVar1,0);
    iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeightIfTheSameColorId_249d28c
                      (param_5,uVar2,0);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterPour_249e238
              (param_5,iVar1,uVar2,*(undefined1 *)(param_7 + 0x2c),0);
    if (param_6 != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterFill_249de58
                (param_6,iVar1,0);
      if ((*(char *)(param_7 + 0x2d) != '\0') &&
         (lVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                            (param_6,0), lVar7 != 0)) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow_1e9e860(lVar7,1,0);
      }
      if (((*(long *)(param_4 + 0x30) != 0) &&
          (lVar7 = *(long *)(*(long *)(param_4 + 0x30) + 0x10), lVar7 != 0)) && (lVar9 != 0)) {
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnReverseSelection_2f6b100
                  (lVar9,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                   *(undefined4 *)(lVar7 + 0x70),0);
        iVar1 = iVar5 + iVar1;
        if ((bRam0000000005c2b313 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057d5610);
          FUN_012d0dc8(PTR_DAT_0576aae0);
          bRam0000000005c2b313 = 1;
        }
        lVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                          (param_5);
        if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
            (lVar7 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar7 != 0))
           && (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar7,*(undefined8 *)PTR_DAT_057d5610), lVar7 != 0)) {
          uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                            (lVar7,uVar2,0);
          if (*(long *)(param_5 + 0x50) != 0) {
            lVar7 = *(long *)(*(long *)(param_5 + 0x50) + 0x60);
            if (cRam0000000005c23dd6 == '\0') {
              FUN_012d0dc8(PTR_DAT_057d6f00);
              cRam0000000005c23dd6 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            if (lVar7 != 0) {
              iVar3 = iVar1 - iVar5;
              iVar6 = -iVar3;
              if (-1 < iVar3) {
                iVar6 = iVar3;
              }
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__Play_22fe9b8
                        (lVar7,uVar8,lVar9,iVar6,0);
              iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                                (param_5,lVar9);
              if (lVar9 != 0) {
                uVar2 = *(undefined4 *)(param_5 + 0x48);
                lVar7 = *(long *)(lVar9 + 0x48);
                *(int *)(lVar9 + 0x60) = iVar1;
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if ((bRam0000000005c2b27c & 1) == 0) {
                  FUN_012d0dc8(PTR_DAT_0578b048);
                  FUN_012d0dc8(PTR_DAT_0577d048);
                  FUN_012d0dc8(PTR_DAT_057c7568);
                  bRam0000000005c2b27c = 1;
                }
                if (((*(long *)(lVar7 + 0x68) != 0) &&
                    (lVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                                       (*(long *)(lVar7 + 0x68),uVar2), lVar9 != 0)) &&
                   (*(long *)(lVar9 + 0x18) != 0)) {
                  System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                            (*(long *)(lVar9 + 0x18),iVar6 + iVar1,*(undefined8 *)PTR_DAT_0577d048);
                  puVar4 = PTR_DAT_0578b048;
                  if (*(long *)(lVar7 + 0x50) != 0) {
                    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationStart_1e9ee28
                              (*(long *)(lVar7 + 0x50),0);
                    plVar10 = *(long **)(lVar7 + 0x80);
                    uVar2 = *(undefined4 *)(lVar7 + 200);
                    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                    if ((lVar9 != 0) &&
                       (System_Action___ctor_21239bc(lVar9,lVar7,*(undefined8 *)PTR_DAT_057c7568,0),
                       plVar10 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0258bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*plVar10 + 0x188))
                                (param_2,plVar10,iVar5,iVar6 + iVar1,iVar6,0,uVar2,lVar9,
                                 *(undefined8 *)(*plVar10 + 400));
                      return;
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

