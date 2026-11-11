/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsSelectableAsTargetExceptAnimation
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsSelectableAsTargetExceptAnimation
   bool 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, int32_t
   waterColorId, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsTargetExceptAnimation_24980f0
          (long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  
  puVar1 = PTR_DAT_058099e0;
  if ((bRam0000000005c2b2de & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a89e8);
    FUN_012d0dc8(PTR_DAT_0579a910);
                    /* try { // try from 02598140 to 02698153 has its CatchHandler @ 02598524 */
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_05802430);
                    /* try { // try from 0259816c to 02698177 has its CatchHandler @ 0259851c */
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_05774b00);
    FUN_012d0dc8(PTR_DAT_058099e0);
    bRam0000000005c2b2de = 1;
  }
                    /* try { // try from 02598190 to 0269819b has its CatchHandler @ 02598518 */
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar6 == 0) {
LAB_025983fc:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025983fc to 02698413 has its CatchHandler @ 025984ac */
    FUN_012d0ef0();
  }
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem___c__DisplayClass82_0___ctor_22f9d7c
            (lVar6,0);
  plVar12 = (long *)(lVar6 + 0x10);
  *plVar12 = param_2;
  FUN_012d0d74(plVar12,param_2);
  *(undefined4 *)(lVar6 + 0x18) = param_3;
                    /* try { // try from 025981c4 to 026981cb has its CatchHandler @ 02598508 */
                    /* try { // try from 025981cc to 026981cf has its CatchHandler @ 02598504 */
                    /* try { // try from 025981d0 to 026981d3 has its CatchHandler @ 02598500 */
  if ((*plVar12 != param_1) && (*(char *)(param_1 + 0x4c) == '\0')) {
                    /* try { // try from 025981d4 to 026981d7 has its CatchHandler @ 025984fc */
                    /* try { // try from 025981d8 to 026981df has its CatchHandler @ 0259850c */
    uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsEmpty_249577c(param_1)
    ;
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 025981e0 to 026981e7 has its CatchHandler @ 025984f8 */
      lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                        (param_1);
                    /* try { // try from 025981e8 to 026981f3 has its CatchHandler @ 0259850c */
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x58) == 0)) {
        iVar13 = 0xc;
      }
      else {
                    /* try { // try from 025981f4 to 02698207 has its CatchHandler @ 025984f0 */
        iVar13 = *(int *)(*(long *)(lVar8 + 0x58) + 0x70);
      }
                    /* try { // try from 0259821c to 02698227 has its CatchHandler @ 025984f4 */
      if ((iVar13 != *(int *)(lVar6 + 0x18)) &&
         (uVar7 = Modules_Contexts_GamePlay_Board_Items_Scripts_Rainbow_RainbowRules__AllowsMismatchedPour_2745458
                            (*plVar12,param_1,0), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsFull_2498400(param_1);
    puVar5 = PTR_DAT_05802430;
    puVar4 = PTR_DAT_057f2468;
    puVar3 = PTR_DAT_057a89e8;
    puVar2 = PTR_DAT_0579a910;
    puVar1 = PTR_DAT_05774b00;
                    /* try { // try from 02598228 to 0269822f has its CatchHandler @ 025984dc */
    if ((uVar7 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x88);
                    /* try { // try from 02598230 to 02698233 has its CatchHandler @ 025984d8 */
      if (lVar8 != 0) {
                    /* try { // try from 02598234 to 02698237 has its CatchHandler @ 025985c8 */
                    /* try { // try from 02598238 to 0269823b has its CatchHandler @ 025984d4 */
                    /* try { // try from 0259823c to 0269824f has its CatchHandler @ 025984e8 */
        iVar13 = 0;
        do {
                    /* try { // try from 02598264 to 0269826f has its CatchHandler @ 025984ec */
          if (*(int *)(lVar8 + 0x18) <= iVar13) {
                    /* try { // try from 025982ac to 026982af has its CatchHandler @ 025984bc */
            uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                              (param_1,5);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(param_1 + 0xd0) == 0) break;
                    /* try { // try from 025982c0 to 026982d7 has its CatchHandler @ 025984ec */
              uVar7 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasDifferentBottleWithClayAndSameColor_2f6b7d8
                                (*(long *)(param_1 + 0xd0),*plVar12,param_1,0);
              if ((uVar7 & 1) != 0) {
                return 0;
              }
            }
                    /* try { // try from 025982d8 to 026982db has its CatchHandler @ 0259851c */
            uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                              (param_1,5);
                    /* try { // try from 025982dc to 026982df has its CatchHandler @ 025984b8 */
            if ((uVar7 & 1) != 0) {
                    /* try { // try from 025982e0 to 026982f7 has its CatchHandler @ 02598510 */
              if (*(long *)(param_1 + 0xd0) == 0) break;
              uVar7 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasDifferentBottleWithIceAndSameColor_2f6b940
                                (*(long *)(param_1 + 0xd0),*plVar12,param_1,0);
                    /* try { // try from 025982f8 to 026982ff has its CatchHandler @ 025984b4 */
              if ((uVar7 & 1) != 0) {
                return 0;
              }
            }
            lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                              (param_1);
                    /* try { // try from 02598304 to 02698317 has its CatchHandler @ 025984c8 */
            lVar11 = *(long *)(param_1 + 0x80);
            if (lVar11 != 0) {
              iVar13 = *(int *)(lVar11 + 0x18) + -1;
              if (iVar13 < 0) {
                return 1;
              }
                    /* try { // try from 0259831c to 0269835f has its CatchHandler @ 025984cc */
              goto LAB_02598320;
            }
            break;
          }
                    /* try { // try from 02598270 to 02698273 has its CatchHandler @ 025984d0 */
                    /* try { // try from 02598274 to 02698277 has its CatchHandler @ 02598530 */
          plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar8,iVar13,*(undefined8 *)puVar5);
          if (plVar9 == (long *)0x0) break;
                    /* try { // try from 02598288 to 026982ab has its CatchHandler @ 025984f4 */
          uVar7 = (**(code **)(*plVar9 + 0x1f8))
                            (plVar9,*(undefined8 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x18),
                             *(undefined8 *)(*plVar9 + 0x200));
          if ((uVar7 & 1) == 0) {
            return 0;
          }
          lVar8 = *(long *)(param_1 + 0x88);
          iVar13 = iVar13 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_025983fc;
    }
  }
                    /* try { // try from 025983e8 to 026983fb has its CatchHandler @ 025984ec */
  return 0;
