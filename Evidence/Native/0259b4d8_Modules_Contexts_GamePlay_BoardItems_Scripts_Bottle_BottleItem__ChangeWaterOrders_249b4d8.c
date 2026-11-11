/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ChangeWaterOrders
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ChangeWaterOrders (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, System_Collections_Generic_List_WaterAndColor__o* colorOrders, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ChangeWaterOrders
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ChangeWaterOrders
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   System_Collections_Generic_List_WaterAndColor__o* colorOrders, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ChangeWaterOrders_249b4d8
               (long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((bRam0000000005c2b305 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_057d99c8);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_057cbfe8);
    FUN_012d0dc8(PTR_DAT_057c7498);
    bRam0000000005c2b305 = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetDirectionOfWaters_2496c48
            (param_1,1);
  puVar4 = PTR_DAT_057d99c8;
  puVar3 = PTR_DAT_057a7f80;
  puVar2 = PTR_DAT_057605b8;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) == 0)) {
    if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x88),*(undefined8 *)PTR_DAT_057b7918);
    uVar6 = 0;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
      if (plStack_38 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((bVar1 <= *(byte *)(*plStack_38 + 300)) &&
           (*(long *)(*(long *)(*plStack_38 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
          uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__get_FillsFromBottom_274f51c
                            (plStack_38,0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar6 & 1) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShuffleWaterUnitsWithGenerator_249b6f8
                (param_1);
      return;
    }
    auVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetShuffledWaters_249c014
                       (param_1);
  }
  else {
    uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (param_2,*(int *)(param_2 + 0x18) + -1,*(undefined8 *)PTR_DAT_057c7498);
    auVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterItemsWithSpecificTopColor_249be04
                       (param_1,uVar5);
  }
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleData_249c40c
            (param_1,auVar8._0_8_,auVar8._8_8_,0);
  return;
}

