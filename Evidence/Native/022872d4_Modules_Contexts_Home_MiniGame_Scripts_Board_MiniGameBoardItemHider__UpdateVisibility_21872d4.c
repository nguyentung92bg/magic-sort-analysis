/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemHider$$UpdateVisibility
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemHider__UpdateVisibility (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemHider$$UpdateVisibility
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemHider__UpdateVisibility
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemHider_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemHider__UpdateVisibility_21872d4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c29d5a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e39d8);
    FUN_012d0dc8(PTR_DAT_057d8990);
    FUN_012d0dc8(PTR_DAT_05805888);
    FUN_012d0dc8(PTR_DAT_05810338);
    bRam0000000005c29d5a = 1;
  }
  puVar2 = PTR_DAT_057e39d8;
  puVar1 = PTR_DAT_057d8990;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_05810338);
    do {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar2);
        Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemHider__Show_218ad20(param_1);
        return;
      }
      if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    } while (0 < *(int *)(lStack_28 + 0x44));
    *(undefined1 *)(param_1 + 0x28) = 1;
    Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemHider__Hide_218acf4(param_1);
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar2);
  }
  return;
}

