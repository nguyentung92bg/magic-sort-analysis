/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$PlayCloseToggleEffect
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayCloseToggleEffect (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$PlayCloseToggleEffect
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayCloseToggleEffect
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayCloseToggleEffect_260abe0
               (long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
                    /* try { // try from 0270abf4 to 0280abfb has its CatchHandler @ 0270aca8 */
                    /* try { // try from 0270abfc to 0280ac7b has its CatchHandler @ 0270a98c */
  lVar5 = param_1;
  if ((bRam0000000005c2b9d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05787328);
    lVar5 = FUN_012d0dc8(PTR_DAT_057c9a80);
    bRam0000000005c2b9d4 = 1;
  }
  puVar2 = PTR_DAT_057815e0;
  if (*(char *)(param_1 + 0x118) != '\0') {
    return lVar5;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x100),0,0);
  }
  puVar3 = PTR_DAT_057c9a80;
                    /* try { // try from 0270ac7c to 0280ac7f has its CatchHandler @ 0270aca0 */
                    /* try { // try from 0270ac80 to 0280ac83 has its CatchHandler @ 0270ac9c */
  plVar1 = (long *)(param_1 + 0x100);
                    /* try { // try from 0270ac84 to 0280ac87 has its CatchHandler @ 0270aca0 */
                    /* try { // try from 0270ac88 to 0280ac8b has its CatchHandler @ 0270a98c */
                    /* try { // try from 0270ac8c to 0280ac8f has its CatchHandler @ 0270ac98 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* try { // try from 0270ac90 to 0280accb has its CatchHandler @ 0270a98c */
    thunk_FUN_0130472c();
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270ac8c with catch @ 0270ac98
                        */
  lVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270ac80 with catch @ 0270ac9c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270ac7c with catch @ 0270aca0
                       catch(type#1 @ 054cbd58) { ... } // from try @ 0270ac84 with catch @ 0270aca0
                        */
  *plVar1 = lVar5;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270ab90 with catch @ 0270aca4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270abf4 with catch @ 0270aca8
                        */
  FUN_012d0d74(plVar1,lVar5);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270aab0 with catch @ 0270acac
                        */
  lVar5 = *(long *)puVar3;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270aaf0 with catch @ 0270acb0
                        */
  lVar7 = *plVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_057606c8;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
                    /* try { // try from 0270accc to 0280accf has its CatchHandler @ 0270ad48 */
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar5 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar8 == 0) goto LAB_0270ada8;
                    /* try { // try from 0270ad0c to 0280ad33 has its CatchHandler @ 0270ad54 */
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,uVar9,*(undefined8 *)PTR_DAT_05787328,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar6 = lVar8;
    FUN_012d0d74(plVar6,lVar8);
  }
                    /* try { // try from 0270ad34 to 0280ad3f has its CatchHandler @ 0270a98c */
  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,lVar7,lVar8,0);
                    /* try { // try from 0270ad40 to 0280ad47 has its CatchHandler @ 0270ad54 */
  lVar5 = *(long *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 0270accc with catch @ 0270ad48 */
  if ((lVar5 != 0) && (*(long *)(param_1 + 0x110) != 0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270ad0c with catch @ 0270ad54
                       catch(type#2 @ 00000000) { ... } // from try @ 0270ad40 with catch @ 0270ad54
                        */
    uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleSquash_249e680
                      (*(undefined4 *)(lVar5 + 0x8c),*(undefined4 *)(lVar5 + 0x90),
                       *(undefined4 *)(lVar5 + 0x94),*(undefined4 *)(lVar5 + 0x98),
                       *(undefined4 *)(lVar5 + 0xa8),*(undefined4 *)(lVar5 + 0xac),
                       *(undefined4 *)(lVar5 + 0xb0),*(undefined4 *)(lVar5 + 0xb4),
                       *(long *)(param_1 + 0x110),*(undefined8 *)(lVar5 + 0xa0),
                       *(undefined8 *)(lVar5 + 0xb8),*(undefined8 *)(lVar5 + 200),0);
    lVar5 = *plVar1;
    uVar4 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar5,uVar9,0);
    if ((uVar4 & 1) != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      DG_Tweening_Sequence__DoInsert_1edfca4(*(undefined4 *)(lVar5 + 0xa0),lVar5,uVar9);
    }
    return lVar5;
  }
LAB_0270ada8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

