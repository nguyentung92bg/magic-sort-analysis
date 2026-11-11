/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetMaxBottleCountInRow
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetMaxBottleCountInRow (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetMaxBottleCountInRow
   int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetMaxBottleCountInRow
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetMaxBottleCountInRow_2f6a9ac
              (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  if ((bRam0000000005c3091f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c3091f = 1;
  }
  puVar2 = PTR_DAT_057b0e08;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return iVar5;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar6,*(undefined8 *)puVar2);
      if (lVar4 == 0) break;
      lVar3 = *(long *)(param_1 + 0x18);
      iVar6 = iVar6 + 1;
      iVar1 = *(int *)(lVar4 + 0x18);
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

