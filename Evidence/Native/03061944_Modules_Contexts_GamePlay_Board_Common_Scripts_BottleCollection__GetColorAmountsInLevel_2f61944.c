/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetColorAmountsInLevel
System_Collections_Generic_Dictionary_ColorId__int__o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAmountsInLevel (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, System_Collections_Generic_List_BottleItemModel__o* bottleModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03061e5c) */
/* WARNING: Removing unreachable block (ram,0x03061c74) */
/* WARNING: Removing unreachable block (ram,0x03061fa0) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetColorAmountsInLevel
   System_Collections_Generic_Dictionary_ColorId__int__o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAmountsInLevel
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   System_Collections_Generic_List_BottleItemModel__o* bottleModels, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAmountsInLevel_2f61944
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
  byte bVar16;
  int *piVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
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
  if ((bRam0000000005c30903 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057882a8);
    FUN_012d0dc8(PTR_DAT_0578a150);
    FUN_012d0dc8(PTR_DAT_0580d580);
    FUN_012d0dc8(PTR_DAT_05783760);
    FUN_012d0dc8(PTR_DAT_0575ecf8);
    FUN_012d0dc8(PTR_DAT_057658e0);
                    /* try { // try from 030619c8 to 031619cb has its CatchHandler @ 03061f08 */
    FUN_012d0dc8(PTR_DAT_057bc520);
    FUN_012d0dc8(PTR_DAT_057d4600);
                    /* try { // try from 030619e0 to 031619f7 has its CatchHandler @ 03061f20 */
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
                    /* try { // try from 03061a54 to 03161a5b has its CatchHandler @ 03061f1c */
    FUN_012d0dc8(PTR_DAT_05764cb8);
    FUN_012d0dc8(PTR_DAT_057a54b8);
    FUN_012d0dc8(PTR_DAT_057767b8);
    bRam0000000005c30903 = 1;
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
                (lVar10,*(undefined8 *)PTR_DAT_0580d580), puVar6 = PTR_DAT_057ec8f0,
     puVar5 = PTR_DAT_057d5058, puVar4 = PTR_DAT_0578a150, puVar3 = PTR_DAT_057882a8,
     puVar2 = PTR_DAT_05766e18, param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 03061ac8 to 03161ad3 has its CatchHandler @ 03061f18 */
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
                    /* catch() { ... } // from try @ 030619c8 with catch @ 03061f08 */
                    /* catch() { ... } // from try @ 03061e20 with catch @ 03061f0c
                       catch() { ... } // from try @ 03061ed4 with catch @ 03061f0c */
                    /* catch() { ... } // from try @ 03061db0 with catch @ 03061f10
                       catch() { ... } // from try @ 03061ecc with catch @ 03061f10 */
                    /* catch() { ... } // from try @ 03061b38 with catch @ 03061f14
                       catch() { ... } // from try @ 03061ea0 with catch @ 03061f14 */
                    /* catch() { ... } // from try @ 03061ac8 with catch @ 03061f18
                       catch() { ... } // from try @ 03061e98 with catch @ 03061f18 */
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)PTR_DAT_057d4600);
                    /* catch() { ... } // from try @ 03061a54 with catch @ 03061f1c
                       catch() { ... } // from try @ 03061e8c with catch @ 03061f1c */
                    /* catch() { ... } // from try @ 030619e0 with catch @ 03061f20 */
                    /* catch() { ... } // from try @ 03061cbc with catch @ 03061f24
                       catch() { ... } // from try @ 03061ec0 with catch @ 03061f24 */
                    /* catch() { ... } // from try @ 03061c0c with catch @ 03061f28
                       catch() { ... } // from try @ 03061eb4 with catch @ 03061f28 */
                    /* catch() { ... } // from try @ 03061b60 with catch @ 03061f2c
                       catch() { ... } // from try @ 03061ea8 with catch @ 03061f2c */
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
                    /* try { // try from 03061b38 to 03161b43 has its CatchHandler @ 03061f14 */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_d8,plStack_70[4],*(undefined8 *)PTR_DAT_057cce78);
    uStack_98 = uStack_d0;
    uStack_a0 = uStack_d8;
    plStack_90 = plStack_c8;
                    /* try { // try from 03061b60 to 03161bef has its CatchHandler @ 03061f2c */
    while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_a0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
      if (plStack_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar18 = plStack_90[4];
      if (lVar18 != 0) {
        uVar19 = *(undefined8 *)puVar2;
        plVar12 = (long *)thunk_FUN_01320d5c(lVar18,uVar19);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar18,uVar19);
        }
        lVar14 = *plVar12;
        lVar18 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar11 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar18) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03061bd8;
            }
            uVar11 = uVar11 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_0131971c(plVar12,lVar18,0);
