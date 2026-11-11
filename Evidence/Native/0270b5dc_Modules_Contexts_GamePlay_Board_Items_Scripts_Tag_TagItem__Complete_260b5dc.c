/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, bool undoable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, bool undoable, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__Complete_260b5dc
               (long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = param_1;
  if ((bRam0000000005c2b9da & 1) == 0) {
                    /* try { // try from 0270b5f8 to 0280b66f has its CatchHandler @ 0270b670 */
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05760f88);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057e0620);
    lVar5 = FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c2b9da = 1;
  }
  puVar2 = PTR_DAT_057b8520;
  if (*(char *)(param_1 + 0x40) != '\0') {
    return lVar5;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  puVar3 = PTR_DAT_05760f88;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270b5f8 with catch @ 0270b670
                       try { // try from 0270b670 to 0280b687 has its CatchHandler @ 0270b5a0 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  if (lVar5 != 0) {
                    /* try { // try from 0270b688 to 0280b69f has its CatchHandler @ 0270b70c */
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
    puVar2 = PTR_DAT_057606c8;
    if ((param_2 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar6 != 0) {
                    /* try { // try from 0270b6fc to 0280b70b has its CatchHandler @ 0270b70c */
                    /* catch() { ... } // from try @ 0270b688 with catch @ 0270b70c
                       catch() { ... } // from try @ 0270b6fc with catch @ 0270b70c */
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057e0620,0);
        uVar1 = _UNK_0438ebac;
        uVar4 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar5,0,1);
                    /* try { // try from 0270b710 to 0280b713 has its CatchHandler @ 0270b71c */
                    /* try { // try from 0270b714 to 0280b71f has its CatchHandler @ 0270b5a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270b710 with catch @ 0270b71c
                        */
        if ((lVar6 != 0) && ((uVar4 & 1) != 0)) {
          DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar1,lVar5,lVar6);
        }
        return lVar5;
      }
    }
    else if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 0270b6a0 to 0280b6fb has its CatchHandler @ 0270b5a0 */
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                (*(long *)(param_1 + 0x50),param_1,0);
      lVar5 = *(long *)(param_1 + 0x48);
      if (lVar5 != 0) {
        if ((bRam0000000005c2b9e0 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057dad50);
          bRam0000000005c2b9e0 = 1;
        }
        lVar5 = *(long *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          uVar7 = *(undefined8 *)PTR_DAT_057dad50;
          if (pcRam0000000005c28c10 == (code *)0x0) {
            pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar7,0);
          }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar5 = (*pcRam0000000005c28c10)(lVar5,uVar7,0);
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

