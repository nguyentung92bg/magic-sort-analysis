/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$IsVisible
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__IsVisible (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$IsVisible
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__IsVisible
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__IsVisible_260e090(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_408e35c(lVar1,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
       lVar1 != 0)) {
      if (pcRam0000000005c3a390 == (code *)0x0) {
        pcRam0000000005c3a390 = (code *)FUN_012d0d84(&UNK_043edee6);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000005c3a390)(lVar1);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

