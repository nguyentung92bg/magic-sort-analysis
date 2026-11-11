/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorCell$$Recycle
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell__Recycle (Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorCell$$Recycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell__Recycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell_o* __this, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorCell__Recycle_37a37d8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)(param_1 + 0x30);
  if (*plVar4 != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848();
  }
  plVar5 = (long *)(param_1 + 0x20);
  if (*plVar5 != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_012d0d74(plVar5,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Recycle_37a3848();
  }
  *plVar5 = 0;
  FUN_012d0d74(plVar5,0);
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

