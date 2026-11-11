/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagItem$$OnRecycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem__OnRecycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagItem$$OnRecycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem__OnRecycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagItem__OnRecycle_3de0474
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_0577f3c8;
  if ((bRam0000000005c37e64 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_05802b08);
    bRam0000000005c37e64 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar3 == 0) ||
     (System_Action_int____ctor_1646aac(lVar3,param_1,*(undefined8 *)PTR_DAT_05802b08,0), lVar7 == 0
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__remove_OnAmountTextChanged_3de0560
            (lVar7,lVar3);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),0);
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent_37ac850
            (param_1,0,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  uVar8 = *(undefined4 *)(lVar3 + 0xc);
  uVar9 = *(undefined4 *)(lVar3 + 0x10);
  uVar10 = *(undefined4 *)(lVar3 + 0x14);
  if ((bRam0000000005c33e45 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8,0);
    bRam0000000005c33e45 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x18), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_038ac9ac;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,7);
LAB_038ac9ac:
                    /* WARNING: Could not recover jumptable at 0x038ac9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(uVar8,uVar9,uVar10,plVar6,puVar2[1]);
  return;
}

