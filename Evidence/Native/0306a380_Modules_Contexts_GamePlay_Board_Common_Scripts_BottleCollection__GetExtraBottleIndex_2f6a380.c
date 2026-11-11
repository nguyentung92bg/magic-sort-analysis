/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetExtraBottleIndex
System_ValueTuple_int__int__o Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetExtraBottleIndex (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetExtraBottleIndex
   System_ValueTuple_int__int__o
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetExtraBottleIndex
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetExtraBottleIndex_2f6a380
          (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uStack_58;
  
  if ((bRam0000000005c30917 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    FUN_012d0dc8(PTR_DAT_05815980);
    bRam0000000005c30917 = 1;
  }
  puVar3 = PTR_DAT_05815980;
  iVar4 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetRowIndexWithLeastBottle_2f6ad44
                    (param_1);
  puVar2 = PTR_DAT_057b0e08;
  if (iVar4 == -1) {
    uVar11 = *(undefined8 *)puVar3;
    uVar10 = 0xffffffff;
    iVar4 = -1;
LAB_0306a51c:
    uStack_58 = 0;
    System_ValueTuple_int__int____ctor_2b8bfd0(&uStack_58,uVar10,iVar4,uVar11);
    return uStack_58;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x18),iVar4,*(undefined8 *)PTR_DAT_057b0e08),
     lVar7 != 0)) {
    uVar10 = *(uint *)(lVar7 + 0x18);
    uVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles_2f6a540
                      (param_1);
    if (((uVar8 & 1) == 0) ||
       (iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetIntersectedLongBottleCountWithRow_22fb1e4
                          (*(undefined8 *)(param_1 + 0x18),iVar4,*(undefined4 *)(param_1 + 0x60),0),
       iVar5 < 1)) {
      uVar11 = *(undefined8 *)puVar3;
      goto LAB_0306a51c;
    }
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 != 0) {
      iVar5 = 0;
      iVar12 = -0x80000000;
      iVar13 = 0x7fffffff;
      do {
        if (*(int *)(lVar9 + 0x18) <= iVar5) {
          if ((iVar12 - iVar13 < 2) || ((uVar10 & 1) != 0)) {
            uVar10 = *(uint *)(lVar7 + 0x18);
            uVar11 = *(undefined8 *)puVar3;
          }
          else {
            uVar11 = *(undefined8 *)puVar3;
            uVar10 = 0;
          }
          goto LAB_0306a51c;
        }
        lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar9,iVar5,*(undefined8 *)puVar2);
        if (lVar9 == 0) break;
        iVar1 = *(int *)(lVar9 + 0x18);
        iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetIntersectedLongBottleCountWithRow_22fb1e4
                          (*(undefined8 *)(param_1 + 0x18),iVar5,*(undefined4 *)(param_1 + 0x60),0);
        iVar6 = iVar6 + iVar1;
        lVar9 = *(long *)(param_1 + 0x18);
        if (iVar6 <= iVar13) {
          iVar13 = iVar6;
        }
        if (iVar12 <= iVar6) {
          iVar12 = iVar6;
        }
        iVar5 = iVar5 + 1;
      } while (lVar9 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

