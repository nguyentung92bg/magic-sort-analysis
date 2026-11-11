/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateBottleData
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleData (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, System_Collections_Generic_List_WaterAndColor__o* watersInside, System_Collections_Generic_List_WaterAndColor__o* watersOutside, bool tryRevealQuestionMarks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateBottleData
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleData
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   System_Collections_Generic_List_WaterAndColor__o* watersInside,
   System_Collections_Generic_List_WaterAndColor__o* watersOutside, bool tryRevealQuestionMarks,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleData_249c40c
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetWaters_249c78c();
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ToggleTopEllipseInBottle_249d014
            (param_1);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents_249665c
            (param_1);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateSortOrders_2493ab4(param_1);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateColorVisibilities_2497470
            (param_1);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleWaters_24960dc
            (param_1);
  if ((bRam0000000005c2b2ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2ee = 1;
  }
  puVar2 = PTR_DAT_057f2468;
  lVar4 = *(long *)(param_1 + 0x80);
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar5,*(undefined8 *)puVar2);
      if (lVar4 == 0) break;
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(lVar4 + 0x40);
        uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                          (param_1,lVar4);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                  (lVar4,uVar1,uVar3,*(undefined4 *)(param_1 + 0x48),0);
      }
      lVar4 = *(long *)(param_1 + 0x80);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

