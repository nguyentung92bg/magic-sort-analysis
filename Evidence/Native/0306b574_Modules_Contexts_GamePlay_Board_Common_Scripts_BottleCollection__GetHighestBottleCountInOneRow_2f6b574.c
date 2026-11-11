/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetHighestBottleCountInOneRow
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetHighestBottleCountInOneRow (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetHighestBottleCountInOneRow
   int32_t
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetHighestBottleCountInOneRow
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetHighestBottleCountInOneRow_2f6b574
              (undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleCount_2f68a70();
  iVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                    (param_1);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar2 / iVar3;
  }
  iVar4 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                    (param_1);
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = iVar2 / iVar4;
  }
  if (iVar2 != iVar3 * iVar4 && -1 < iVar2 - iVar3 * iVar4) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

