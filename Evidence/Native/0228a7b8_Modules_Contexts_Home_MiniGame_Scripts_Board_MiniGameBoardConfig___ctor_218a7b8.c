/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardConfig$$.ctor
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig___ctor (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardConfig$$.ctor
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig___ctor
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig___ctor_218a7b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_058021e0;
  if ((bRam0000000005c29d56 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b5848);
    FUN_012d0dc8(PTR_DAT_058021e0);
    bRam0000000005c29d56 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_057b5848);
    *(long *)(param_1 + 0x18) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x18),lVar2);
    puVar1 = PTR_DAT_0576c200;
    if ((bRam0000000005c3a3d4 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,0);
      bRam0000000005c3a3d4 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    System_Object___ctor_23dfe5c(param_1,0);
    if (pcRam0000000005c3a3d8 == (code *)0x0) {
      pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
    }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a3d8)(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

