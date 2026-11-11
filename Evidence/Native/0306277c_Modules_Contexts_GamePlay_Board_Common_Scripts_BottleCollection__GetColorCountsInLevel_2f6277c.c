/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetColorCountsInLevel
System_Collections_Generic_Dictionary_ColorId__int__o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorCountsInLevel (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, System_Collections_Generic_List_BottleItemModel__o* bottlesModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03062a84) */
/* WARNING: Removing unreachable block (ram,0x03062d00) */
/* WARNING: Removing unreachable block (ram,0x03062bb0) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetColorCountsInLevel
   System_Collections_Generic_Dictionary_ColorId__int__o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorCountsInLevel
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   System_Collections_Generic_List_BottleItemModel__o* bottlesModels, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorCountsInLevel_2f6277c
               (undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
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
  
  puVar2 = PTR_DAT_057658e0;
  if ((bRam0000000005c30905 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05787ef0);
    FUN_012d0dc8(PTR_DAT_0580d580);
    FUN_012d0dc8(PTR_DAT_05783760);
    FUN_012d0dc8(PTR_DAT_0575ecf8);
    FUN_012d0dc8(PTR_DAT_057658e0);
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
    FUN_012d0dc8(PTR_DAT_057cce78);
    FUN_012d0dc8(PTR_DAT_05764cb8);
    FUN_012d0dc8(PTR_DAT_057a54b8);
    bRam0000000005c30905 = 1;
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
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar10 == 0) ||
     (System_Collections_Generic_Dictionary_Int32Enum__int____ctor_36cd93c
                (lVar10,*(undefined8 *)PTR_DAT_0580d580), puVar6 = PTR_DAT_057d5058,
     puVar5 = PTR_DAT_05787ef0, puVar4 = PTR_DAT_05783760, puVar3 = PTR_DAT_05766e18,
     puVar2 = PTR_DAT_0575ecf8, param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_d8,param_2,*(undefined8 *)PTR_DAT_057a54b8);
  uStack_78 = uStack_d0;
  uStack_80 = uStack_d8;
  plStack_70 = plStack_c8;
  do {
    uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                       (&uStack_80,*(undefined8 *)PTR_DAT_0579f218);
    plVar7 = plStack_70;
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)PTR_DAT_057d4600);
      return lVar10;
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
    while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_a0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
      if (plStack_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar17 = plStack_90[4];
      if (lVar17 != 0) {
        uVar18 = *(undefined8 *)puVar3;
        plVar12 = (long *)thunk_FUN_01320d5c(lVar17,uVar18);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar17,uVar18);
        }
        lVar14 = *plVar12;
        lVar17 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar17) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_030629fc;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_0131971c(plVar12,lVar17,0);
LAB_030629fc:
        uVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        lVar17 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAndColorId_2f62dbc
                           (param_1,uVar8);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar8 = *(undefined4 *)(lVar17 + 0x70);
        uVar11 = System_Collections_Generic_Dictionary_Int32Enum__int___TryAdd_36cfb80
                           (lVar10,uVar8,1,*(undefined8 *)puVar5);
        if ((uVar11 & 1) == 0) {
          iVar9 = System_Collections_Generic_Dictionary_Int32Enum__int___get_Item_36ce2fc
                            (lVar10,uVar8,*(undefined8 *)puVar4);
          System_Collections_Generic_Dictionary_Int32Enum__int___set_Item_36ce394
                    (lVar10,uVar8,iVar9 + 1,*(undefined8 *)puVar2);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_a0,*(undefined8 *)PTR_DAT_05784db8);
    if (plVar7[5] != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_d8,plVar7[5],*(undefined8 *)PTR_DAT_05764cb8);
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      plStack_b0 = plStack_c8;
      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_c0,*(undefined8 *)PTR_DAT_057ec8f0), (uVar11 & 1) != 0) {
        if (plStack_b0 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_05760650 + 300);
          if ((bVar1 <= *(byte *)(*plStack_b0 + 300)) &&
             (*(long *)(*(long *)(*plStack_b0 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_05760650)) {
            lVar17 = plStack_b0[3];
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
              uVar11 = 0;
              uVar15 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
              do {
                if (uVar15 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef8();
                }
                lVar14 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAndColorId_2f62dbc
                                   (param_1,*(undefined4 *)(lVar17 + 0x20 + uVar11 * 4));
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                uVar8 = *(undefined4 *)(lVar14 + 0x70);
                uVar15 = System_Collections_Generic_Dictionary_Int32Enum__int___TryAdd_36cfb80
                                   (lVar10,uVar8,1,*(undefined8 *)puVar5);
                if ((uVar15 & 1) == 0) {
                  iVar9 = System_Collections_Generic_Dictionary_Int32Enum__int___get_Item_36ce2fc
                                    (lVar10,uVar8,*(undefined8 *)puVar4);
                  System_Collections_Generic_Dictionary_Int32Enum__int___set_Item_36ce394
                            (lVar10,uVar8,iVar9 + 1,*(undefined8 *)puVar2);
                }
                uVar15 = (ulong)*(uint *)(lVar17 + 0x18);
                uVar11 = uVar11 + 1;
              } while ((long)uVar11 < (long)(int)*(uint *)(lVar17 + 0x18));
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_c0,*(undefined8 *)PTR_DAT_057bc520);
    }
  } while( true );
}

