/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxKeyItem$$OnInitialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyItem__OnInitialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox.EditorWoodboxKeyItem$$OnInitialize
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyItem__OnInitialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyItem_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Woodbox_EditorWoodboxKeyItem__OnInitialize_37b18b4
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000005c33e67 & 1) == 0) {
                    /* try { // try from 038b18d0 to 039b18e3 has its CatchHandler @ 038b192c */
    FUN_012d0dc8(PTR_DAT_057d08e0);
    bRam0000000005c33e67 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_057d08e0;
                    /* try { // try from 038b18fc to 039b1903 has its CatchHandler @ 038b1e68 */
    bVar2 = *(byte *)(lVar6 + 300);
                    /* try { // try from 038b1918 to 039b1923 has its CatchHandler @ 038b1928 */
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x30) = plVar5;
                    /* try { // try from 038b1924 to 039b1943 has its CatchHandler @ 038ae800 */
                    /* catch() { ... } // from try @ 038b1918 with catch @ 038b1928 */
                    /* catch() { ... } // from try @ 038b18d0 with catch @ 038b192c */
                    /* catch() { ... } // from try @ 038b18b0 with catch @ 038b1930 */
      if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto FUN_012d0d74;
    }
                    /* try { // try from 038b1944 to 039b195b has its CatchHandler @ 038b1a64 */
                    /* WARNING: Subroutine does not return */
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

