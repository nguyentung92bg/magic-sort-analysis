/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$SetTrailActive
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__SetTrailActive (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$SetTrailActive
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__SetTrailActive
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, bool isActive,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__SetTrailActive_260d654
               (long param_1,uint param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
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
      (*pcRam0000000005c3a388)(lVar3,param_2 & 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

