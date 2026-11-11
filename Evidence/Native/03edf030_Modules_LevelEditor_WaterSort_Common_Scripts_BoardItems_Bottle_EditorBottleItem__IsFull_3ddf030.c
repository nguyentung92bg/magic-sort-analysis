/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$IsFull
bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsFull (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$IsFull
   bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsFull
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, const
   MethodInfo* method); */

bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsFull_3ddf030
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_05797a88;
  if ((bRam0000000005c37e4f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bdb98);
    FUN_012d0dc8(PTR_DAT_057b8ac8);
    FUN_012d0dc8(PTR_DAT_057e76e8);
    FUN_012d0dc8(PTR_DAT_057ee980);
    FUN_012d0dc8(PTR_DAT_05797a88);
    bRam0000000005c37e4f = 1;
  }
  lVar4 = *(long *)puVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_057b8ac8;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar4 = *(long *)puVar1;
    }
    uVar8 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar7 == 0) goto LAB_03edf154;
    System_Func_object__bool____ctor_338137c(lVar7,uVar8,*(undefined8 *)PTR_DAT_057ee980,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar7;
    FUN_012d0d74(plVar5,lVar7);
  }
  iVar3 = System_Linq_Enumerable__Count_object__241f07c(uVar6,lVar7,*(undefined8 *)PTR_DAT_057bdb98)
  ;
  if (*(long *)(param_1 + 0x60) != 0) {
    return iVar3 == *(int *)(*(long *)(param_1 + 0x60) + 0x18);
  }
LAB_03edf154:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

