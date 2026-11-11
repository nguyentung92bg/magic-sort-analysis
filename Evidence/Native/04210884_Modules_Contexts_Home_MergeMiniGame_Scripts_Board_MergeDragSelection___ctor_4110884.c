/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$.ctor
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection___ctor (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoard_o* board, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$.ctor
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection___ctor
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoard_o* board, const MethodInfo* method);
    */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection___ctor_4110884
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 04210890 to 043108d3 has its CatchHandler @ 04210b50 */
  System_Object___ctor_23dfe5c(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_2;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

