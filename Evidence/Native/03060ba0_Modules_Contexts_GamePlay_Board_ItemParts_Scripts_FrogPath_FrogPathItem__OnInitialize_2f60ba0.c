/* IL2CPP: Modules.Contexts.GamePlay.Board.ItemParts.Scripts.FrogPath.FrogPathItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem__OnInitialize (Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.ItemParts.Scripts.FrogPath.FrogPathItem$$OnInitialize
   void Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathItem__OnInitialize_2f60ba0
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000005c308fb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ed158);
    bRam0000000005c308fb = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 03060bd8 to 03160c2f has its CatchHandler @ 03060838 */
    lVar6 = *(long *)PTR_DAT_057ed158;
    bVar2 = *(byte *)(lVar6 + 300);
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x28) = plVar5;
      if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto FUN_012d0d74;
    }
                    /* try { // try from 03060c30 to 03160c33 has its CatchHandler @ 03060c5c */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03060c34 to 03160c3b has its CatchHandler @ 03060c68 */
    FUN_012d1288(plVar5,lVar6);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
FUN_012d0d74:
                    /* try { // try from 03060c3c to 03160c3f has its CatchHandler @ 03060c58 */
                    /* try { // try from 03060c40 to 03160c47 has its CatchHandler @ 03060c64 */
                    /* try { // try from 03060c48 to 03160c4f has its CatchHandler @ 03060c70 */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x28U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x28U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

