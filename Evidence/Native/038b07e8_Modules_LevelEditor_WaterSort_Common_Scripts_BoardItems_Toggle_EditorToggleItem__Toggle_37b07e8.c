/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleItem$$Toggle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem__Toggle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleItem$$Toggle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem__Toggle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem__Toggle_37b07e8
               (long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x30);
  *(byte *)(param_1 + 0x40) = bVar1 ^ 1;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 038b0808 to 039b082b has its CatchHandler @ 038b337c */
  if ((*(long *)(lVar2 + 0x20) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar2 + 0x20),0), lVar3 != 0))
  {
    UnityEngine_GameObject__SetActive_408e318(lVar3,~(bVar1 == 0) & 1,0);
    if ((*(long *)(lVar2 + 0x28) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar2 + 0x28),0), lVar2 != 0
       )) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar2,bVar1 == 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

