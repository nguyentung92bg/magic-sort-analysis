/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$CompleteQuestionMark
void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__CompleteQuestionMark (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$CompleteQuestionMark
   void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__CompleteQuestionMark
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__CompleteQuestionMark_1e90ff0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x28);
  lVar4 = *plVar5;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x40) == '\0')) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__Complete_2745ae4
              (lVar4,0);
    *plVar5 = 0;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}

