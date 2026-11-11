/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsSelectableAsTarget
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTarget (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsSelectableAsTarget
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTarget
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, int32_t
   waterColorId, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTarget_2498040
          (long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 02598058 to 0269805b has its CatchHandler @ 025985bc */
    uVar6 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                      (*(long *)(param_1 + 0x40),0);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
                    /* try { // try from 0259806c to 02698077 has its CatchHandler @ 025985b8 */
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar6 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                        (*(long *)(param_1 + 0xb0),0);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0xb8) != 0) {
        uVar6 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                          (*(long *)(param_1 + 0xb8),0);
                    /* try { // try from 0259809c to 026980c3 has its CatchHandler @ 02598538 */
        if (((uVar6 & 1) != 0) &&
           (uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                              (param_1), (uVar6 & 1) == 0)) {
          lVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                            (param_1);
          if ((lVar7 == 0) || (*(long *)(lVar7 + 0x58) == 0)) {
                    /* try { // try from 025980c8 to 026980d7 has its CatchHandler @ 02598534 */
            iVar11 = 0xc;
          }
          else {
            iVar11 = *(int *)(*(long *)(lVar7 + 0x58) + 0x70);
          }
          if (iVar11 != param_3) {
            return 0;
          }
        }
        puVar1 = PTR_DAT_058099e0;
        if ((bRam0000000005c2b2de & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057a89e8);
          FUN_012d0dc8(PTR_DAT_0579a910);
          FUN_012d0dc8(PTR_DAT_05774380);
          FUN_012d0dc8(PTR_DAT_05780fc0);
          FUN_012d0dc8(PTR_DAT_05802430);
          FUN_012d0dc8(PTR_DAT_057f2468);
          FUN_012d0dc8(PTR_DAT_05774b00);
          FUN_012d0dc8(PTR_DAT_058099e0);
          bRam0000000005c2b2de = 1;
        }
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar7 != 0) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem___c__DisplayClass82_0___ctor_22f9d7c
                    (lVar7,0);
          plVar13 = (long *)(lVar7 + 0x10);
          *plVar13 = param_2;
          FUN_012d0d74(plVar13,param_2);
          *(int *)(lVar7 + 0x18) = param_3;
          if ((*plVar13 != param_1) && (*(char *)(param_1 + 0x4c) == '\0')) {
            uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c
                              (param_1);
            if ((uVar6 & 1) == 0) {
              lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                (param_1);
              if ((lVar8 == 0) || (*(long *)(lVar8 + 0x58) == 0)) {
                iVar11 = 0xc;
              }
              else {
                iVar11 = *(int *)(*(long *)(lVar8 + 0x58) + 0x70);
              }
              if ((iVar11 != *(int *)(lVar7 + 0x18)) &&
                 (uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowRules__AllowsMismatchedPour_2745458
                                    (*plVar13,param_1,0), (uVar6 & 1) == 0)) {
                return 0;
              }
            }
            uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsFull_2498400
                              (param_1);
            puVar5 = PTR_DAT_05802430;
            puVar4 = PTR_DAT_057f2468;
            puVar3 = PTR_DAT_057a89e8;
            puVar2 = PTR_DAT_0579a910;
            puVar1 = PTR_DAT_05774b00;
            if ((uVar6 & 1) == 0) {
              lVar8 = *(long *)(param_1 + 0x88);
              if (lVar8 != 0) {
                iVar11 = 0;
                do {
                  if (*(int *)(lVar8 + 0x18) <= iVar11) {
                    uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                                      (param_1,5);
                    if ((uVar6 & 1) != 0) {
                      if (*(long *)(param_1 + 0xd0) == 0) break;
                      uVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasDifferentBottleWithClayAndSameColor_2f6b7d8
                                        (*(long *)(param_1 + 0xd0),*plVar13,param_1,0);
                      if ((uVar6 & 1) != 0) {
                        return 0;
                      }
                    }
                    uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                                      (param_1,5);
                    if ((uVar6 & 1) != 0) {
                      if (*(long *)(param_1 + 0xd0) == 0) break;
                      uVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasDifferentBottleWithIceAndSameColor_2f6b940
                                        (*(long *)(param_1 + 0xd0),*plVar13,param_1,0);
                      if ((uVar6 & 1) != 0) {
                        return 0;
                      }
                    }
                    lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                      (param_1);
                    lVar12 = *(long *)(param_1 + 0x80);
                    if (lVar12 != 0) {
                      iVar11 = *(int *)(lVar12 + 0x18) + -1;
                      if (iVar11 < 0) {
                        return 1;
                      }
                      goto LAB_02598320;
                    }
                    break;
                  }
                  plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                             (lVar8,iVar11,*(undefined8 *)puVar5);
                  if (plVar9 == (long *)0x0) break;
                  uVar6 = (**(code **)(*plVar9 + 0x1f8))
                                    (plVar9,*(undefined8 *)(lVar7 + 0x10),
                                     *(undefined4 *)(lVar7 + 0x18),*(undefined8 *)(*plVar9 + 0x200))
                  ;
                  if ((uVar6 & 1) == 0) {
                    return 0;
                  }
                  lVar8 = *(long *)(param_1 + 0x88);
                  iVar11 = iVar11 + 1;
                } while (lVar8 != 0);
              }
              goto LAB_025983fc;
            }
          }
          return 0;
        }
LAB_025983fc:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025980ec to 026980f3 has its CatchHandler @ 02598530 */
  FUN_012d0ef0();
LAB_02598320:
  lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                     (lVar12,iVar11,*(undefined8 *)puVar4);
  if (lVar10 == 0) goto LAB_025983fc;
  if (*(long *)(lVar10 + 0x20) == lVar8) {
    lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (lVar12,iVar11,*(undefined8 *)puVar4);
    if (lVar10 == 0) goto LAB_025983fc;
    uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__get_HasBlocker_1e909ac(lVar10,0);
    if ((uVar6 & 1) != 0) {
      lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (lVar12,iVar11,*(undefined8 *)puVar4);
      if (lVar10 == 0) goto LAB_025983fc;
      lVar15 = *(long *)(lVar7 + 0x20);
      uVar14 = *(undefined8 *)(lVar10 + 0x38);
      if (lVar15 == 0) {
        lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar15 == 0) goto LAB_025983fc;
        System_Func_object__bool____ctor_338137c(lVar15,lVar7,*(undefined8 *)puVar1,0);
        *(long *)(lVar7 + 0x20) = lVar15;
        FUN_012d0d74((long *)(lVar7 + 0x20),lVar15);
      }
      uVar6 = System_Linq_Enumerable__Any_object__2417a98(uVar14,lVar15,*(undefined8 *)puVar3);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
    }
  }
  iVar11 = iVar11 + -1;
  if (iVar11 < 0) {
    return 1;
  }
  goto LAB_02598320;
}

