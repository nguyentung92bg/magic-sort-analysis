/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameStageLevelsData$$.ctor
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData___ctor (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameStageLevelsData$$.ctor
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData___ctor
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData_o* __this, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameStageLevelsData___ctor_21914c0(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_0576ecb8;
  if ((bRam0000000005c29d94 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05780c28);
    FUN_012d0dc8(PTR_DAT_0576ecb8);
    bRam0000000005c29d94 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar2,*(undefined8 *)PTR_DAT_05780c28);
    *(long *)(param_1 + 0x10) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x10),lVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

