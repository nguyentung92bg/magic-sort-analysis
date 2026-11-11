/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Plaster.EditorPlasterItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterItem_o* __this, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Plaster.EditorPlasterItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterItem_o* __this,
   UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterItem__Prepare_37b3bbc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  *(undefined8 *)(param_4 + 0x38) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x38),param_7);
  if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Plaster_EditorPlasterView__Prepare_37b3c3c
            (*(long *)(param_4 + 0x30),param_5,param_6);
  if ((bRam0000000005c33e43 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c33e43 = 1;
  }
  if ((*(long *)(param_4 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_4 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto LAB_038acb70;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,5);
LAB_038acb70:
                    /* WARNING: Could not recover jumptable at 0x038acb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_2,param_3,plVar5,puVar1[1]);
  return;
}

