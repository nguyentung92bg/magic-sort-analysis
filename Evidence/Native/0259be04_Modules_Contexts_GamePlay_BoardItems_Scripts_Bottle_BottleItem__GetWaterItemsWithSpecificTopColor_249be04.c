/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWaterItemsWithSpecificTopColor
System_ValueTuple_List_WaterAndColor___List_WaterAndColor___o Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterItemsWithSpecificTopColor (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterAndColor_o* topWaterAndColor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWaterItemsWithSpecificTopColor
   System_ValueTuple_List_WaterAndColor___List_WaterAndColor___o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterItemsWithSpecificTopColor
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterAndColor_o* topWaterAndColor, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterItemsWithSpecificTopColor_249be04
          (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_057e3b28;
  if ((bRam0000000005c2b306 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058089c8);
    FUN_012d0dc8(PTR_DAT_057fc868);
    FUN_012d0dc8(PTR_DAT_057e2f68);
    FUN_012d0dc8(PTR_DAT_058167f0);
    FUN_012d0dc8(PTR_DAT_057c3630);
    FUN_012d0dc8(PTR_DAT_057fdd10);
    FUN_012d0dc8(PTR_DAT_057feb20);
    FUN_012d0dc8(PTR_DAT_057e3b28);
    FUN_012d0dc8(PTR_DAT_0578b110);
    bRam0000000005c2b306 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_057fdd10;
  if (lVar4 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem___c__DisplayClass128_0___ctor_22f9cb0
              (lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x10),param_2);
    lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersInside_2498734
                      (param_1);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar6 != 0) &&
       (System_Predicate_object____ctor_30fcf30(lVar6,lVar4,*(undefined8 *)PTR_DAT_057feb20,0),
       lVar5 != 0)) {
      lVar4 = System_Collections_Generic_List_object___Find_21fd130
                        (lVar5,lVar6,*(undefined8 *)PTR_DAT_057fc868);
      puVar3 = PTR_DAT_058089c8;
      if (lVar4 != 0) {
        System_Collections_Generic_List_object___Remove_21fe044
                  (lVar5,lVar4,*(undefined8 *)PTR_DAT_057e2f68);
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0259c010;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = lVar4;
          FUN_012d0d74(plVar7,lVar4);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar5,lVar4);
        }
      }
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c3630);
      puVar3 = PTR_DAT_0578b110;
      if (lVar4 != 0) {
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar4,*(undefined8 *)PTR_DAT_058167f0);
        uStack_40 = 0;
        uStack_38 = 0;
        System_ValueTuple_object__object____ctor_2b92f7c
                  (&uStack_40,lVar5,lVar4,*(undefined8 *)puVar3);
        auVar2._8_8_ = uStack_38;
        auVar2._0_8_ = uStack_40;
        return auVar2;
      }
    }
  }
LAB_0259c010:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

