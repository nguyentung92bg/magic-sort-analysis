/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$SortBottleModels
System_Collections_Generic_List_List_BottleItemModel___o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__SortBottleModels (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, System_Collections_Generic_List_BottleItemModel__o* bottleModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$SortBottleModels
   System_Collections_Generic_List_List_BottleItemModel___o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__SortBottleModels
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   System_Collections_Generic_List_BottleItemModel__o* bottleModels, const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__SortBottleModels_37ae454
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  
  puVar3 = PTR_DAT_0580f750;
  if ((bRam0000000005c33e49 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bfe28);
    FUN_012d0dc8(PTR_DAT_05784108);
    FUN_012d0dc8(PTR_DAT_05761ab0);
    FUN_012d0dc8(PTR_DAT_05803db8);
    FUN_012d0dc8(PTR_DAT_0581b760);
    FUN_012d0dc8(PTR_DAT_057a1dd8);
    FUN_012d0dc8(PTR_DAT_057ed5c0);
    FUN_012d0dc8(PTR_DAT_057c6978);
    FUN_012d0dc8(PTR_DAT_057f4b38);
    FUN_012d0dc8(PTR_DAT_0580cb08);
    FUN_012d0dc8(PTR_DAT_05759ac0);
    FUN_012d0dc8(PTR_DAT_05804ea8);
    FUN_012d0dc8(PTR_DAT_05813970);
    FUN_012d0dc8(PTR_DAT_05789908);
    FUN_012d0dc8(PTR_DAT_0577eec8);
    FUN_012d0dc8(PTR_DAT_05774d20);
    FUN_012d0dc8(PTR_DAT_05766148);
    FUN_012d0dc8(PTR_DAT_0577e430);
    FUN_012d0dc8(PTR_DAT_057945b8);
    FUN_012d0dc8(PTR_DAT_057b87c8);
    FUN_012d0dc8(PTR_DAT_0580f750);
    FUN_012d0dc8(PTR_DAT_0579fd20);
    FUN_012d0dc8(PTR_DAT_057d4c98);
    FUN_012d0dc8(PTR_DAT_0581bd40);
    FUN_012d0dc8(PTR_DAT_05819998);
    FUN_012d0dc8(PTR_DAT_057c69c0);
    bRam0000000005c33e49 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    /* try { // try from 038ae5d8 to 039ae68b has its CatchHandler @ 038ae5d8
                       catch() { ... } // from try @ 038ae5d8 with catch @ 038ae5d8
                       catch() { ... } // from try @ 038ae6d4 with catch @ 038ae5d8
                       catch() { ... } // from try @ 038ae750 with catch @ 038ae5d8
                       catch() { ... } // from try @ 038ae7e0 with catch @ 038ae5d8 */
  if ((lVar8 != 0) &&
     (System_Collections_Generic_List_float____ctor_1d705b0(lVar8,*(undefined8 *)PTR_DAT_05789908),
     puVar2 = PTR_DAT_0580cb08, puVar6 = PTR_DAT_057ed5c0, puVar3 = PTR_DAT_0577e430, param_2 != 0))
  {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar16 = 0;
      do {
        lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_2,iVar16,*(undefined8 *)puVar3);
        if (lVar9 == 0) goto LAB_038aea2c;
        uVar19 = *(undefined4 *)(lVar9 + 0x18);
        uVar10 = System_Collections_Generic_List_float___Contains_1d71290
                           (uVar19,lVar8,*(undefined8 *)puVar2);
        if ((uVar10 & 1) == 0) {
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_038aea2c;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = uVar19;
          }
          else {
                    /* try { // try from 038ae68c to 039ae697 has its CatchHandler @ 038ae75c */
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))
                      (uVar19,lVar8);
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(param_2 + 0x18));
    }
    puVar6 = PTR_DAT_057c69c0;
                    /* try { // try from 038ae6b0 to 039ae6b3 has its CatchHandler @ 038ae758 */
    lVar9 = *(long *)PTR_DAT_057c69c0;
                    /* try { // try from 038ae6b4 to 039ae6d3 has its CatchHandler @ 038ae760 */
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar9 = *(long *)puVar6;
    }
    puVar2 = PTR_DAT_0581b760;
    lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar13 == 0) {
                    /* try { // try from 038ae6d4 to 039ae74b has its CatchHandler @ 038ae5d8 */
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar9 = *(long *)puVar6;
      }
      uVar17 = **(undefined8 **)(lVar9 + 0xb8);
      lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar13 == 0) goto LAB_038aea2c;
      System_Func_float__float____ctor_33837d0(lVar13,uVar17,*(undefined8 *)PTR_DAT_0581bd40,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
      *plVar11 = lVar13;
      FUN_012d0d74(plVar11,lVar13);
    }
    puVar4 = PTR_DAT_05803db8;
    puVar2 = PTR_DAT_0579fd20;
                    /* try { // try from 038ae74c to 039ae74f has its CatchHandler @ 038ae760 */
                    /* try { // try from 038ae750 to 039ae777 has its CatchHandler @ 038ae5d8 */
    uVar17 = System_Linq_Enumerable__OrderBy_float__float__242395c
                       (lVar8,lVar13,*(undefined8 *)PTR_DAT_05784108);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 038ae6b0 with catch @ 038ae758
                        */
    lVar8 = System_Linq_Enumerable__ToList_float__242f8a0(uVar17,*(undefined8 *)puVar4);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 038ae68c with catch @ 038ae75c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 038ae6b4 with catch @ 038ae760
                       catch(type#1 @ 054cbd58) { ... } // from try @ 038ae74c with catch @ 038ae760
                        */
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 038ae778 to 039ae77b has its CatchHandler @ 038ae7f4 */
    if ((lVar9 != 0) &&
       (System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar9,*(undefined8 *)PTR_DAT_05804ea8), puVar5 = PTR_DAT_05813970,
       puVar4 = PTR_DAT_057d4c98, puVar2 = PTR_DAT_057c6978, lVar8 != 0)) {
      if (0 < *(int *)(lVar8 + 0x18)) {
        iVar16 = 0;
        do {
          lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                    /* try { // try from 038ae7b8 to 039ae7df has its CatchHandler @ 038ae7fc */
          if (lVar13 == 0) goto LAB_038aea2c;
          System_Collections_Generic_List_object____ctor_21fc1fc(lVar13,*(undefined8 *)puVar5);
          lVar12 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_038aea2c;
                    /* try { // try from 038ae7e0 to 039ae7eb has its CatchHandler @ 038ae5d8 */
          uVar1 = *(uint *)(lVar9 + 0x18);
                    /* try { // try from 038ae7ec to 039ae7f3 has its CatchHandler @ 038ae7fc */
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    /* catch() { ... } // from try @ 038ae778 with catch @ 038ae7f4 */
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 038ae7b8 with catch @ 038ae7fc
                       catch(type#2 @ 00000000) { ... } // from try @ 038ae7ec with catch @ 038ae7fc
                        */
            plVar11 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar13;
                    /* try { // try from 038ae800 to 039af257 has its CatchHandler @ 038ae800
                       catch() { ... } // from try @ 038ae800 with catch @ 038ae800
                       catch() { ... } // from try @ 038af570 with catch @ 038ae800
                       catch() { ... } // from try @ 038af9c8 with catch @ 038ae800
                       catch() { ... } // from try @ 038afe70 with catch @ 038ae800
                       catch() { ... } // from try @ 038afea4 with catch @ 038ae800
                       catch() { ... } // from try @ 038b041c with catch @ 038ae800
                       catch() { ... } // from try @ 038b0450 with catch @ 038ae800
                       catch() { ... } // from try @ 038b0ab0 with catch @ 038ae800
                       catch() { ... } // from try @ 038b0ae4 with catch @ 038ae800
                       catch() { ... } // from try @ 038b0fbc with catch @ 038ae800
                       catch() { ... } // from try @ 038b1924 with catch @ 038ae800
                       catch() { ... } // from try @ 038b1a00 with catch @ 038ae800
                       catch() { ... } // from try @ 038b1a70 with catch @ 038ae800
                       catch() { ... } // from try @ 038b1df8 with catch @ 038ae800
                       catch() { ... } // from try @ 038b1e88 with catch @ 038ae800
                       catch() { ... } // from try @ 038b1ec4 with catch @ 038ae800
                       catch() { ... } // from try @ 038b1ef0 with catch @ 038ae800
                       catch() { ... } // from try @ 038b1f1c with catch @ 038ae800
                       catch() { ... } // from try @ 038b1f40 with catch @ 038ae800
                       catch() { ... } // from try @ 038b1f64 with catch @ 038ae800
                       catch() { ... } // from try @ 038b2330 with catch @ 038ae800
                       catch() { ... } // from try @ 038b2440 with catch @ 038ae800
                       catch() { ... } // from try @ 038b26c8 with catch @ 038ae800
                       catch() { ... } // from try @ 038b26f8 with catch @ 038ae800
                       catch() { ... } // from try @ 038b29d4 with catch @ 038ae800
                       catch() { ... } // from try @ 038b2b64 with catch @ 038ae800
                       catch() { ... } // from try @ 038b2cd8 with catch @ 038ae800
                       catch() { ... } // from try @ 038b2d50 with catch @ 038ae800
                       catch() { ... } // from try @ 038b2fd8 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3020 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3160 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3230 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3270 with catch @ 038ae800
                       catch() { ... } // from try @ 038b32bc with catch @ 038ae800
                       catch() { ... } // from try @ 038b33e0 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3438 with catch @ 038ae800
                       catch() { ... } // from try @ 038b34b8 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3504 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3530 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3584 with catch @ 038ae800
                       catch() { ... } // from try @ 038b359c with catch @ 038ae800
                       catch() { ... } // from try @ 038b35ec with catch @ 038ae800
                       catch() { ... } // from try @ 038b3610 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3664 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3688 with catch @ 038ae800
                       catch() { ... } // from try @ 038b36d8 with catch @ 038ae800
                       catch() { ... } // from try @ 038b36f0 with catch @ 038ae800
                       catch() { ... } // from try @ 038b3738 with catch @ 038ae800 */
            FUN_012d0d74(plVar11,lVar13);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar9,lVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(lVar8 + 0x18));
      }
      puVar5 = PTR_DAT_057f4b38;
      puVar4 = PTR_DAT_057945b8;
      puVar2 = PTR_DAT_05759ac0;
      if (0 < *(int *)(param_2 + 0x18)) {
        iVar16 = 0;
        do {
          lVar13 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (param_2,iVar16,*(undefined8 *)puVar3);
          if (lVar13 == 0) goto LAB_038aea2c;
          uVar19 = System_Collections_Generic_List_float___IndexOf_1d71bc0
                             (*(undefined4 *)(lVar13 + 0x18),lVar8,*(undefined8 *)puVar2);
          lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar9,uVar19,*(undefined8 *)puVar4);
          if (lVar12 == 0) goto LAB_038aea2c;
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar15 = *(long *)puVar5;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_038aea2c;
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar13;
            FUN_012d0d74(plVar11,lVar13);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar12,lVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(param_2 + 0x18));
      }
      puVar7 = PTR_DAT_05819998;
      puVar5 = PTR_DAT_057bfe28;
      puVar2 = PTR_DAT_057b87c8;
      puVar3 = PTR_DAT_05761ab0;
      if (0 < *(int *)(lVar9 + 0x18)) {
        iVar16 = 0;
        do {
          uVar17 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar9,iVar16,*(undefined8 *)puVar4);
          lVar8 = *(long *)puVar6;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_0130472c(lVar8);
            lVar8 = *(long *)puVar6;
          }
          lVar13 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
          if (lVar13 == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_0130472c(lVar8);
              lVar8 = *(long *)puVar6;
            }
            uVar18 = **(undefined8 **)(lVar8 + 0xb8);
            lVar13 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057a1dd8);
            if (lVar13 == 0) goto LAB_038aea2c;
            System_Func_object__float____ctor_338234c(lVar13,uVar18,*(undefined8 *)puVar7,0);
            plVar11 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
            *plVar11 = lVar13;
            FUN_012d0d74(plVar11,lVar13);
          }
          uVar17 = System_Linq_Enumerable__OrderBy_object__float__2423864
                             (uVar17,lVar13,*(undefined8 *)puVar5);
          uVar17 = System_Linq_Enumerable__ToList_object__242f814(uVar17,*(undefined8 *)puVar3);
          System_Collections_Generic_List_object___set_Item_21fc7c0
                    (lVar9,iVar16,uVar17,*(undefined8 *)puVar2);
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(lVar9 + 0x18));
      }
      return lVar9;
    }
  }
LAB_038aea2c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

