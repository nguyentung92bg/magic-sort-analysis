/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$HasLongBottleBelowBetween
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__HasLongBottleBelowBetween (System_Collections_Generic_List_List_BottleItem___o* board, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* previousBottleItem, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, int32_t rowIndex, int32_t distanceBetweenRowsAsUnit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$HasLongBottleBelowBetween
   bool 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__HasLongBottleBelowBetween
   (System_Collections_Generic_List_List_BottleItem___o* board,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* previousBottleItem,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, int32_t rowIndex,
   int32_t distanceBetweenRowsAsUnit, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__HasLongBottleBelowBetween_22fb66c
          (long param_1,long param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam0000000005c2a5f2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c2a5f2 = 1;
  }
  puVar6 = PTR_DAT_057d0ba8;
  puVar5 = PTR_DAT_057b41c8;
  puVar4 = PTR_DAT_057b0e08;
  puVar3 = PTR_DAT_05768d80;
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) <= param_4) {
      return 0;
    }
    iVar9 = param_4 + -1;
    if (param_4 < 1) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    if (param_2 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0;
    }
    fVar10 = *(float *)(param_2 + 0x28);
    fVar11 = *(float *)(param_3 + 0x28);
    fVar12 = fVar10;
    if (fVar11 <= fVar10) {
      fVar12 = fVar11;
    }
    iVar2 = param_5;
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
    }
    do {
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_1,iVar9,*(undefined8 *)puVar4);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_a8,lVar7,*(undefined8 *)puVar3);
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      lStack_80 = lStack_98;
      while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_90,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (*(char *)(lStack_80 + 0xec) != '\0') {
          if (*(long *)(lStack_80 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          iVar1 = *(int *)(*(long *)(lStack_80 + 0x80) + 0x18);
          if ((((param_5 < iVar1) && (param_5 <= iVar1 - iVar2)) &&
              (fVar12 < *(float *)(lStack_80 + 0x28))) && (*(float *)(lStack_80 + 0x28) < fVar10)) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_90,*(undefined8 *)puVar6);
            return 1;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_90,*(undefined8 *)puVar6);
      iVar9 = iVar9 + -1;
      iVar2 = iVar2 + param_5;
    } while (-1 < iVar9);
  }
  return 0;
}

