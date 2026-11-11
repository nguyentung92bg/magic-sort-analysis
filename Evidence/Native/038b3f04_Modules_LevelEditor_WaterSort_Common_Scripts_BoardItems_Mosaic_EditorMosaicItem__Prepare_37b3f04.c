/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, System_Collections_Generic_List_ColorId__o* colorIds, int32_t mosaicType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, System_Collections_Generic_List_ColorId__o* colorIds, int32_t mosaicType, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__Prepare_37b3f04
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
               undefined4 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000005c33e77 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_0575a650);
    FUN_012d0dc8(PTR_DAT_057a6988);
    FUN_012d0dc8(PTR_DAT_0577e168);
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_057e6ca8);
    FUN_012d0dc8(PTR_DAT_057f55a8);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    FUN_012d0dc8(PTR_DAT_05795338);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b5e38);
    bRam0000000005c33e77 = 1;
  }
  puVar2 = PTR_DAT_05805bc0;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x40) = param_6;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_4);
  if ((param_5 == 0) || (*(int *)(param_5 + 0x18) == 0)) {
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_05814878;
    if (lVar5 == 0) goto LAB_038b41a4;
    System_Collections_Generic_List_Int32Enum____ctor_20512f0(lVar5,*(undefined8 *)PTR_DAT_057b99d0)
    ;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar6 = *(long *)puVar2;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_038b41a4;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xffffffff;
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                (lVar5,0xffffffff);
    }
  }
  else {
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar5 == 0) goto LAB_038b41a4;
    System_Collections_Generic_List_Int32Enum____ctor_2051418
              (lVar5,param_5,*(undefined8 *)PTR_DAT_057e6ca8);
  }
  *(long *)(param_1 + 0x48) = lVar5;
  FUN_012d0d74((long *)(param_1 + 0x48),lVar5);
  puVar2 = PTR_DAT_0577f3c8;
  if (*(long *)(param_1 + 0x30) != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__Prepare_37b41a8
              (*(long *)(param_1 + 0x30),param_2,param_3,param_6,*(undefined8 *)(param_1 + 0x48));
    lVar7 = *(long *)(param_1 + 0x30);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar5 != 0) &&
       (System_Action_int____ctor_1646aac(lVar5,param_1,*(undefined8 *)PTR_DAT_057a6988,0),
       puVar4 = PTR_DAT_057b8520, puVar3 = PTR_DAT_05795338, puVar2 = PTR_DAT_0575a650, lVar7 != 0))
    {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__add_OnAmountTextChanged_37b43f0
                (lVar7,lVar5);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar3);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar7 != 0) &&
         (System_Action_Int32Enum__object____ctor_1c4bbfc
                    (lVar7,param_1,*(undefined8 *)PTR_DAT_0577e168,0), lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343e298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057b5e38 + 0x20) + 0xc0) + 8) +
                    8))(lVar5,lVar7);
        return;
      }
    }
  }
LAB_038b41a4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

