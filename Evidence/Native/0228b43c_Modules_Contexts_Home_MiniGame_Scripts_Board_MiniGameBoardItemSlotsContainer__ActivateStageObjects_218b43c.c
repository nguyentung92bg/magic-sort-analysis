/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$ActivateStageObjects
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__ActivateStageObjects (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this, int32_t stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$ActivateStageObjects
   void 
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__ActivateStageObjects
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this, int32_t
   stage, const MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__ActivateStageObjects_218b43c
               (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c29d5d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9a60);
    FUN_012d0dc8(PTR_DAT_057c2030);
    bRam0000000005c29d5d = 1;
  }
  puVar1 = PTR_DAT_057c2030;
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if ((lVar2 == 0) ||
         (lVar2 = UnityEngine_Component__get_gameObject_408b480(lVar2,0), lVar2 == 0)) break;
      UnityEngine_GameObject__SetActive_408e318(lVar2,iVar3 <= param_2,0);
      lVar2 = *(long *)(param_1 + 0x28);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

