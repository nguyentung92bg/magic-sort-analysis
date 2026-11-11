/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AreBottlesWithoutBlockersSorted
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AreBottlesWithoutBlockersSorted (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AreBottlesWithoutBlockersSorted
   bool 
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AreBottlesWithoutBlockersSorted
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AreBottlesWithoutBlockersSorted_2f6c370
          (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  
  puVar2 = PTR_DAT_05805bc0;
  if ((bRam0000000005c30935 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057ec5e8);
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    bRam0000000005c30935 = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar7 != 0) {
    System_Collections_Generic_List_Int32Enum____ctor_20512f0(lVar7,*(undefined8 *)PTR_DAT_057b99d0)
    ;
    puVar5 = PTR_DAT_05814878;
    puVar4 = PTR_DAT_057ec5e8;
    puVar3 = PTR_DAT_057b43e8;
    puVar2 = PTR_DAT_057b0e08;
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar8 != 0) {
      iVar12 = 0;
      do {
        if (*(int *)(lVar8 + 0x18) <= iVar12) {
          return 1;
        }
        lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar8,iVar12,*(undefined8 *)puVar2);
        if (lVar8 == 0) break;
        if (0 < *(int *)(lVar8 + 0x18)) {
          iVar13 = 0;
          do {
            lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar8,iVar13,*(undefined8 *)puVar3);
            if (lVar9 == 0) goto LAB_0306c570;
            uVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                               (lVar9,0);
            if (((uVar10 & 1) == 0) &&
               ((*(long *)(lVar9 + 0x88) == 0 || (*(int *)(*(long *)(lVar9 + 0x88) + 0x18) < 1)))) {
              uVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllVisibleSameColor_2499a40
                                 (lVar9,0);
              if ((uVar10 & 1) == 0) {
                return 0;
              }
              uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorId_2495544
                                (lVar9,0);
              uVar10 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                                 (lVar7,uVar6,*(undefined8 *)puVar4);
              if ((uVar10 & 1) != 0) {
                return 0;
              }
              lVar9 = *(long *)(lVar7 + 0x10);
              lVar11 = *(long *)puVar5;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_0306c570;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar7,uVar6);
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(lVar8 + 0x18));
        }
        lVar8 = *(long *)(param_1 + 0x18);
        iVar12 = iVar12 + 1;
      } while (lVar8 != 0);
    }
  }
LAB_0306c570:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

