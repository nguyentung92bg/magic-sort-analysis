/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UndoLastWaterFill
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterFill (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t waterHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UndoLastWaterFill
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterFill
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t waterHeight,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UndoLastWaterFill_249de58
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  if ((bRam0000000005c2b31c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b31c = 1;
  }
  uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsFull_2498400(param_1);
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x4c) = 0;
    if (*(long *)(param_1 + 0x50) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__OnUndoFilled_22fc6f8
                (*(long *)(param_1 + 0x50),0);
      puVar2 = PTR_DAT_05802430;
      lVar5 = *(long *)(param_1 + 0x88);
      if (lVar5 != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(lVar5 + 0x18) <= iVar7) goto LAB_0259df08;
          plVar6 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar5,iVar7,*(undefined8 *)puVar2);
          if (plVar6 == (long *)0x0) break;
          (**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330));
          lVar5 = *(long *)(param_1 + 0x88);
          iVar7 = iVar7 + 1;
        } while (lVar5 != 0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_0259df08:
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveWater_249d448
            (param_1,param_2);
  lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                    (param_1);
  if (lVar5 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse_1e9e33c
              (lVar5,1,0);
  }
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetDirectionOfWaters_2496c48
            (param_1,1);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents_249665c
            (param_1);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateSortOrders_2493ab4(param_1);
  if ((bRam0000000005c2b2ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2ee = 1;
  }
  puVar2 = PTR_DAT_057f2468;
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,iVar7,*(undefined8 *)puVar2);
      if (lVar5 == 0) break;
      lVar5 = *(long *)(lVar5 + 0x20);
      if (lVar5 != 0) {
        uVar1 = *(undefined4 *)(lVar5 + 0x40);
        uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                          (param_1,lVar5);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                  (lVar5,uVar1,uVar3,*(undefined4 *)(param_1 + 0x48),0);
      }
      lVar5 = *(long *)(param_1 + 0x80);
      iVar7 = iVar7 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

