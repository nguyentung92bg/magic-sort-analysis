/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$UpdateView
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateView (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$UpdateView
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateView
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateView_260e6a4
               (long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar2 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x28),0),
     lVar2 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar2,*(int *)(param_1 + 0x100) == 0,0);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar2 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x30),0),
       lVar2 != 0)) {
      iVar1 = *(int *)(param_1 + 0x100);
                    /* try { // try from 0270e6fc to 0280e70b has its CatchHandler @ 0270e70c */
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar2,iVar1 == 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

