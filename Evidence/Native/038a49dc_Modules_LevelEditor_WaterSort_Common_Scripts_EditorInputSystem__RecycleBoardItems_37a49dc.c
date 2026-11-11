/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$RecycleBoardItems
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$RecycleBoardItems
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0x58);
  if (*plVar4 != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848();
  }
  *plVar4 = 0;
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

