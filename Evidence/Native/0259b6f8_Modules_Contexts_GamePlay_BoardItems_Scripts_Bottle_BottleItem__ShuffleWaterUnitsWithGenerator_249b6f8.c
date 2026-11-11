/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ShuffleWaterUnitsWithGenerator
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShuffleWaterUnitsWithGenerator (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ShuffleWaterUnitsWithGenerator
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShuffleWaterUnitsWithGenerator
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ShuffleWaterUnitsWithGenerator_249b6f8
               (undefined8 param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar5 = PTR_DAT_057c3630;
  if ((bRam0000000005c2b307 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bed10);
    FUN_012d0dc8(PTR_DAT_05784cf0);
    FUN_012d0dc8(PTR_DAT_0577b6a0);
    FUN_012d0dc8(PTR_DAT_0581bf48);
    FUN_012d0dc8(PTR_DAT_058163e0);
    FUN_012d0dc8(PTR_DAT_05770628);
    FUN_012d0dc8(PTR_DAT_0580dde8);
    FUN_012d0dc8(PTR_DAT_0580e8a8);
    FUN_012d0dc8(PTR_DAT_05763ec8);
    FUN_012d0dc8(PTR_DAT_05815a38);
    FUN_012d0dc8(PTR_DAT_058089c8);
    FUN_012d0dc8(PTR_DAT_057c19f8);
    FUN_012d0dc8(PTR_DAT_057633b0);
    FUN_012d0dc8(PTR_DAT_057df258);
    FUN_012d0dc8(PTR_DAT_058167f0);
    FUN_012d0dc8(PTR_DAT_057cbfe8);
    FUN_012d0dc8(PTR_DAT_057c3630);
    FUN_012d0dc8(PTR_DAT_057fd328);
    FUN_012d0dc8(PTR_DAT_057bba70);
    FUN_012d0dc8(PTR_DAT_05784af8);
    FUN_012d0dc8(PTR_DAT_05818d58);
    FUN_012d0dc8(PTR_DAT_057cc568);
    bRam0000000005c2b307 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  lVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersInside_2498734
                     (param_1);
  lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  if ((lVar11 != 0) &&
     (System_Collections_Generic_List_object____ctor_21fc1fc(lVar11,*(undefined8 *)PTR_DAT_058167f0)
     , puVar8 = PTR_DAT_0580dde8, puVar7 = PTR_DAT_058089c8, puVar5 = PTR_DAT_057cc568, lVar10 != 0)
     ) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_98,lVar10,*(undefined8 *)PTR_DAT_057c19f8);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_80,*(undefined8 *)puVar8), lVar17 = lStack_70,
          puVar6 = PTR_DAT_05770628, (uVar12 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (0 < *(int *)(lStack_70 + 0x1c)) {
        iVar20 = 0;
        do {
          uVar1 = *(undefined4 *)(lVar17 + 0x18);
          cVar2 = *(char *)(lVar17 + 0x20);
          cVar3 = *(char *)(lVar17 + 0x21);
          lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterAndColor___ctor_22f9dbc
                    (lVar13,0,uVar1,1,cVar2 != '\0',cVar3 != '\0',0);
          lVar16 = *(long *)(lVar11 + 0x10);
          lVar18 = *(long *)puVar7;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar4 = *(uint *)(lVar11 + 0x18);
          if (uVar4 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar4 + 1;
            plVar14 = (long *)(lVar16 + (long)(int)uVar4 * 8 + 0x20);
            *plVar14 = lVar13;
            FUN_012d0d74(plVar14,lVar13);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar11,lVar13);
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < *(int *)(lVar17 + 0x1c));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)PTR_DAT_05770628);
    puVar9 = PTR_DAT_05818d58;
    puVar7 = PTR_DAT_058163e0;
    puVar5 = PTR_DAT_0577b6a0;
    uVar15 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersOutside_249c450
                       (param_1);
    uVar15 = System_Linq_Enumerable__Concat_object__241d48c
                       (lVar11,uVar15,*(undefined8 *)PTR_DAT_057bed10);
    uVar15 = System_Linq_Enumerable__ToList_object__242f814(uVar15,*(undefined8 *)puVar7);
    lVar17 = *(long *)puVar9;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar17);
      lVar17 = *(long *)puVar9;
    }
    lVar13 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x40);
    if (lVar13 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar17);
        lVar17 = *(long *)puVar9;
      }
      uVar19 = **(undefined8 **)(lVar17 + 0xb8);
      lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05815a38);
      if (lVar13 == 0) goto LAB_0259bcf0;
      System_Func_object__int____ctor_3381cbc(lVar13,uVar19,*(undefined8 *)PTR_DAT_057fd328,0);
      plVar14 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x40);
      *plVar14 = lVar13;
      FUN_012d0d74(plVar14,lVar13);
    }
    uVar19 = System_Linq_Enumerable__OrderBy_object__int__242376c
                       (uVar15,lVar13,*(undefined8 *)PTR_DAT_05784cf0);
    lVar17 = System_Linq_Enumerable__ToList_object__242f814(uVar19,*(undefined8 *)puVar7);
    lVar13 = *(long *)puVar9;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar13);
      lVar13 = *(long *)puVar9;
    }
    lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x48);
    if (lVar16 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar13);
        lVar13 = *(long *)puVar9;
      }
      uVar19 = **(undefined8 **)(lVar13 + 0xb8);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05763ec8);
      if (lVar16 == 0) goto LAB_0259bcf0;
      System_Func_object__Int32Enum____ctor_3381e0c(lVar16,uVar19,*(undefined8 *)PTR_DAT_057bba70,0)
      ;
      plVar14 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x48);
      *plVar14 = lVar16;
      FUN_012d0d74(plVar14,lVar16);
    }
    uVar19 = System_Linq_Enumerable__Select_object__Int32Enum__2427ac8
                       (lVar17,lVar16,*(undefined8 *)puVar5);
    lVar13 = *(long *)puVar9;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar13);
      lVar13 = *(long *)puVar9;
    }
    lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x50);
    if (lVar16 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar13);
        lVar13 = *(long *)puVar9;
      }
      uVar21 = **(undefined8 **)(lVar13 + 0xb8);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05763ec8);
      if (lVar16 == 0) goto LAB_0259bcf0;
      System_Func_object__Int32Enum____ctor_3381e0c(lVar16,uVar21,*(undefined8 *)PTR_DAT_05784af8,0)
      ;
      plVar14 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x50);
      *plVar14 = lVar16;
      FUN_012d0d74(plVar14,lVar16);
    }
    uVar15 = System_Linq_Enumerable__Select_object__Int32Enum__2427ac8
                       (uVar15,lVar16,*(undefined8 *)puVar5);
    uVar12 = System_Linq_Enumerable__SequenceEqual_Int32Enum__2429668
                       (uVar19,uVar15,*(undefined8 *)PTR_DAT_0581bf48);
    if ((uVar12 & 1) == 0) {
      if (lVar17 != 0) goto LAB_0259bc0c;
    }
    else if (lVar17 != 0) {
      System_Collections_Generic_List_object___Reverse_21fe478
                (lVar17,*(undefined8 *)PTR_DAT_057df258);
LAB_0259bc0c:
      puVar5 = PTR_DAT_057633b0;
      uVar15 = System_Collections_Generic_List_object___GetRange_21fd6b8
                         (lVar17,0,*(undefined4 *)(lVar11 + 0x18),*(undefined8 *)PTR_DAT_057633b0);
      uVar19 = System_Collections_Generic_List_object___GetRange_21fd6b8
                         (lVar17,*(int *)(lVar11 + 0x18),
                          *(int *)(lVar17 + 0x18) - *(int *)(lVar11 + 0x18),*(undefined8 *)puVar5);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleData_249c40c
                (param_1,uVar15,uVar19,0);
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_98,lVar10,*(undefined8 *)PTR_DAT_057c19f8);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      while( true ) {
        uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_80,*(undefined8 *)puVar8);
        if ((uVar12 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)puVar6);
          return;
        }
        if (lStack_70 == 0) break;
        if (*(long *)(lStack_70 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98
                  (*(long *)(lStack_70 + 0x10),0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_0259bcf0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

