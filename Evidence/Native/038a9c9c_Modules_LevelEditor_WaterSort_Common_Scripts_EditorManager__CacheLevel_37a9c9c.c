/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$CacheLevel
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__CacheLevel (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$CacheLevel
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__CacheLevel
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__CacheLevel_37a9c9c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetCurrentLevelModel_37a745c()
  ;
  puVar5 = (undefined8 *)(param_1 + 0x60);
  *puVar5 = uVar4;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

