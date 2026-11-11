/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$HasLongBottle
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__HasLongBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$HasLongBottle
   bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__HasLongBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo*
   method); */

byte Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__HasLongBottle_2d9537c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c2f9fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e9d80);
    FUN_012d0dc8(PTR_DAT_057e70c8);
    FUN_012d0dc8(PTR_DAT_05778a78);
    FUN_012d0dc8(PTR_DAT_0577f0d8);
    bRam0000000005c2f9fd = 1;
  }
  puVar2 = PTR_DAT_057e9d80;
  puVar1 = PTR_DAT_057e70c8;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0577f0d8);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_38,*(undefined8 *)puVar1);
    if ((uVar3 & 1) == 0) {
      bVar4 = 0;
      iVar5 = 5;
      goto LAB_02e9543c;
    }
    if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles_2f6a540
                      (lStack_28,0);
  } while ((uVar3 & 1) == 0);
  bVar4 = 1;
  iVar5 = 4;
LAB_02e9543c:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_38,*(undefined8 *)puVar2);
  return iVar5 == 4 & bVar4;
}

