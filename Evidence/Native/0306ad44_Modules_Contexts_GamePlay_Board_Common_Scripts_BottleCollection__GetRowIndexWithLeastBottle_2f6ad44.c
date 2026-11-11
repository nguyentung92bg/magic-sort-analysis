/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetRowIndexWithLeastBottle
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetRowIndexWithLeastBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetRowIndexWithLeastBottle
   int32_t
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetRowIndexWithLeastBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetRowIndexWithLeastBottle_2f6ad44
              (long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((bRam0000000005c30920 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30920 = 1;
  }
  puVar2 = PTR_DAT_057b0e08;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar5 = 0;
    iVar7 = 0x7fffffff;
    iVar6 = -1;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return iVar6;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar5,*(undefined8 *)puVar2);
      if (lVar4 == 0) break;
      iVar1 = *(int *)(lVar4 + 0x18);
      iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetIntersectedLongBottleCountWithRow_22fb1e4
                        (*(undefined8 *)(param_1 + 0x18),iVar5,*(undefined4 *)(param_1 + 0x60),0);
      iVar3 = iVar3 + iVar1;
      lVar4 = *(long *)(param_1 + 0x18);
      iVar1 = iVar5;
      if (iVar7 <= iVar3) {
        iVar1 = iVar6;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      iVar5 = iVar5 + 1;
      iVar6 = iVar1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

