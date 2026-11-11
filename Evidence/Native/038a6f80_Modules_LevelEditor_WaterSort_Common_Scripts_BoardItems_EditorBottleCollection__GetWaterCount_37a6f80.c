/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetWaterCount
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetWaterCount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x038a7280) */
/* WARNING: Removing unreachable block (ram,0x038a7284) */
/* WARNING: Removing unreachable block (ram,0x038a7308) */
/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetWaterCount
   int32_t
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetWaterCount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, const
   MethodInfo* method); */

int Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetWaterCount_37a6f80
              (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  puVar3 = PTR_DAT_057c69c0;
  if ((bRam0000000005c33e53 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05801f38);
    FUN_012d0dc8(PTR_DAT_057640d0);
    FUN_012d0dc8(PTR_DAT_0576ee48);
    FUN_012d0dc8(PTR_DAT_057ee958);
    FUN_012d0dc8(PTR_DAT_057c2cf0);
    FUN_012d0dc8(PTR_DAT_05797338);
    FUN_012d0dc8(PTR_DAT_057c8358);
    FUN_012d0dc8(PTR_DAT_057e1228);
    FUN_012d0dc8(PTR_DAT_0581b3d8);
    FUN_012d0dc8(PTR_DAT_0576ac20);
    FUN_012d0dc8(PTR_DAT_057cc6f0);
    FUN_012d0dc8(PTR_DAT_057d7b88);
    FUN_012d0dc8(PTR_DAT_05786898);
    FUN_012d0dc8(PTR_DAT_057c69c0);
    bRam0000000005c33e53 = 1;
  }
  lVar10 = *(long *)puVar3;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_a0 = 0;
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar10 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_0576ac20;
  lVar15 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar10 = *(long *)puVar3;
    }
    uVar16 = **(undefined8 **)(lVar10 + 0xb8);
    lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar15 == 0) goto LAB_038a7310;
    System_Func_object__object____ctor_33820ac(lVar15,uVar16,*(undefined8 *)PTR_DAT_05786898,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
    *plVar11 = lVar15;
    FUN_012d0d74(plVar11,lVar15);
  }
  puVar3 = PTR_DAT_0576ee48;
  uVar14 = System_Linq_Enumerable__SelectMany_object__object__242934c
                     (uVar14,lVar15,*(undefined8 *)PTR_DAT_057640d0);
  lVar10 = System_Linq_Enumerable__ToList_object__242f814(uVar14,*(undefined8 *)puVar3);
  puVar8 = PTR_DAT_05801f38;
  puVar7 = PTR_DAT_057ee958;
  puVar6 = PTR_DAT_057d7b88;
  puVar5 = PTR_DAT_057cc6f0;
  puVar4 = PTR_DAT_057c8358;
  puVar2 = PTR_DAT_057c2cf0;
  puVar3 = PTR_DAT_05797338;
  if (lVar10 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_b8,lVar10,*(undefined8 *)PTR_DAT_057cc6f0);
    iVar13 = 0;
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    plStack_70 = plStack_a8;
    while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_80,*(undefined8 *)puVar4), (uVar12 & 1) != 0) {
      if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar9 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__GetWaterCount_3ddfae4
                        (plStack_70,0);
      iVar13 = iVar9 + iVar13;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar7);
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_b8,lVar10,*(undefined8 *)puVar5);
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    plStack_70 = plStack_a8;
    while( true ) {
      uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                         (&uStack_80,*(undefined8 *)puVar4);
      if ((uVar12 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)puVar7);
        return iVar13;
      }
      if (plStack_70 == (long *)0x0) break;
      if (plStack_70[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_b8,plStack_70[0xd],*(undefined8 *)puVar6);
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      plStack_90 = plStack_a8;
      while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_a0,*(undefined8 *)puVar3), (uVar12 & 1) != 0) {
        if (plStack_90 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar8 + 300);
          if ((bVar1 <= *(byte *)(*plStack_90 + 300)) &&
             (*(long *)(*(long *)(*plStack_90 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar8)) {
            iVar9 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Generator_EditorGeneratorItem__GetColorsAmount_3dd9e10
                              (plStack_90,0);
            iVar13 = iVar9 + iVar13;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_a0,*(undefined8 *)puVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_038a7310:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

