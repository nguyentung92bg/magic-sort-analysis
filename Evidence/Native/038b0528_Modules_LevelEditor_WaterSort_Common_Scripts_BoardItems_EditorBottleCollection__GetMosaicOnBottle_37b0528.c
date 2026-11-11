/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetMosaicOnBottle
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetMosaicOnBottle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetMosaicOnBottle
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetMosaicOnBottle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, const
   MethodInfo* method); */

long * Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetMosaicOnBottle_37b0528
                 (undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
                    /* try { // try from 038b0540 to 039b0547 has its CatchHandler @ 038b30b4 */
  if ((bRam0000000005c33e5d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790308);
    FUN_012d0dc8(PTR_DAT_057c2cf0);
    FUN_012d0dc8(PTR_DAT_05797338);
    FUN_012d0dc8(PTR_DAT_0581b3d8);
    FUN_012d0dc8(PTR_DAT_057d7b88);
    bRam0000000005c33e5d = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  if (param_2 == 0) {
LAB_038b0660:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038b0660 to 039b0667 has its CatchHandler @ 038b3028 */
    FUN_012d0ef0();
  }
                    /* try { // try from 038b05a0 to 039b05a7 has its CatchHandler @ 038b30a4 */
  uVar5 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                    (param_2,0);
  puVar4 = PTR_DAT_057c2cf0;
  puVar3 = PTR_DAT_05797338;
  puVar2 = PTR_DAT_05790308;
  plVar6 = (long *)0x0;
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 038b05b0 to 039b05e7 has its CatchHandler @ 038b33c8 */
    if (*(long *)(param_2 + 0x68) == 0) goto LAB_038b0660;
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_2 + 0x68),*(undefined8 *)PTR_DAT_057d7b88);
    do {
      do {
        uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_48,*(undefined8 *)puVar3);
        if ((uVar5 & 1) == 0) {
          plVar6 = (long *)0x0;
          iVar7 = 6;
          goto LAB_038b0638;
        }
                    /* try { // try from 038b05f4 to 039b05ff has its CatchHandler @ 038b30a8 */
      } while (plStack_38 == (long *)0x0);
      bVar1 = *(byte *)(*(long *)puVar2 + 300);
                    /* try { // try from 038b0610 to 039b061b has its CatchHandler @ 038b30ac */
    } while ((*(byte *)(*plStack_38 + 300) < bVar1) ||
            (*(long *)(*(long *)(*plStack_38 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2));
    iVar7 = 5;
    plVar6 = plStack_38;
LAB_038b0638:
                    /* try { // try from 038b063c to 039b0643 has its CatchHandler @ 038b30b0 */
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar4);
    if (iVar7 != 5) {
      plVar6 = (long *)0x0;
    }
  }
  return plVar6;
}

