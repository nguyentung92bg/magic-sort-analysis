/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$.cctor
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorMode$$.cctor
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode___cctor (const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorMode___cctor_37aa050(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_058007e8;
  puVar4 = PTR_DAT_05774390;
  if ((bRam0000000005c33e28 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058007e8);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c33e28 = 1;
  }
  puVar6 = *(undefined1 **)(*(long *)puVar5 + 0xb8);
  *puVar6 = 0;
  puVar7 = (undefined8 *)(puVar6 + 8);
  *puVar7 = *(undefined8 *)puVar4;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

