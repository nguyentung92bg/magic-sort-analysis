/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnDrawPresetInputEvent
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnDrawPresetInputEvent (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, int32_t bottlePresetType, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$OnDrawPresetInputEvent
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnDrawPresetInputEvent
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, int32_t
   bottlePresetType, int32_t height, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__OnDrawPresetInputEvent_37a5668
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *(undefined4 *)(param_1 + 0x2c) = 7;
  Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__RecycleBoardItems_37a49dc();
  lVar6 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  UnityEngine_Input__get_mousePosition_26dc55c(0);
  if (lVar6 != 0) {
    uVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetBottleItem_3ddae50
                      (lVar6,0,*(undefined4 *)(param_1 + 0x40),0,0);
    puVar5 = (undefined8 *)(param_1 + 0x58);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

