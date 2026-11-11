/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$.ctor
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer___ctor (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$.ctor
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer___ctor
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer___ctor_218b940
          (ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_057f78b0;
  if ((bRam0000000005c29d60 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798538);
    FUN_012d0dc8(PTR_DAT_057f78b0);
    bRam0000000005c29d60 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_05798538);
    *(long *)(param_1 + 0x40) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x40),lVar2);
    puVar1 = PTR_DAT_0576c200;
    if ((bRam0000000005c3a2b8 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,0);
      bRam0000000005c3a2b8 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

