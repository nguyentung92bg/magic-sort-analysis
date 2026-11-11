/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$OnUndoFilled
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__OnUndoFilled (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$OnUndoFilled
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__OnUndoFilled
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__OnUndoFilled_22fc6f8
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2a5f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2a5f6 = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject_408b480(lVar3,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if (*(long *)(lVar3 + 0x28) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x28) + 0x38);
      if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x28);
      if ((lVar3 != 0) && (lVar1 = *(long *)(lVar3 + 0x38), lVar1 != 0)) {
        uVar4 = *(undefined8 *)(lVar3 + 0x30);
        if (pcRam0000000005c28c10 == (code *)0x0) {
          pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar4,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c10)(lVar1,uVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

