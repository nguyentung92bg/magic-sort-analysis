/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddIcicleItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddIcicleItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddIcicleItem
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddIcicleItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle,
   int32_t index, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddIcicleItem_37af3bc
               (long param_1,long param_2,undefined4 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  if (param_2 != 0) {
                    /* try { // try from 038af3d8 to 039af3e3 has its CatchHandler @ 038b3464 */
    lVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetCell_3ddf19c
                      (param_2,param_3,0);
    if (lVar4 == 0) {
                    /* try { // try from 038af44c to 039af457 has its CatchHandler @ 038b3444 */
      return;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      auVar7 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxKeyIdleSorting_4002ba0
                         (*(long *)(param_1 + 0x40),0);
                    /* try { // try from 038af3f8 to 039af403 has its CatchHandler @ 038b346c */
      if ((*(long *)(param_2 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
                    /* try { // try from 038af414 to 039af41f has its CatchHandler @ 038b3450 */
        uVar5 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetIcicleItem_3ddcaf8
                          (*(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),
                           *(undefined4 *)(lVar4 + 0x18),*(long *)(param_1 + 0x28),
                           *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),auVar7._0_8_,
                           auVar7._8_8_,param_2,lVar4,0);
        puVar6 = (undefined8 *)(lVar4 + 0x30);
        *puVar6 = uVar5;
                    /* try { // try from 038af430 to 039af43b has its CatchHandler @ 038b345c */
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

