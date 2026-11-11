/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$OnInitialize
void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__OnInitialize (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$OnInitialize
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__OnInitialize
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__OnInitialize_249149c(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
                    /* try { // try from 025914a0 to 026914a3 has its CatchHandler @ 02591638 */
  if ((bRam0000000005c2b2ae & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791468);
                    /* try { // try from 025914c0 to 026914cf has its CatchHandler @ 0259164c */
    bRam0000000005c2b2ae = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_05791468;
                    /* try { // try from 025914e0 to 026914e3 has its CatchHandler @ 02591634 */
    bVar2 = *(byte *)(lVar6 + 300);
                    /* try { // try from 025914fc to 02691533 has its CatchHandler @ 02591640 */
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x48) = plVar5;
      if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto FUN_012d0d74;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar5,lVar6);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
FUN_012d0d74:
                    /* try { // try from 02591544 to 02691573 has its CatchHandler @ 0259163c */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x48U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x48U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

