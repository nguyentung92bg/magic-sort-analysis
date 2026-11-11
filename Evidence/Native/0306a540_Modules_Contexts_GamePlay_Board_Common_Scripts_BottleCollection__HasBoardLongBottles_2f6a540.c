/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$HasBoardLongBottles
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0306a778) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$HasBoardLongBottles
   bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

byte Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles_2f6a540
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c30932 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057a2960);
    FUN_012d0dc8(PTR_DAT_058066c8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_057be708);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057db558);
    bRam0000000005c30932 = 1;
  }
  puVar5 = PTR_DAT_058066c8;
  puVar4 = PTR_DAT_057d0ba8;
  puVar3 = PTR_DAT_057b41c8;
  puVar2 = PTR_DAT_057a2960;
  puVar1 = PTR_DAT_05768d80;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_a8,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057db558);
    bVar6 = 0;
    uStack_68 = uStack_a0;
    uStack_70 = uStack_a8;
    lStack_60 = lStack_98;
    do {
      uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_70,*(undefined8 *)puVar5);
      if ((uVar7 & 1) == 0) {
        iVar8 = 8;
        break;
      }
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_a8,lStack_60,*(undefined8 *)puVar1);
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      lStack_80 = lStack_98;
      do {
        uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_90,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          iVar8 = 3;
          goto LAB_0306a6bc;
        }
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      } while (*(int *)(lStack_80 + 0x48) <= *(int *)(param_1 + 0x5c));
      bVar6 = 1;
      iVar8 = 7;
LAB_0306a6bc:
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_90,*(undefined8 *)puVar4);
    } while ((iVar8 == 3) || (iVar8 == 0));
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar2);
    bVar6 = iVar8 == 7 & bVar6;
  }
  else {
    bVar6 = 0;
  }
  return bVar6;
}

