/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OpenToggleAndComplete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OpenToggleAndComplete (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$OpenToggleAndComplete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OpenToggleAndComplete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__OpenToggleAndComplete_2609e4c
          (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_057815e0;
                    /* try { // try from 02709e50 to 02809eb3 has its CatchHandler @ 02709fc8 */
  if ((bRam0000000005c2b9ce & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057dd888);
    FUN_012d0dc8(PTR_DAT_057ccda0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b9ce = 1;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar1 = PTR_DAT_057606c8;
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 02709ee0 to 02809eef has its CatchHandler @ 02709fc0 */
    uVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetRemainingAnimationTime_26097d0
                      (*(long *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x58));
                    /* try { // try from 02709ef0 to 02809faf has its CatchHandler @ 02709b00 */
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057ccda0,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar3,lVar4,0);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057dd888,0);
        uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar3,0,1);
        if ((lVar4 != 0) && ((uVar2 & 1) != 0)) {
          DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar5,uVar3,lVar4);
        }
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

