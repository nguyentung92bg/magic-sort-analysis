/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$ResetStarView
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__ResetStarView (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$ResetStarView
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__ResetStarView
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__ResetStarView_260d5b0
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x28),0);
    DG_Tweening_ShortcutExtensions__DOKill_1eeb1dc(uVar1,0,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar2 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x28),0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                   *(undefined4 *)(lVar3 + 0x14),lVar2,0);
        lVar2 = *(long *)(param_1 + 0x28);
        if (lVar2 != 0) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar2,1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

