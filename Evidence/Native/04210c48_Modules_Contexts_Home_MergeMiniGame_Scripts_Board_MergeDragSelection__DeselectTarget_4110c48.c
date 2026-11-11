/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$DeselectTarget
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__DeselectTarget (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeDragSelection$$DeselectTarget
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__DeselectTarget
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__DeselectTarget_4110c48
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_0576c200;
  if ((bRam0000000005c3abf5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3abf5 = 1;
  }
                    /* try { // try from 04210c7c to 04310d87 has its CatchHandler @ 04210c7c
                       catch() { ... } // from try @ 04210c7c with catch @ 04210c7c
                       catch() { ... } // from try @ 042110d8 with catch @ 04210c7c
                       catch() { ... } // from try @ 04211178 with catch @ 04210c7c
                       catch() { ... } // from try @ 0421122c with catch @ 04210c7c
                       catch() { ... } // from try @ 04211488 with catch @ 04210c7c
                       catch() { ... } // from try @ 04211548 with catch @ 04210c7c
                       catch() { ... } // from try @ 04211598 with catch @ 04210c7c
                       catch() { ... } // from try @ 04211600 with catch @ 04210c7c */
  plVar6 = (long *)(param_1 + 0x18);
  lVar7 = *plVar6;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Inequality_408e110(lVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (*plVar6 != 0) {
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__StopMergeableHoverAnim_410ea44
                ();
      *plVar6 = 0;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

