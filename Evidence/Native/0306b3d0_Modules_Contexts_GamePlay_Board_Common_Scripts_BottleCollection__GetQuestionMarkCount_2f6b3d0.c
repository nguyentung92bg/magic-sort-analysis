/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetQuestionMarkCount
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetQuestionMarkCount (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetQuestionMarkCount
   int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetQuestionMarkCount
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

int Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetQuestionMarkCount_2f6b3d0
              (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((bRam0000000005c30922 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30922 = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar7) {
        return iVar6;
      }
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar7,*(undefined8 *)puVar1);
      if (lVar4 == 0) break;
      if (0 < *(int *)(lVar4 + 0x18)) {
        iVar8 = 0;
        do {
          lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar4,iVar8,*(undefined8 *)puVar2);
          if (lVar5 == 0) goto LAB_0306b4b4;
          iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetQuestionMarkCount_249d98c
                            (lVar5,0);
          iVar8 = iVar8 + 1;
          iVar6 = iVar3 + iVar6;
        } while (iVar8 < *(int *)(lVar4 + 0x18));
      }
      lVar4 = *(long *)(param_1 + 0x18);
      iVar7 = iVar7 + 1;
    } while (lVar4 != 0);
  }
LAB_0306b4b4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

