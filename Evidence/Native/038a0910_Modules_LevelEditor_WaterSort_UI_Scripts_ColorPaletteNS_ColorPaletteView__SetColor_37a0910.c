/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.ColorPaletteNS.ColorPaletteView$$SetColor
void Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView__SetColor (Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.ColorPaletteNS.ColorPaletteView$$SetColor
   void Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView__SetColor
   (Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_ColorPaletteNS_ColorPaletteView__SetColor_37a0910
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  
  if ((param_2 != 0) && (plVar4 = *(long **)(param_1 + 0x18), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x2a8))
              (*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
               *(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),plVar4,
               *(undefined8 *)(*plVar4 + 0x2b0));
    plVar4 = (long *)(param_1 + 0x28);
    *plVar4 = param_2;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

