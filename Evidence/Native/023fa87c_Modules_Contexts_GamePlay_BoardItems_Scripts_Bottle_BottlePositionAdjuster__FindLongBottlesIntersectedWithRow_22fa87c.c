/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$FindLongBottlesIntersectedWithRow
System_Collections_Generic_List_BottleItem__o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindLongBottlesIntersectedWithRow (System_Collections_Generic_List_List_BottleItem___o* board, int32_t rowIndex, int32_t distanceBetweenRowsAsUnit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$FindLongBottlesIntersectedWithRow
   System_Collections_Generic_List_BottleItem__o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindLongBottlesIntersectedWithRow
   (System_Collections_Generic_List_List_BottleItem___o* board, int32_t rowIndex, int32_t
   distanceBetweenRowsAsUnit, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__FindLongBottlesIntersectedWithRow_22fa87c
               (long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  
  puVar3 = PTR_DAT_057fd598;
  if ((bRam0000000005c2a5f0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e0d0);
    FUN_012d0dc8(PTR_DAT_05800018);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    FUN_012d0dc8(PTR_DAT_057fd598);
    bRam0000000005c2a5f0 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar6 == 0) {
LAB_023faa50:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_05800018);
  puVar5 = PTR_DAT_057b43e8;
  puVar4 = PTR_DAT_057b0e08;
  puVar3 = PTR_DAT_0577e0d0;
  if ((param_2 != 0) && (param_2 = param_2 + -1, -1 < param_2)) {
    iVar12 = param_3;
    if (param_1 == 0) goto LAB_023faa50;
    do {
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_1,param_2,*(undefined8 *)puVar4);
      if (lVar7 == 0) goto LAB_023faa50;
      if (0 < *(int *)(lVar7 + 0x18)) {
        iVar11 = 0;
        do {
          lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar7,iVar11,*(undefined8 *)puVar5);
          if ((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) goto LAB_023faa50;
          iVar1 = *(int *)(*(long *)(lVar8 + 0x80) + 0x18);
          if ((param_3 < iVar1) && (param_3 <= iVar1 - iVar12)) {
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_023faa50;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar8;
              FUN_012d0d74();
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))(lVar6)
              ;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar7 + 0x18));
      }
      param_2 = param_2 + -1;
      iVar12 = iVar12 + param_3;
    } while (-1 < param_2);
  }
  return lVar6;
}

