/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetColorsInLevel
System_Collections_Generic_List_ColorId__o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetColorsInLevel (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, System_Collections_Generic_List_BottleItemModel__o* bottleModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x038af068) */
/* WARNING: Removing unreachable block (ram,0x038aee7c) */
/* WARNING: Removing unreachable block (ram,0x038af1c4) */
/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetColorsInLevel
   System_Collections_Generic_List_ColorId__o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetColorsInLevel
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   System_Collections_Generic_List_BottleItemModel__o* bottleModels, const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetColorsInLevel_37aeb50
               (undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  puVar3 = PTR_DAT_05805bc0;
  if ((bRam0000000005c33e4b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc520);
    FUN_012d0dc8(PTR_DAT_057d4600);
    FUN_012d0dc8(PTR_DAT_05784db8);
    FUN_012d0dc8(PTR_DAT_057d5058);
    FUN_012d0dc8(PTR_DAT_0579f218);
    FUN_012d0dc8(PTR_DAT_057ec8f0);
    FUN_012d0dc8(PTR_DAT_05806558);
    FUN_012d0dc8(PTR_DAT_057dccf0);
    FUN_012d0dc8(PTR_DAT_058159f8);
    FUN_012d0dc8(PTR_DAT_05760650);
    FUN_012d0dc8(PTR_DAT_05766e18);
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057ec5e8);
    FUN_012d0dc8(PTR_DAT_057cce78);
    FUN_012d0dc8(PTR_DAT_05764cb8);
    FUN_012d0dc8(PTR_DAT_057a54b8);
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    FUN_012d0dc8(PTR_DAT_057767b8);
    bRam0000000005c33e4b = 1;
  }
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_c0 = 0;
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar9 == 0) ||
     (System_Collections_Generic_List_Int32Enum____ctor_20512f0
                (lVar9,*(undefined8 *)PTR_DAT_057b99d0), puVar7 = PTR_DAT_05814878,
     puVar6 = PTR_DAT_057ec8f0, puVar5 = PTR_DAT_057ec5e8, puVar4 = PTR_DAT_057d5058,
     puVar3 = PTR_DAT_05766e18, plVar21 = (long *)PTR_DAT_05760650, param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_d8,param_2,*(undefined8 *)PTR_DAT_057a54b8);
  uStack_78 = uStack_d0;
  uStack_80 = uStack_d8;
  plStack_70 = plStack_c8;
  do {
    uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                       (&uStack_80,*(undefined8 *)PTR_DAT_0579f218);
    plVar18 = plStack_70;
    if ((uVar10 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)PTR_DAT_057d4600);
      return lVar9;
    }
    if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (plStack_70[4] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_d8,plStack_70[4],*(undefined8 *)PTR_DAT_057cce78);
    uStack_98 = uStack_d0;
    uStack_a0 = uStack_d8;
    plStack_90 = plStack_c8;
    while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_a0,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
      if (plStack_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar19 = plStack_90[4];
      if (lVar19 != 0) {
        uVar20 = *(undefined8 *)puVar3;
        plVar11 = (long *)thunk_FUN_01320d5c(lVar19,uVar20);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar19,uVar20);
        }
        lVar13 = *plVar11;
        lVar19 = *(long *)puVar3;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar19) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_038aedd4;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,lVar19,0);
LAB_038aedd4:
        uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        uVar10 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                           (lVar9,uVar8,*(undefined8 *)puVar5);
        if ((uVar10 & 1) == 0) {
          lVar19 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)puVar7;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar19 + (long)(int)uVar2 * 4 + 0x20) = uVar8;
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar9,uVar8);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_a0,*(undefined8 *)PTR_DAT_05784db8);
    if (plVar18[5] != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_d8,plVar18[5],*(undefined8 *)PTR_DAT_05764cb8);
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      plStack_b0 = plStack_c8;
      plVar18 = (long *)PTR_DAT_057767b8;
      while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_c0,*(undefined8 *)puVar6), plVar11 = plStack_b0,
            (uVar10 & 1) != 0) {
        if (plStack_b0 != (long *)0x0) {
          lVar19 = *plStack_b0;
          bVar15 = *(byte *)(lVar19 + 300);
          bVar1 = *(byte *)(*plVar21 + 300);
          if ((bVar1 <= bVar15) &&
             (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar1 * 8 + -8) == *plVar21)) {
            lVar19 = plStack_b0[3];
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (0 < (int)*(ulong *)(lVar19 + 0x18)) {
              uVar10 = 0;
              uVar14 = *(ulong *)(lVar19 + 0x18) & 0xffffffff;
              do {
                if (uVar14 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef8();
                }
                uVar8 = *(undefined4 *)(lVar19 + 0x20 + uVar10 * 4);
                uVar14 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                                   (lVar9,uVar8,*(undefined8 *)puVar5);
                if ((uVar14 & 1) == 0) {
                  lVar13 = *(long *)(lVar9 + 0x10);
                  lVar16 = *(long *)puVar7;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = uVar8;
                  }
                  else {
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar9,uVar8);
                  }
                }
                uVar14 = (ulong)*(uint *)(lVar19 + 0x18);
                uVar10 = uVar10 + 1;
              } while ((long)uVar10 < (long)(int)*(uint *)(lVar19 + 0x18));
            }
            lVar19 = *plVar11;
            bVar15 = *(byte *)(lVar19 + 300);
            plVar18 = (long *)PTR_DAT_057767b8;
            plVar21 = (long *)PTR_DAT_05760650;
          }
          bVar1 = *(byte *)(*plVar18 + 300);
          if (((bVar1 <= bVar15) &&
              (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar1 * 8 + -8) == *plVar18)) &&
             (uVar10 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                                 (lVar9,*(undefined4 *)((long)plVar11 + 0x14),*(undefined8 *)puVar5)
             , (uVar10 & 1) == 0)) {
            uVar8 = *(undefined4 *)((long)plVar11 + 0x14);
            lVar19 = *(long *)(lVar9 + 0x10);
            lVar13 = *(long *)puVar7;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar19 + (long)(int)uVar2 * 4 + 0x20) = uVar8;
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))(lVar9)
              ;
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_c0,*(undefined8 *)PTR_DAT_057bc520);
    }
  } while( true );
}

