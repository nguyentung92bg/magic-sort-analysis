/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddDuckItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuckItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, int32_t index, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddDuckItem
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuckItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle,
   int32_t index, int32_t duckType, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuckItem_37af454
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  if (param_2 != 0) {
                    /* try { // try from 038af468 to 039af473 has its CatchHandler @ 038b3440 */
    lVar4 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetCell_3ddf19c
                      (param_2,param_3,0);
    if (lVar4 == 0) {
                    /* try { // try from 038af4f4 to 039af4f7 has its CatchHandler @ 038b3068 */
                    /* try { // try from 038af4f8 to 039af52b has its CatchHandler @ 038b3664 */
      return;
    }
                    /* try { // try from 038af484 to 039af48f has its CatchHandler @ 038b3468 */
    if (*(long *)(param_1 + 0x40) != 0) {
      auVar7 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxKeyIdleSorting_4002ba0
                         (*(long *)(param_1 + 0x40),0);
                    /* try { // try from 038af4a0 to 039af4a7 has its CatchHandler @ 038b3454 */
      if ((*(long *)(param_2 + 0x20) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
                    /* try { // try from 038af4cc to 039af4cf has its CatchHandler @ 038b306c */
        uVar5 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetDuckItem_3ddc294
                          (*(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),
                           *(undefined4 *)(lVar4 + 0x18),*(long *)(param_1 + 0x28),
                           *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),auVar7._0_8_,
                           auVar7._8_8_,param_2,lVar4,param_4,0);
                    /* try { // try from 038af4d0 to 039af4db has its CatchHandler @ 038b3458 */
        puVar6 = (undefined8 *)(lVar4 + 0x30);
        *puVar6 = uVar5;
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

