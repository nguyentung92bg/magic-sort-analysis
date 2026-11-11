/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$.ctor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory___ctor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemPairs_o* itemPairs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$.ctor
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory___ctor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemPairs_o* itemPairs,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory___ctor_3dda9b8
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 03eda9c8 to 03fda9cf has its CatchHandler @ 03edabc4 */
  System_Object___ctor_23dfe5c(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x10);
  *puVar4 = param_2;
                    /* try { // try from 03eda9dc to 03fda9f3 has its CatchHandler @ 03edabcc */
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

