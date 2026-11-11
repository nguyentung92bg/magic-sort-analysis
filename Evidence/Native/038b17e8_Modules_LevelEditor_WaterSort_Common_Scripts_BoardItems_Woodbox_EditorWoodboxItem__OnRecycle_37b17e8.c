/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxItem$$OnRecycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem__OnRecycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxItem$$OnRecycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem__OnRecycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem__OnRecycle_37b17e8
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
                    /* try { // try from 038b17f4 to 039b17fb has its CatchHandler @ 038b1e60 */
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent_37ac850(param_1,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  uVar6 = *(undefined4 *)(lVar2 + 0xc);
  uVar7 = *(undefined4 *)(lVar2 + 0x10);
  uVar8 = *(undefined4 *)(lVar2 + 0x14);
  if ((bRam0000000005c33e45 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c33e45 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto LAB_038ac9ac;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,7);
LAB_038ac9ac:
                    /* WARNING: Could not recover jumptable at 0x038ac9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(uVar6,uVar7,uVar8,plVar5,puVar1[1]);
  return;
}

