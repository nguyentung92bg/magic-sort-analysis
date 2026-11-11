/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$PlayOpenToggleEffect
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayOpenToggleEffect (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$PlayOpenToggleEffect
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayOpenToggleEffect
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__PlayOpenToggleEffect_260aa14
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
  
  lVar5 = param_1;
  if ((bRam0000000005c2b9d3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05770f28);
    lVar5 = FUN_012d0dc8(PTR_DAT_057c9a80);
    bRam0000000005c2b9d3 = 1;
  }
  puVar2 = PTR_DAT_057815e0;
  if (*(char *)(param_1 + 0x118) == '\0') {
    return lVar5;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x108),0,0);
  }
  puVar3 = PTR_DAT_057c9a80;
  plVar1 = (long *)(param_1 + 0x108);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
                    /* try { // try from 0270aab0 to 0280aad7 has its CatchHandler @ 0270acac */
  lVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *plVar1 = lVar5;
  FUN_012d0d74(plVar1,lVar5);
  lVar5 = *(long *)puVar3;
  lVar7 = *plVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_057606c8;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar8 == 0) {
                    /* try { // try from 0270aaf0 to 0280ab53 has its CatchHandler @ 0270acb0 */
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar5 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar8 == 0) goto LAB_0270abdc;
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar8,uVar9,*(undefined8 *)PTR_DAT_05770f28,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar8;
    FUN_012d0d74(plVar6,lVar8);
  }
  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,lVar7,lVar8,0);
  lVar5 = *(long *)(param_1 + 0x20);
  if ((lVar5 != 0) && (*(long *)(param_1 + 0x110) != 0)) {
                    /* try { // try from 0270ab90 to 0280ab97 has its CatchHandler @ 0270aca4 */
    uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleSquash_249e680
                      (*(undefined4 *)(lVar5 + 0x44),*(undefined4 *)(lVar5 + 0x48),
                       *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),
                       *(undefined4 *)(lVar5 + 0x60),*(undefined4 *)(lVar5 + 100),
                       *(undefined4 *)(lVar5 + 0x68),*(undefined4 *)(lVar5 + 0x6c),
                       *(long *)(param_1 + 0x110),*(undefined8 *)(lVar5 + 0x58),
                       *(undefined8 *)(lVar5 + 0x70),*(undefined8 *)(lVar5 + 0x80),0);
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
LAB_0270abdc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

