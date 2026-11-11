/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Frog.EditorFrogItem$$OnInitialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem__OnInitialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Frog.EditorFrogItem$$OnInitialize
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem__OnInitialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Frog_EditorFrogItem__OnInitialize_3dda5fc
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 03eda46c with catch @ 03eda5fc */
                    /* catch() { ... } // from try @ 03eda460 with catch @ 03eda600 */
                    /* catch() { ... } // from try @ 03eda450 with catch @ 03eda604
                       catch() { ... } // from try @ 03eda5dc with catch @ 03eda604 */
                    /* catch() { ... } // from try @ 03eda55c with catch @ 03eda608 */
                    /* catch() { ... } // from try @ 03eda4f0 with catch @ 03eda60c */
                    /* catch() { ... } // from try @ 03eda4e4 with catch @ 03eda610 */
  if ((bRam0000000005c37e24 & 1) == 0) {
                    /* catch() { ... } // from try @ 03eda4d8 with catch @ 03eda614
                       catch() { ... } // from try @ 03eda5c8 with catch @ 03eda614 */
                    /* catch() { ... } // from try @ 03eda4d0 with catch @ 03eda618
                       catch() { ... } // from try @ 03eda5c4 with catch @ 03eda618 */
                    /* catch() { ... } // from try @ 03eda420 with catch @ 03eda61c
                       catch() { ... } // from try @ 03eda5d4 with catch @ 03eda61c */
    FUN_012d0dc8(PTR_DAT_0577e1d8);
                    /* catch() { ... } // from try @ 03eda4a0 with catch @ 03eda620 */
                    /* catch() { ... } // from try @ 03eda47c with catch @ 03eda624
                       catch() { ... } // from try @ 03eda500 with catch @ 03eda624 */
    bRam0000000005c37e24 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 03eda63c to 03fda653 has its CatchHandler @ 03eda6b4 */
    lVar6 = *(long *)PTR_DAT_0577e1d8;
    bVar2 = *(byte *)(lVar6 + 300);
                    /* try { // try from 03eda654 to 03fda6a3 has its CatchHandler @ 03eda318 */
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x30) = plVar5;
      if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto FUN_012d0d74;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar5,lVar6);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
FUN_012d0d74:
                    /* try { // try from 03eda6a4 to 03fda6b3 has its CatchHandler @ 03eda6b4 */
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

