/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$GetActiveCells
System_Collections_Generic_HashSet_MiniGameBoardCell__o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__GetActiveCells (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItem$$GetActiveCells
   System_Collections_Generic_HashSet_MiniGameBoardCell__o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__GetActiveCells
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItem__GetActiveCells_218ab1c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_057fe228;
  if ((bRam0000000005c29d59 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057961e8);
    FUN_012d0dc8(PTR_DAT_0580de08);
    FUN_012d0dc8(PTR_DAT_0577e170);
    FUN_012d0dc8(PTR_DAT_057fda20);
    FUN_012d0dc8(PTR_DAT_0580b718);
    FUN_012d0dc8(PTR_DAT_0576fa78);
    FUN_012d0dc8(PTR_DAT_057fe228);
    bRam0000000005c29d59 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    System_Collections_Generic_HashSet_object____ctor_200a670(lVar4,*(undefined8 *)PTR_DAT_0576fa78)
    ;
    puVar3 = PTR_DAT_0580de08;
    puVar2 = PTR_DAT_057fda20;
    puVar1 = PTR_DAT_057961e8;
    if (*(long *)(param_1 + 0x30) != 0) {
      System_Collections_Generic_HashSet_object___GetEnumerator_200b184
                (&uStack_48,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_0580b718);
      while( true ) {
        uVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext_3ea8360
                          (&uStack_48,*(undefined8 *)puVar3);
        if ((uVar5 & 1) == 0) {
          System_Collections_Generic_HashSet_Enumerator_object___Dispose_3ea835c
                    (&uStack_48,*(undefined8 *)puVar1);
          return lVar4;
        }
        if (lStack_38 == 0) break;
        if (0 < *(int *)(lStack_38 + 0x44)) {
          System_Collections_Generic_HashSet_object___Add_200b82c
                    (lVar4,lStack_38,*(undefined8 *)puVar2);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

