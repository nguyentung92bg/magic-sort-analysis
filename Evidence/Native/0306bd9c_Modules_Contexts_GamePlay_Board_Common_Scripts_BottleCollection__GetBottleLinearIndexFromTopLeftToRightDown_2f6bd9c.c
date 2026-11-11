/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBottleLinearIndexFromTopLeftToRightDown
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleLinearIndexFromTopLeftToRightDown (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBottleLinearIndexFromTopLeftToRightDown
   int32_t
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleLinearIndexFromTopLeftToRightDown
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleLinearIndexFromTopLeftToRightDown_2f6bd9c
              (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((bRam0000000005c30930 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30930 = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    iVar6 = *(int *)(lVar3 + 0x18) + -1;
    if (iVar6 < 0) {
      return -1;
    }
    iVar5 = 0;
    do {
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar6,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar7 = 0;
        do {
          lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar3,iVar7,*(undefined8 *)puVar2);
          if (lVar4 == param_2) {
            return iVar5;
          }
          lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar3,iVar7,*(undefined8 *)puVar2);
          iVar7 = iVar7 + 1;
          if (lVar4 != 0) {
            iVar5 = iVar5 + 1;
          }
        } while (iVar7 < *(int *)(lVar3 + 0x18));
      }
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) {
        return -1;
      }
      lVar3 = *(long *)(param_1 + 0x18);
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