LAB_02598320:
  lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                     (lVar11,iVar13,*(undefined8 *)puVar4);
  if (lVar10 == 0) goto LAB_025983fc;
  if (*(long *)(lVar10 + 0x20) == lVar8) {
    lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (lVar11,iVar13,*(undefined8 *)puVar4);
    if (lVar10 == 0) goto LAB_025983fc;
    uVar7 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__get_HasBlocker_1e909ac(lVar10,0);
    if ((uVar7 & 1) != 0) {
                    /* try { // try from 02598368 to 02698377 has its CatchHandler @ 025984b0 */
      lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (lVar11,iVar13,*(undefined8 *)puVar4);
      if (lVar10 == 0) goto LAB_025983fc;
      lVar15 = *(long *)(lVar6 + 0x20);
      uVar14 = *(undefined8 *)(lVar10 + 0x38);
                    /* try { // try from 0259837c to 02698397 has its CatchHandler @ 025984e0 */
      if (lVar15 == 0) {
        lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar15 == 0) goto LAB_025983fc;
        System_Func_object__bool____ctor_338137c(lVar15,lVar6,*(undefined8 *)puVar1,0);
                    /* try { // try from 025983a0 to 026983a7 has its CatchHandler @ 025984f4 */
                    /* try { // try from 025983a8 to 026983bf has its CatchHandler @ 025984c4 */
        *(long *)(lVar6 + 0x20) = lVar15;
        FUN_012d0d74((long *)(lVar6 + 0x20),lVar15);
      }
      uVar7 = System_Linq_Enumerable__Any_object__2417a98(uVar14,lVar15,*(undefined8 *)puVar3);
      if ((uVar7 & 1) != 0) {
        return 0;
      }
    }
  }
                    /* try { // try from 025983c4 to 026983df has its CatchHandler @ 025984e4 */
  iVar13 = iVar13 + -1;
  if (iVar13 < 0) {
    return 1;
  }
  goto LAB_02598320;
}

