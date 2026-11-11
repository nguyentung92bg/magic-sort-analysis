/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$.ctor
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem___ctor (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* editorManager, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* itemFactory, Modules_Infrastructure_UI_Common_Scripts_SortingService_o* sortingService, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* colorService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$.ctor
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem___ctor
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* editorManager,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o*
   itemFactory, Modules_Infrastructure_UI_Common_Scripts_SortingService_o* sortingService,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* colorService, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem___ctor_37a38fc
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined8 *)(param_1 + 0x70) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x70),param_4);
  puVar4 = (undefined8 *)(param_1 + 0x78);
  *puVar4 = param_5;
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

