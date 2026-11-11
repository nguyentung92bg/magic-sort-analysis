/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.PillowViewAnimationConfig$$GetPillowOffsetForBottleCountInRow
Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowPositionValues_o Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowViewAnimationConfig__GetPillowOffsetForBottleCountInRow (Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowViewAnimationConfig_o* __this, int32_t highestBottleCountInRow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.MagicBottle.Scripts.PillowViewAnimationConfig$$GetPillowOffsetForBottleCountInRow
   Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowPositionValues_o
   Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowViewAnimationConfig__GetPillowOffsetForBottleCountInRow
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowViewAnimationConfig_o* __this, int32_t
   highestBottleCountInRow, const MethodInfo* method); */

void Modules_Contexts_GamePlay_MagicBottle_Scripts_PillowViewAnimationConfig__GetPillowOffsetForBottleCountInRow_214c3ec
               (int *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000005c29b57 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05794f10);
    FUN_012d0dc8(PTR_DAT_057a4408);
    FUN_012d0dc8(PTR_DAT_057700d0);
    FUN_012d0dc8(PTR_DAT_057da7d8);
    FUN_012d0dc8(PTR_DAT_057cff08);
    FUN_012d0dc8(PTR_DAT_05772510);
    FUN_012d0dc8(PTR_DAT_0580c568);
    FUN_012d0dc8(PTR_DAT_05764dc0);
    FUN_012d0dc8(PTR_DAT_0576ffe0);
    FUN_012d0dc8(PTR_DAT_05777b78);
    bRam0000000005c29b57 = 1;
  }
  puVar7 = PTR_DAT_0580c568;
  puVar6 = PTR_DAT_057a4408;
  puVar5 = PTR_DAT_05794f10;
  puVar4 = PTR_DAT_05777b78;
  puVar3 = PTR_DAT_05772510;
  puVar2 = PTR_DAT_0576ffe0;
  puVar1 = PTR_DAT_05764dc0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_d0 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  iStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  if (*(long *)(param_2 + 0xa0) == 0) goto LAB_0224c74c;
  System_Collections_Generic_List_PillowPositionValues___GetEnumerator_2203384
            (&uStack_100,*(long *)(param_2 + 0xa0),*(undefined8 *)PTR_DAT_057cff08);
  uStack_88 = CONCAT44(uStack_f4,uStack_f8);
  uStack_90 = uStack_100;
  uStack_78 = uStack_e8;
  uStack_74 = uStack_e4;
  iStack_80 = iStack_f0;
  uStack_7c = uStack_ec;
  uStack_68 = (undefined4)uStack_d8;
  uStack_64 = (undefined4)((ulong)uStack_d8 >> 0x20);
  uStack_70 = (undefined4)uStack_e0;
  uStack_6c = (undefined4)((ulong)uStack_e0 >> 0x20);
                    /* try { // try from 0224c530 to 0234c583 has its CatchHandler @ 0224c530
                       catch() { ... } // from try @ 0224c530 with catch @ 0224c530
                       catch() { ... } // from try @ 0224c5e8 with catch @ 0224c530
                       catch() { ... } // from try @ 0224c618 with catch @ 0224c530
                       catch() { ... } // from try @ 0224c694 with catch @ 0224c530 */
  while (uVar8 = System_Collections_Generic_List_Enumerator_PillowPositionValues___MoveNext_3eaa258
                           (&uStack_90,*(undefined8 *)puVar6), (uVar8 & 1) != 0) {
    uStack_a8 = CONCAT44(uStack_70,uStack_74);
    uStack_b0 = CONCAT44(uStack_78,uStack_7c);
    uStack_a0 = CONCAT44(uStack_68,uStack_6c);
    if (iStack_80 == param_3) {
      System_Collections_Generic_List_Enumerator_PillowPositionValues___Dispose_3eaa254
                (&uStack_90,*(undefined8 *)puVar5);
      *param_1 = param_3;
      *(undefined8 *)(param_1 + 5) = uStack_a0;
      *(undefined8 *)(param_1 + 3) = uStack_a8;
      *(undefined8 *)(param_1 + 1) = uStack_b0;
      return;
    }
  }
                    /* try { // try from 0224c584 to 0234c5e7 has its CatchHandler @ 0224c5e8 */
  System_Collections_Generic_List_Enumerator_PillowPositionValues___Dispose_3eaa254
            (&uStack_90,*(undefined8 *)puVar5);
  if (param_3 < 8) {
    lVar9 = *(long *)puVar4;
    lVar11 = *(long *)(param_2 + 0xa0);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar9 = *(long *)puVar4;
    }
    if (param_3 < 3) {
      lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
      if (lVar12 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar9 = *(long *)puVar4;
        }
        uVar13 = **(undefined8 **)(lVar9 + 0xb8);
        lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if (lVar12 == 0) goto LAB_0224c74c;
                    /* try { // try from 0224c67c to 0234c68b has its CatchHandler @ 0224c68c */
        System_Predicate_PillowPositionValues____ctor_30fd194(lVar12,uVar13,*(undefined8 *)puVar1,0)
        ;
                    /* catch() { ... } // from try @ 0224c600 with catch @ 0224c68c
                       catch() { ... } // from try @ 0224c67c with catch @ 0224c68c */
        plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        *plVar10 = lVar12;
                    /* try { // try from 0224c690 to 0234c693 has its CatchHandler @ 0224c69c */
LAB_0224c6e4:
        FUN_012d0d74(plVar10,lVar12);
      }
    }
    else {
                    /* try { // try from 0224c694 to 0234c69f has its CatchHandler @ 0224c530 */
      lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
      if (lVar12 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0224c690 with catch @ 0224c69c
                        */
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar9 = *(long *)puVar4;
        }
        uVar13 = **(undefined8 **)(lVar9 + 0xb8);
        lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if (lVar12 == 0) goto LAB_0224c74c;
        System_Predicate_PillowPositionValues____ctor_30fd194(lVar12,uVar13,*(undefined8 *)puVar2,0)
        ;
        plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
        *plVar10 = lVar12;
        goto LAB_0224c6e4;
      }
    }
  }
  else {
    lVar9 = *(long *)puVar4;
    lVar11 = *(long *)(param_2 + 0xa0);
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar9 = *(long *)puVar4;
    }
    lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar9 = *(long *)puVar4;
      }
      uVar13 = **(undefined8 **)(lVar9 + 0xb8);
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if (lVar12 == 0) goto LAB_0224c74c;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0224c584 with catch @ 0224c5e8
                       try { // try from 0224c5e8 to 0234c5ff has its CatchHandler @ 0224c530 */
      System_Predicate_PillowPositionValues____ctor_30fd194(lVar12,uVar13,*(undefined8 *)puVar7,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
      *plVar10 = lVar12;
      FUN_012d0d74(plVar10,lVar12);
    }
  }
  if (lVar11 != 0) {
    System_Collections_Generic_List_PillowPositionValues___Find_2202d88
              (&uStack_100,lVar11,lVar12,*(undefined8 *)PTR_DAT_057da7d8);
    *(ulong *)(param_1 + 5) = CONCAT44(uStack_e8,uStack_ec);
    *(ulong *)(param_1 + 3) = CONCAT44(iStack_f0,uStack_f4);
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_f4,uStack_f8);
    *(undefined8 *)param_1 = uStack_100;
    return;
  }
LAB_0224c74c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

