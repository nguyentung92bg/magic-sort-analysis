/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnTouchUp
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnTouchUp (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnTouchUp
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnTouchUp
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, UnityEngine_Vector2_o
   position, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnTouchUp_37a6300(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = 0;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

