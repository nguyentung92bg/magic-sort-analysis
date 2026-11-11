/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxItem$$OnInitialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem__OnInitialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxItem$$OnInitialize
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem__OnInitialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxItem__OnInitialize_37b16c8
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000005c33e66 & 1) == 0) {
                    /* try { // try from 038b16e0 to 039b16ef has its CatchHandler @ 038b1e90 */
    FUN_012d0dc8(PTR_DAT_0579fbc0);
    bRam0000000005c33e66 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 038b1700 to 039b1703 has its CatchHandler @ 038b1e94 */
    lVar6 = *(long *)PTR_DAT_0579fbc0;
    bVar2 = *(byte *)(lVar6 + 300);
                    /* try { // try from 038b171c to 039b1723 has its CatchHandler @ 038b2f48 */
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x30) = plVar5;
                    /* try { // try from 038b1748 to 039b174b has its CatchHandler @ 038b2f90 */
      if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto FUN_012d0d74;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 038b175c to 039b1763 has its CatchHandler @ 038b2f8c */
    FUN_012d1288(plVar5,lVar6);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
FUN_012d0d74:
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x30U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x30U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

