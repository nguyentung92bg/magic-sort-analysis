/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddRainbowItem
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddRainbowItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddRainbowItem
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddRainbowItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* bottle, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddRainbowItem_37af860
               (long param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  
                    /* try { // try from 038af868 to 039af877 has its CatchHandler @ 038b30cc */
                    /* try { // try from 038af87c to 039af88b has its CatchHandler @ 038b30c8 */
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 038af8a4 to 039af8bf has its CatchHandler @ 038b36d8 */
    puVar8 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar12 = *puVar8;
    uVar13 = puVar8[1];
    uVar14 = puVar8[2];
    auVar15 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                        (*(long *)(param_1 + 0x40),0);
                    /* try { // try from 038af8d0 to 039af8d7 has its CatchHandler @ 038b348c */
    if (((param_2 != 0) && (*(long *)(param_2 + 0x20) != 0)) && (*(long *)(param_1 + 0x28) != 0)) {
      uVar5 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetRainbowItem_3ddc9f4
                        (uVar12,uVar13,uVar14,*(long *)(param_1 + 0x28),
                         *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18),auVar15._0_8_,
                         auVar15._8_8_,param_2,0);
                    /* try { // try from 038af8fc to 039af8ff has its CatchHandler @ 038b3024 */
                    /* try { // try from 038af900 to 039af90b has its CatchHandler @ 038b30d4 */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__AddBlocker_3ddf974
                (param_2,uVar5,0);
                    /* try { // try from 038af920 to 039af943 has its CatchHandler @ 038b33b0 */
      if ((bRam0000000005c33e4f & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057887b0);
        FUN_012d0dc8(PTR_DAT_05761728);
        bRam0000000005c33e4f = 1;
      }
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar6 = System_Collections_Generic_List_object___Contains_21fce6c
                          (*(long *)(param_1 + 0x20),uVar5,*(undefined8 *)PTR_DAT_05761728);
        if ((uVar6 & 1) != 0) {
          return;
        }
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 != 0) {
          lVar9 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)PTR_DAT_057887b0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *puVar10 = uVar5;
              if (iRam0000000005c3d478 != 0) {
                puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x038b03a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar7,uVar5);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

