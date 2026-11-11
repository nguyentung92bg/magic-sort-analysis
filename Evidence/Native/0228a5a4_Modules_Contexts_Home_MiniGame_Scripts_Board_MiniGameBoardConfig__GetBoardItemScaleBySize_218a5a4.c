/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardConfig$$GetBoardItemScaleBySize
UnityEngine_Vector3_o Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig__GetBoardItemScaleBySize (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig_o* __this, UnityEngine_Vector2Int_o boardSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardConfig$$GetBoardItemScaleBySize
   UnityEngine_Vector3_o
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig__GetBoardItemScaleBySize
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig_o* __this,
   UnityEngine_Vector2Int_o boardSize, const MethodInfo* method); */

float Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardConfig__GetBoardItemScaleBySize_218a5a4
                (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000005c29d55 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057954a0);
    FUN_012d0dc8(PTR_DAT_057d8c70);
    FUN_012d0dc8(PTR_DAT_057b3498);
    FUN_012d0dc8(PTR_DAT_05799a98);
    bRam0000000005c29d55 = 1;
  }
  puVar2 = PTR_DAT_057d8c70;
  puVar1 = PTR_DAT_057954a0;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_58,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05799a98);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_58,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_58,*(undefined8 *)puVar1);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        return *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0xc);
      }
      if (lStack_48 == 0) break;
      if ((*(int *)(lStack_48 + 0x10) == (int)param_2) &&
         (*(int *)(lStack_48 + 0x14) == (int)((ulong)param_2 >> 0x20))) {
        fVar5 = *(float *)(lStack_48 + 0x20);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        fVar4 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0xc);
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_58,*(undefined8 *)puVar1);
        return fVar5 * fVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

