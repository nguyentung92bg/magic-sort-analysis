/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$GetTrailSourceTransform
UnityEngine_Transform_o* Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__GetTrailSourceTransform (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$GetTrailSourceTransform
   UnityEngine_Transform_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__GetTrailSourceTransform
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__GetTrailSourceTransform_260d200
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2b9ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b9ee = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Equality_407f288(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      if (pcRam0000000005c3a370 == (code *)0x0) {
        pcRam0000000005c3a370 = (code *)FUN_012d0d84(&UNK_043ede38);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a370)(lVar4);
      return;
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
            goto LAB_0270d2e0;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_0270d2e0:
                    /* WARNING: Could not recover jumptable at 0x0270d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar6,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

