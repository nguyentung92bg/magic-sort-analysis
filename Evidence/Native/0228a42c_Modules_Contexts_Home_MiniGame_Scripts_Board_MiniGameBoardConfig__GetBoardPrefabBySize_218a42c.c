/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardConfig$$GetBoardPrefabBySize
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoard_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig__GetBoardPrefabBySize (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig_o* __this, UnityEngine_Vector2Int_o boardSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardConfig$$GetBoardPrefabBySize
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoard_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig__GetBoardPrefabBySize
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig_o* __this,
   UnityEngine_Vector2Int_o boardSize, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig__GetBoardPrefabBySize_218a42c
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c29d54 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057954a0);
    FUN_012d0dc8(PTR_DAT_057d8c70);
    FUN_012d0dc8(PTR_DAT_057b3498);
    FUN_012d0dc8(PTR_DAT_05799a98);
    bRam0000000005c29d54 = 1;
  }
  puVar2 = PTR_DAT_057d8c70;
  puVar1 = PTR_DAT_057954a0;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05799a98);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_48,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      iVar5 = 5;
      goto LAB_0228a504;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  } while ((*(int *)(lStack_38 + 0x10) != (int)param_2) ||
          (*(int *)(lStack_38 + 0x14) != (int)((ulong)param_2 >> 0x20)));
  uVar4 = *(undefined8 *)(lStack_38 + 0x18);
  iVar5 = 4;
LAB_0228a504:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_48,*(undefined8 *)puVar1);
  if (iVar5 != 4) {
    uVar4 = 0;
  }
  return uVar4;
}

