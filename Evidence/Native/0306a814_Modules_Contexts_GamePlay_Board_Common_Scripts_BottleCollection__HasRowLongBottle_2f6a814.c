/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$HasRowLongBottle
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasRowLongBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t rowIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$HasRowLongBottle
   bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasRowLongBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t rowIndex,
   const MethodInfo* method); */

byte Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasRowLongBottle_2f6a814
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c30916 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30916 = 1;
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),param_2,*(undefined8 *)PTR_DAT_057b0e08),
     puVar2 = PTR_DAT_057d0ba8, puVar1 = PTR_DAT_057b41c8, lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_38,lVar3,*(undefined8 *)PTR_DAT_05768d80);
  do {
    uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_38,*(undefined8 *)puVar1);
    if ((uVar4 & 1) == 0) {
      bVar5 = 0;
      iVar6 = 5;
      goto LAB_0306a8f8;
    }
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  } while (*(char *)(lStack_28 + 0xec) == '\0');
  bVar5 = 1;
  iVar6 = 4;
LAB_0306a8f8:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_38,*(undefined8 *)puVar2);
  return iVar6 == 4 & bVar5;
}

