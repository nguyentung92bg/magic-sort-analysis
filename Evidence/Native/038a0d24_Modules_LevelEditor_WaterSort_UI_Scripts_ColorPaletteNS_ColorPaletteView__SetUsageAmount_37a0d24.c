/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.ColorPaletteNS.ColorPaletteView$$SetUsageAmount
void Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView__SetUsageAmount (Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView_o* __this, System_Collections_Generic_Dictionary_Color__int__o* amountByColors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.ColorPaletteNS.ColorPaletteView$$SetUsageAmount
   void Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView__SetUsageAmount
   (Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView_o* __this,
   System_Collections_Generic_Dictionary_Color__int__o* amountByColors, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView__SetUsageAmount_37a0d24
               (long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000005c33de2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805dd0);
    FUN_012d0dc8(PTR_DAT_0578dc40);
    bRam0000000005c33de2 = 1;
  }
  uStack_24 = 0;
  lVar3 = *(long *)(param_1 + 0x28);
  if ((lVar3 != 0) && (param_2 != 0)) {
    uVar1 = System_Collections_Generic_Dictionary_Color__int___TryGetValue_41b0ed0
                      (*(undefined4 *)(lVar3 + 0x50),*(undefined4 *)(lVar3 + 0x54),
                       *(undefined4 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x5c),param_2,
                       &uStack_24,*(undefined8 *)PTR_DAT_05805dd0);
    plVar4 = *(long **)(param_1 + 0x20);
    if ((uVar1 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_038a0dec;
      lVar3 = *plVar4;
      uVar2 = *(undefined8 *)PTR_DAT_0578dc40;
    }
    else {
      uVar2 = System_Int32__ToString_26c9768(&uStack_24,0);
      if (plVar4 == (long *)0x0) goto LAB_038a0dec;
      lVar3 = *plVar4;
    }
    (**(code **)(lVar3 + 0x558))(plVar4,uVar2,*(undefined8 *)(lVar3 + 0x560));
    return;
  }
LAB_038a0dec:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

