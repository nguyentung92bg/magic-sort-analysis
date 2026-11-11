/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsFull
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsFull (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsFull
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsFull
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsFull_2498400(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_05818d58;
                    /* try { // try from 02598418 to 02698433 has its CatchHandler @ 025984c0 */
  if ((bRam0000000005c2b2f8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05771530);
                    /* try { // try from 02598434 to 0269845b has its CatchHandler @ 025984e4 */
    FUN_012d0dc8(PTR_DAT_057f6398);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057d5090);
                    /* try { // try from 0259845c to 02698483 has its CatchHandler @ 025984e0 */
    FUN_012d0dc8(PTR_DAT_05818d58);
    bRam0000000005c2b2f8 = 1;
  }
  lVar4 = *(long *)puVar2;
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_057f6398;
                    /* try { // try from 02598484 to 026984ab has its CatchHandler @ 025984c0 */
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar4 = *(long *)puVar2;
    }
                    /* catch() { ... } // from try @ 025983fc with catch @ 025984ac
                       try { // try from 025984ac to 02698553 has its CatchHandler @ 02597c9c */
    uVar8 = **(undefined8 **)(lVar4 + 0xb8);
                    /* catch() { ... } // from try @ 02598368 with catch @ 025984b0 */
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 025982f8 with catch @ 025984b4 */
    if (lVar7 == 0) goto LAB_02598524;
                    /* catch() { ... } // from try @ 025982dc with catch @ 025984b8 */
                    /* catch() { ... } // from try @ 025982ac with catch @ 025984bc */
                    /* catch() { ... } // from try @ 02598418 with catch @ 025984c0
                       catch() { ... } // from try @ 02598484 with catch @ 025984c0 */
                    /* catch() { ... } // from try @ 025983a8 with catch @ 025984c4 */
                    /* catch() { ... } // from try @ 02598304 with catch @ 025984c8 */
                    /* catch() { ... } // from try @ 0259831c with catch @ 025984cc */
                    /* catch() { ... } // from try @ 02598270 with catch @ 025984d0 */
    System_Func_object__bool____ctor_338137c(lVar7,uVar8,*(undefined8 *)PTR_DAT_057d5090,0);
                    /* catch() { ... } // from try @ 02598238 with catch @ 025984d4 */
                    /* catch() { ... } // from try @ 02598230 with catch @ 025984d8 */
                    /* catch() { ... } // from try @ 02598228 with catch @ 025984dc */
                    /* catch() { ... } // from try @ 0259837c with catch @ 025984e0
                       catch() { ... } // from try @ 0259845c with catch @ 025984e0 */
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar5 = lVar7;
                    /* catch() { ... } // from try @ 025983c4 with catch @ 025984e4
                       catch() { ... } // from try @ 02598434 with catch @ 025984e4 */
    FUN_012d0d74(plVar5,lVar7);
  }
                    /* catch() { ... } // from try @ 0259823c with catch @ 025984e8 */
                    /* catch() { ... } // from try @ 02598264 with catch @ 025984ec
                       catch() { ... } // from try @ 025982c0 with catch @ 025984ec
                       catch() { ... } // from try @ 025983e8 with catch @ 025984ec */
                    /* catch() { ... } // from try @ 025981f4 with catch @ 025984f0 */
                    /* catch() { ... } // from try @ 0259821c with catch @ 025984f4
                       catch() { ... } // from try @ 02598288 with catch @ 025984f4
                       catch() { ... } // from try @ 025983a0 with catch @ 025984f4 */
                    /* catch() { ... } // from try @ 025981e0 with catch @ 025984f8 */
                    /* catch() { ... } // from try @ 025981d4 with catch @ 025984fc */
  iVar3 = System_Linq_Enumerable__Count_object__241f07c(uVar6,lVar7,*(undefined8 *)PTR_DAT_05771530)
  ;
                    /* catch() { ... } // from try @ 025981d0 with catch @ 02598500 */
                    /* catch() { ... } // from try @ 025981cc with catch @ 02598504 */
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* catch() { ... } // from try @ 025981c4 with catch @ 02598508 */
                    /* catch() { ... } // from try @ 025981d8 with catch @ 0259850c
                       catch() { ... } // from try @ 025981e8 with catch @ 0259850c */
                    /* catch() { ... } // from try @ 02597df0 with catch @ 02598510
                       catch() { ... } // from try @ 025982e0 with catch @ 02598510 */
                    /* catch() { ... } // from try @ 02597e30 with catch @ 02598514 */
                    /* catch() { ... } // from try @ 02598190 with catch @ 02598518 */
                    /* catch() { ... } // from try @ 0259816c with catch @ 0259851c
                       catch() { ... } // from try @ 025982d8 with catch @ 0259851c */
                    /* catch() { ... } // from try @ 02597df4 with catch @ 02598520 */
    return iVar3 == *(int *)(*(long *)(param_1 + 0x80) + 0x18);
  }
LAB_02598524:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02598140 with catch @ 02598524 */
  FUN_012d0ef0();
}

