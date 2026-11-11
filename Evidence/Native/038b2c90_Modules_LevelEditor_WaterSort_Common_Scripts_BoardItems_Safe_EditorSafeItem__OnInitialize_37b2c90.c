/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeItem$$OnInitialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem__OnInitialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe.EditorSafeItem$$OnInitialize
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem__OnInitialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Safe_EditorSafeItem__OnInitialize_37b2c90
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
                    /* try { // try from 038b2c98 to 039b2c9b has its CatchHandler @ 038b2d8c */
                    /* try { // try from 038b2ca4 to 039b2ca7 has its CatchHandler @ 038b2d88 */
  if ((bRam0000000005c33e6e & 1) == 0) {
                    /* try { // try from 038b2cb0 to 039b2cb3 has its CatchHandler @ 038b2d84 */
    FUN_012d0dc8(PTR_DAT_057ba938);
    bRam0000000005c33e6e = 1;
  }
                    /* try { // try from 038b2cbc to 039b2cbf has its CatchHandler @ 038b2d80 */
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 038b2cc8 to 039b2ccb has its CatchHandler @ 038b2d7c */
    lVar6 = *(long *)PTR_DAT_057ba938;
                    /* try { // try from 038b2cd4 to 039b2cd7 has its CatchHandler @ 038b2d78 */
                    /* try { // try from 038b2cd8 to 039b2d47 has its CatchHandler @ 038ae800 */
    bVar2 = *(byte *)(lVar6 + 300);
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

