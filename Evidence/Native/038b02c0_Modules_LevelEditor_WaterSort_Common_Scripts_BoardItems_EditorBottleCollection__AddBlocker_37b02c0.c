/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddBlocker
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddBlocker (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorABlockerItem_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$AddBlocker
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddBlocker
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorABlockerItem_o* item, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddBlocker_37b02c0
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
                    /* try { // try from 038b02d0 to 039b02db has its CatchHandler @ 038b32dc */
  if ((bRam0000000005c33e4f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057887b0);
                    /* try { // try from 038b02ec to 039b02f7 has its CatchHandler @ 038b32bc */
    FUN_012d0dc8(PTR_DAT_05761728);
    bRam0000000005c33e4f = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 038b0308 to 039b0313 has its CatchHandler @ 038b32c8 */
    uVar5 = System_Collections_Generic_List_object___Contains_21fce6c
                      (*(long *)(param_1 + 0x20),param_2,*(undefined8 *)PTR_DAT_05761728);
    if ((uVar5 & 1) != 0) {
                    /* try { // try from 038b0324 to 039b032f has its CatchHandler @ 038b32d4 */
      return;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 038b0340 to 039b0347 has its CatchHandler @ 038b32e0 */
      lVar9 = *(long *)PTR_DAT_057887b0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 038b0358 to 039b0363 has its CatchHandler @ 038b32c0 */
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                    /* try { // try from 038b036c to 039b0373 has its CatchHandler @ 038b32cc */
          puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *puVar8 = param_2;
                    /* try { // try from 038b037c to 039b0387 has its CatchHandler @ 038b32d8 */
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
                    /* try { // try from 038b0398 to 039b039f has its CatchHandler @ 038b32e4 */
                    /* WARNING: Could not recover jumptable at 0x038b03a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar6,param_2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038b03a4 to 039b03bb has its CatchHandler @ 038b0428 */
  FUN_012d0ef0();
}

