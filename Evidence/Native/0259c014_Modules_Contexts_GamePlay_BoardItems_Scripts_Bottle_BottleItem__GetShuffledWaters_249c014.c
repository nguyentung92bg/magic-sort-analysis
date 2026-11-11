/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetShuffledWaters
System_ValueTuple_List_WaterAndColor___List_WaterAndColor___o Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetShuffledWaters (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetShuffledWaters
   System_ValueTuple_List_WaterAndColor___List_WaterAndColor___o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetShuffledWaters
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetShuffledWaters_249c014
          (undefined8 param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000005c2b308 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05784cf0);
    FUN_012d0dc8(PTR_DAT_058163e0);
    FUN_012d0dc8(PTR_DAT_05815a38);
    FUN_012d0dc8(PTR_DAT_05763f30);
    FUN_012d0dc8(PTR_DAT_058089c8);
    FUN_012d0dc8(PTR_DAT_057df258);
    FUN_012d0dc8(PTR_DAT_058167f0);
    FUN_012d0dc8(PTR_DAT_057cbfe8);
    FUN_012d0dc8(PTR_DAT_057c7498);
    FUN_012d0dc8(PTR_DAT_057c3630);
    FUN_012d0dc8(PTR_DAT_057c8fa8);
    FUN_012d0dc8(PTR_DAT_05818d58);
    FUN_012d0dc8(PTR_DAT_0578b110);
    bRam0000000005c2b308 = 1;
  }
  lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersInside_2498734
                    (param_1);
  puVar5 = PTR_DAT_057c3630;
  if (lVar8 == 0) goto LAB_0259c408;
  iVar14 = *(int *)(lVar8 + 0x18);
  uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersOutside_249c450
                    (param_1);
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar6 = PTR_DAT_05818d58;
  puVar7 = PTR_DAT_058167f0;
  puVar4 = PTR_DAT_05763f30;
  if (lVar10 == 0) goto LAB_0259c408;
  System_Collections_Generic_List_object____ctor_21fc1fc(lVar10,*(undefined8 *)PTR_DAT_058167f0);
  System_Collections_Generic_List_object___AddRange_21fcc58(lVar10,lVar8,*(undefined8 *)puVar4);
  System_Collections_Generic_List_object___AddRange_21fcc58(lVar10,uVar9,*(undefined8 *)puVar4);
  lVar8 = *(long *)puVar6;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar8 = *(long *)puVar6;
  }
  puVar4 = PTR_DAT_05815a38;
  lVar15 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x58);
  if (lVar15 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar8 = *(long *)puVar6;
    }
    uVar9 = **(undefined8 **)(lVar8 + 0xb8);
    lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar15 == 0) goto LAB_0259c408;
    System_Func_object__int____ctor_3381cbc(lVar15,uVar9,*(undefined8 *)PTR_DAT_057c8fa8,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x58);
    *plVar11 = lVar15;
    FUN_012d0d74(plVar11,lVar15);
  }
  puVar6 = PTR_DAT_058163e0;
  puVar4 = PTR_DAT_057c7498;
  uVar9 = System_Linq_Enumerable__OrderBy_object__int__242376c
                    (lVar10,lVar15,*(undefined8 *)PTR_DAT_05784cf0);
  lVar8 = System_Linq_Enumerable__ToList_object__242f814(uVar9,*(undefined8 *)puVar6);
  if (*(int *)(lVar10 + 0x18) < 1) {
    if (lVar8 == 0) goto LAB_0259c408;
LAB_0259c270:
    System_Collections_Generic_List_object___Reverse_21fe478(lVar8,*(undefined8 *)PTR_DAT_057df258);
  }
  else {
    iVar16 = 0;
    bVar3 = true;
    do {
      lVar15 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (lVar10,iVar16,*(undefined8 *)puVar4);
      if (lVar8 == 0) goto LAB_0259c408;
      lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (lVar8,iVar16,*(undefined8 *)puVar4);
      iVar16 = iVar16 + 1;
      bVar3 = (bool)(bVar3 & lVar15 == lVar12);
    } while (iVar16 < *(int *)(lVar10 + 0x18));
    if (bVar3) goto LAB_0259c270;
  }
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar6 = PTR_DAT_058089c8;
  if (lVar10 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar10,*(undefined8 *)puVar7);
    if (0 < iVar14) {
      iVar16 = 0;
      do {
        uVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar8,iVar16,*(undefined8 *)puVar4);
        lVar15 = *(long *)(lVar10 + 0x10);
        lVar12 = *(long *)puVar6;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_0259c408;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))(lVar10);
        }
        iVar16 = iVar16 + 1;
      } while (iVar14 != iVar16);
    }
    lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if ((lVar15 != 0) &&
       (System_Collections_Generic_List_object____ctor_21fc1fc(lVar15,*(undefined8 *)puVar7),
       lVar8 != 0)) {
      iVar16 = *(int *)(lVar8 + 0x18);
      while( true ) {
        if (iVar16 <= iVar14) {
          uStack_60 = 0;
          uStack_58 = 0;
          System_ValueTuple_object__object____ctor_2b92f7c
                    (&uStack_60,lVar10,lVar15,*(undefined8 *)PTR_DAT_0578b110);
          auVar2._8_8_ = uStack_58;
          auVar2._0_8_ = uStack_60;
          return auVar2;
        }
        uVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar8,iVar14,*(undefined8 *)puVar4);
        lVar12 = *(long *)(lVar15 + 0x10);
        lVar13 = *(long *)puVar6;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar12 == 0) break;
        uVar1 = *(uint *)(lVar15 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))(lVar15);
        }
        iVar16 = *(int *)(lVar8 + 0x18);
        iVar14 = iVar14 + 1;
      }
    }
  }
LAB_0259c408:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

