/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorItemGenerator$$.ctor
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator___ctor (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator_o* __this, int32_t itemType, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_EditorAItemView_o* itemViewPrefab, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorItemGenerator$$.ctor
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator___ctor
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator_o* __this, int32_t
   itemType, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_EditorAItemView_o* itemViewPrefab,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorItemGenerator___ctor_37b1554
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 038b156c to 039b1573 has its CatchHandler @ 038b2f58 */
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_3);
                    /* try { // try from 038b158c to 039b1593 has its CatchHandler @ 038b1ed4 */
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_4;
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

