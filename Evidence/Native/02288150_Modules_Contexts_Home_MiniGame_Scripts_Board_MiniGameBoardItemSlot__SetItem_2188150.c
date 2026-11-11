/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlot$$SetItem
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__SetItem (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* __this, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlot$$SetItem
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__SetItem
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem_o* item, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__SetItem_2188150
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x28);
  *plVar3 = param_2;
  FUN_012d0d74(plVar3);
  if ((*plVar3 != 0) &&
     (plVar3 = (long *)UnityEngine_Component__get_transform_408b444(*plVar3,0),
     plVar3 != (long *)0x0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if ((bRam0000000005c3a590 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05807f60,uVar2,0);
      FUN_012d0dc8(PTR_DAT_057de130);
      FUN_012d0dc8(PTR_DAT_057c0b18);
      bRam0000000005c3a590 = 1;
    }
    puVar1 = PTR_DAT_057c0b18;
    if ((plVar3 != (long *)0x0) && (*plVar3 == *(long *)PTR_DAT_057de130)) {
      if (*(int *)(*(long *)PTR_DAT_05807f60 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      UnityEngine_Debug__LogWarning_407ad74(*(undefined8 *)puVar1,plVar3);
    }
    if (pcRam0000000005c3a5a0 == (code *)0x0) {
      pcRam0000000005c3a5a0 = (code *)FUN_012d0d84(&UNK_043eec3f);
    }
                    /* WARNING: Could not recover jumptable at 0x041934a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a5a0)(plVar3,uVar2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

