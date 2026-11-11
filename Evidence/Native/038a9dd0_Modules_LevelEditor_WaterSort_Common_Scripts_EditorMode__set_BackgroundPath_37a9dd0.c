/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$set_BackgroundPath
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__set_BackgroundPath (System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$set_BackgroundPath
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__set_BackgroundPath
   (System_String_o* value, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode__set_BackgroundPath_37a9dd0
               (undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_058007e8;
  if ((bRam0000000005c33e21 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058007e8);
    bRam0000000005c33e21 = 1;
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar4;
  }
  puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
  *puVar6 = param_1;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

