/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$ReverseSelection
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__ReverseSelection (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult_o* selectionResult, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$ReverseSelection
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__ReverseSelection
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o*
   __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionResult_o* selectionResult, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__ReverseSelection_161627c
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6,long param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if (((param_7 != 0) && (*(long *)(param_7 + 0x10) != 0)) && (param_5 != 0)) {
    uVar1 = *(undefined4 *)(*(long *)(param_7 + 0x10) + 0x70);
    iVar2 = *(int *)(param_7 + 0x18);
    iVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeightIfTheSameColorId_249d28c
                      (param_5,uVar1,0);
    if (param_6 != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterFill_249de58
                (param_6,iVar2,0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterPour_249e238
                (param_5,iVar2,uVar1,0,0);
      uVar8 = *(undefined8 *)(param_7 + 0x10);
      iVar2 = iVar4 + iVar2;
      lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584();
      if ((*(long *)(param_5 + 0x50) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_5 + 0x50) + 0x60), lVar7 != 0)) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__DailyPlay_22ff39c
                  (lVar7,uVar8,lVar6,iVar2,0);
        iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                          (param_5,lVar6);
        if (lVar6 != 0) {
          uVar1 = *(undefined4 *)(param_5 + 0x48);
          lVar7 = *(long *)(lVar6 + 0x48);
          *(int *)(lVar6 + 0x60) = iVar2;
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
              (lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                                 (*(long *)(lVar7 + 0x68),uVar1), lVar6 != 0)) &&
             (*(long *)(lVar6 + 0x18) != 0)) {
            System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                      (*(long *)(lVar6 + 0x18),iVar5 + iVar2,*(undefined8 *)PTR_DAT_0577d048);
            puVar3 = PTR_DAT_0578b048;
            if (*(long *)(lVar7 + 0x50) != 0) {
              Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationStart_1e9ee28
                        (*(long *)(lVar7 + 0x50),0);
              plVar9 = *(long **)(lVar7 + 0x80);
              uVar1 = *(undefined4 *)(lVar7 + 200);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
              if ((lVar6 != 0) &&
                 (System_Action___ctor_21239bc(lVar6,lVar7,*(undefined8 *)PTR_DAT_057c7568,0),
                 plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0258bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar9 + 0x188))
                          (param_2,plVar9,iVar4,iVar5 + iVar2,iVar5,0,uVar1,lVar6,
                           *(undefined8 *)(*plVar9 + 400));
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