LAB_03061bd8:
        uVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        uVar11 = System_Collections_Generic_Dictionary_Int32Enum__int___ContainsKey_36ce5a4
                           (lVar10,uVar8,*(undefined8 *)puVar4);
        if ((uVar11 & 1) == 0) {
          System_Collections_Generic_Dictionary_Int32Enum__int___Add_36ce3ac
                    (lVar10,uVar8,1,*(undefined8 *)puVar3);
        }
        else {
                    /* try { // try from 03061c0c to 03161c9b has its CatchHandler @ 03061f28 */
          iVar9 = System_Collections_Generic_Dictionary_Int32Enum__int___get_Item_36ce2fc
                            (lVar10,uVar8,*(undefined8 *)PTR_DAT_05783760);
          System_Collections_Generic_Dictionary_Int32Enum__int___set_Item_36ce394
                    (lVar10,uVar8,iVar9 + 1,*(undefined8 *)PTR_DAT_0575ecf8);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_a0,*(undefined8 *)PTR_DAT_05784db8);
    plVar20 = (long *)PTR_DAT_057767b8;
    plVar12 = (long *)PTR_DAT_05760650;
    if (plVar7[5] != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_d8,plVar7[5],*(undefined8 *)PTR_DAT_05764cb8);
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      plStack_b0 = plStack_c8;
                    /* try { // try from 03061cbc to 03161d4b has its CatchHandler @ 03061f24 */
      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_c0,*(undefined8 *)puVar6), plVar7 = plStack_b0,
            (uVar11 & 1) != 0) {
        if (plStack_b0 != (long *)0x0) {
          lVar18 = *plStack_b0;
          bVar16 = *(byte *)(lVar18 + 300);
          bVar1 = *(byte *)(*plVar12 + 300);
          if ((bVar1 <= bVar16) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *plVar12)) {
            lVar18 = plStack_b0[3];
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (0 < (int)*(ulong *)(lVar18 + 0x18)) {
              uVar11 = 0;
              uVar15 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
              do {
                if (uVar15 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef8();
                }
                uVar8 = *(undefined4 *)(lVar18 + 0x20 + uVar11 * 4);
                uVar15 = System_Collections_Generic_Dictionary_Int32Enum__int___ContainsKey_36ce5a4
                                   (lVar10,uVar8,*(undefined8 *)puVar4);
                if ((uVar15 & 1) == 0) {
                  System_Collections_Generic_Dictionary_Int32Enum__int___Add_36ce3ac
                            (lVar10,uVar8,1,*(undefined8 *)puVar3);
                }
                else {
                  iVar9 = System_Collections_Generic_Dictionary_Int32Enum__int___get_Item_36ce2fc
                                    (lVar10,uVar8,*(undefined8 *)PTR_DAT_05783760);
                  System_Collections_Generic_Dictionary_Int32Enum__int___set_Item_36ce394
                            (lVar10,uVar8,iVar9 + 1,*(undefined8 *)PTR_DAT_0575ecf8);
                }
                uVar15 = (ulong)*(uint *)(lVar18 + 0x18);
                uVar11 = uVar11 + 1;
              } while ((long)uVar11 < (long)(int)*(uint *)(lVar18 + 0x18));
            }
            lVar18 = *plVar7;
            bVar16 = *(byte *)(lVar18 + 300);
                    /* try { // try from 03061db0 to 03161db7 has its CatchHandler @ 03061f10 */
            plVar12 = (long *)PTR_DAT_05760650;
            plVar20 = (long *)PTR_DAT_057767b8;
          }
          bVar1 = *(byte *)(*plVar20 + 300);
          if ((bVar1 <= bVar16) &&
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) == *plVar20)) {
            uVar8 = *(undefined4 *)((long)plVar7 + 0x14);
            uVar11 = System_Collections_Generic_Dictionary_Int32Enum__int___ContainsKey_36ce5a4
                               (lVar10,uVar8,*(undefined8 *)puVar4);
            if ((uVar11 & 1) == 0) {
                    /* try { // try from 03061e28 to 03161e87 has its CatchHandler @ 03061684 */
              System_Collections_Generic_Dictionary_Int32Enum__int___Add_36ce3ac
                        (lVar10,uVar8,1,*(undefined8 *)puVar3);
            }
            else {
              iVar9 = System_Collections_Generic_Dictionary_Int32Enum__int___get_Item_36ce2fc
                                (lVar10,uVar8,*(undefined8 *)PTR_DAT_05783760);
                    /* try { // try from 03061e20 to 03161e27 has its CatchHandler @ 03061f0c */
              System_Collections_Generic_Dictionary_Int32Enum__int___set_Item_36ce394
                        (lVar10,uVar8,iVar9 + 1,*(undefined8 *)PTR_DAT_0575ecf8);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_c0,*(undefined8 *)PTR_DAT_057bc520);
    }
  } while( true );
}

