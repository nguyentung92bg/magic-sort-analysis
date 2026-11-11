/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$AddWaterFromBottom
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWaterFromBottom (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t height, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$AddWaterFromBottom
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWaterFromBottom
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t height,
   int32_t colorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWaterFromBottom_249d2f8
               (long *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((bRam0000000005c2b311 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b311 = 1;
  }
  puVar1 = PTR_DAT_057f2468;
  if (param_1[0x10] != 0) {
    lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (param_1[0x10],0,*(undefined8 *)PTR_DAT_057f2468);
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x20) == 0) {
        bVar2 = false;
      }
      else {
        iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                          (*(long *)(lVar5 + 0x20),0);
        bVar2 = iVar3 == param_3;
      }
      if (param_1[0x1a] != 0) {
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__InsertWaterItem_2f69328
                  (param_1[0x1a],param_1,param_2,param_3,(int)param_1[0x15],1,0,0);
        uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryMergeColors_2496144
                          (param_1);
        if ((uVar6 & 1) != 0) {
          if (bVar2) {
            if (((param_1[0x10] == 0) ||
                (lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (param_1[0x10],0,*(undefined8 *)puVar1), lVar5 == 0)) ||
               (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) goto LAB_0259d444;
            iVar3 = *(int *)(lVar5 + 0x40);
            uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                              (param_1,lVar5);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                      (lVar5,iVar3 - param_2,uVar4,(int)param_1[9],0);
          }
          lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                            (param_1);
          if (lVar5 == 0) goto LAB_0259d444;
          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse_1e9e33c
                    (lVar5,1,0);
        }
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents_249665c
                  (param_1);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateSortOrders_2493ab4
                  (param_1);
        uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                          (param_1);
                    /* WARNING: Could not recover jumptable at 0x0259d440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x218))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x220));
        return;
      }
    }
  }
LAB_0259d444:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

