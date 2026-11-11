/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$<PlayRevealAnimation>b__27_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView___PlayRevealAnimation_b__27_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$<PlayRevealAnimation>b__27_0
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView___PlayRevealAnimation_b__27_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView___PlayRevealAnimation_b__27_0_260d898
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_DAT_057c0d90;
  if ((bRam0000000005c2b9f1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c0d90);
    bRam0000000005c2b9f1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  auVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__GetMovingSorting_260d6ec
                     ();
  Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__SetSorting_260d500
            (param_1,auVar5._0_8_,auVar5._8_8_);
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2b9e9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b9e9 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar3,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

