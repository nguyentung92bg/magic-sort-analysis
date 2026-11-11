/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$PlayCompleteAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$PlayCompleteAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__PlayCompleteAnimation_2f5c5f8
          (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c308d4 & 1) == 0) {
                    /* try { // try from 0305c618 to 0315c87f has its CatchHandler @ 0305c618
                       catch() { ... } // from try @ 0305c618 with catch @ 0305c618
                       catch() { ... } // from try @ 0305cd08 with catch @ 0305c618
                       catch() { ... } // from try @ 0305cdc4 with catch @ 0305c618
                       catch() { ... } // from try @ 0305ce58 with catch @ 0305c618 */
    FUN_012d0dc8(PTR_DAT_057bef90);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c308d4 = 1;
  }
  puVar1 = PTR_DAT_057606c8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_057bef90,0);
    uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar4,0,1);
    if ((lVar5 != 0) && ((uVar3 & 1) != 0)) {
      DG_Tweening_Sequence__DoInsertCallback_1edffe8(0x3f800000,uVar4,lVar5);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

