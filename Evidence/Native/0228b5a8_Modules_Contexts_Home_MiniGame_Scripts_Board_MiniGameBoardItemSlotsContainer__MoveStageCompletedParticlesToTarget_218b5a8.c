/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$MoveStageCompletedParticlesToTarget
DG_Tweening_Tween_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__MoveStageCompletedParticlesToTarget (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this, UnityEngine_Transform_o* target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$MoveStageCompletedParticlesToTarget
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__MoveStageCompletedParticlesToTarget
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this,
   UnityEngine_Transform_o* target, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__MoveStageCompletedParticlesToTarget_218b5a8
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = PTR_DAT_057815e0;
                    /* try { // try from 0228b5d8 to 0238b64b has its CatchHandler @ 0228b5d8
                       catch() { ... } // from try @ 0228b5d8 with catch @ 0228b5d8
                       catch() { ... } // from try @ 0228b668 with catch @ 0228b5d8
                       catch() { ... } // from try @ 0228b77c with catch @ 0228b5d8
                       catch() { ... } // from try @ 0228b7b0 with catch @ 0228b5d8
                       catch() { ... } // from try @ 0228b82c with catch @ 0228b5d8
                       catch() { ... } // from try @ 0228b83c with catch @ 0228b5d8 */
  if ((bRam0000000005c29d5e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0581a338);
    FUN_012d0dc8(PTR_DAT_057e5810);
    FUN_012d0dc8(PTR_DAT_057727c8);
    FUN_012d0dc8(PTR_DAT_05819688);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057d2418);
    FUN_012d0dc8(PTR_DAT_0578e958);
    bRam0000000005c29d5e = 1;
  }
                    /* try { // try from 0228b64c to 0238b667 has its CatchHandler @ 0228b780 */
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 0228b668 to 0238b777 has its CatchHandler @ 0228b5d8 */
  uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar5 = PTR_DAT_0581a338;
  puVar4 = PTR_DAT_057e5810;
  puVar3 = PTR_DAT_057d2418;
  puVar2 = PTR_DAT_0578e958;
  puVar1 = PTR_DAT_057606c8;
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_98,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_05819688);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_80,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(long *)(lStack_70 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar8 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBasicItem__MoveStageCompletedParticlesToTarget_21882a4
                        (*(long *)(lStack_70 + 0x28),param_2);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar8,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar5);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar10);
      lVar10 = *(long *)puVar2;
    }
    lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    if (lVar11 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar10);
        lVar10 = *(long *)puVar2;
      }
      uVar8 = **(undefined8 **)(lVar10 + 0xb8);
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar11 == 0) goto LAB_0228b85c;
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar11,uVar8,*(undefined8 *)puVar3,0);
                    /* try { // try from 0228b778 to 0238b77b has its CatchHandler @ 0228b77c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0228b778 with catch @ 0228b77c
                       try { // try from 0228b77c to 0238b797 has its CatchHandler @ 0228b5d8 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0228b64c with catch @ 0228b780
                        */
      plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar9 = lVar11;
      FUN_012d0d74(plVar9,lVar11);
    }
                    /* try { // try from 0228b798 to 0238b7af has its CatchHandler @ 0228b834 */
    DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar6,lVar11,0);
    lVar10 = *(long *)(param_1 + 0x38);
    if (lVar10 != 0) {
      fVar13 = *(float *)(lVar10 + 0x3c);
                    /* try { // try from 0228b7b0 to 0238b81b has its CatchHandler @ 0228b5d8 */
      fVar12 = *(float *)(lVar10 + 0x188);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
        lVar10 = *(long *)(param_1 + 0x38);
        if (lVar10 == 0) goto LAB_0228b85c;
      }
      lVar11 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar8 = DG_Tweening_ShortcutExtensions__DOPunchScale_1ee71cc
                        (fVar12 * *(float *)(lVar11 + 0xc),fVar12 * *(float *)(lVar11 + 0x10),
                         fVar12 * *(float *)(lVar11 + 0x14),*(undefined4 *)(lVar10 + 0x18c),
                         0x3f800000,param_2,10,0);
                    /* try { // try from 0228b81c to 0238b82b has its CatchHandler @ 0228b834 */
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar13 + 0.0,uVar6,uVar8,0);
                    /* try { // try from 0228b82c to 0238b837 has its CatchHandler @ 0228b5d8 */
                    /* catch() { ... } // from try @ 0228b798 with catch @ 0228b834
                       catch() { ... } // from try @ 0228b81c with catch @ 0228b834 */
                    /* try { // try from 0228b838 to 0238b83b has its CatchHandler @ 0228b844 */
                    /* try { // try from 0228b83c to 0238b847 has its CatchHandler @ 0228b5d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0228b838 with catch @ 0228b844
                        */
      return uVar6;
    }
  }
LAB_0228b85c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

