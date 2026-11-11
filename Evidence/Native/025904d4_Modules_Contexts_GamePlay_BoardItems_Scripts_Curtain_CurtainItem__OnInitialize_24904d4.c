/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$OnInitialize
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__OnInitialize (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$OnInitialize
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__OnInitialize
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__OnInitialize_24904d4
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000005c2b2a2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e5d78);
                    /* try { // try from 025904f8 to 02690507 has its CatchHandler @ 02590508 */
    bRam0000000005c2b2a2 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0259043c with catch @ 02590508
                       catch() { ... } // from try @ 025904f8 with catch @ 02590508 */
                    /* try { // try from 0259050c to 0269050f has its CatchHandler @ 02590518 */
                    /* try { // try from 02590510 to 0269051b has its CatchHandler @ 02590390 */
    lVar6 = *(long *)PTR_DAT_057e5d78;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259050c with catch @ 02590518
                        */
                    /* try { // try from 0259051c to 0269056b has its CatchHandler @ 0259051c
                       catch() { ... } // from try @ 0259051c with catch @ 0259051c
                       catch() { ... } // from try @ 025905ac with catch @ 0259051c
                       catch() { ... } // from try @ 025905f4 with catch @ 0259051c
                       catch() { ... } // from try @ 025906ac with catch @ 0259051c */
    bVar2 = *(byte *)(lVar6 + 300);
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x48) = plVar5;
      if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto FUN_012d0d74;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar5,lVar6);
  }
                    /* try { // try from 0259056c to 0269057b has its CatchHandler @ 025905c4 */
  *(undefined8 *)(param_1 + 0x48) = 0;
FUN_012d0d74:
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

