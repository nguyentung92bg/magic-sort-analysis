/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__Prepare_260c318
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2b9e6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b9e6 = 1;
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__SetSorting_260d500
            (param_1,param_2,param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__ResetStarView_260d5b0
              (param_1);
    Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__SetTrailActive_260d654
              (param_1,0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0270c4a4;
    UnityEngine_SpriteRenderer__set_color_4095de0
              (0x3f800000,0x3f800000,0x3f800000,_UNK_0438ebb0,*(long *)(param_1 + 0x38),0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0270c4a4;
    UnityEngine_SpriteRenderer__set_color_4095de0
              (0x3f800000,0x3f800000,0x3f800000,_UNK_0438ebb4,*(long *)(param_1 + 0x40),0);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    if (pcRam0000000005c3a788 == (code *)0x0) {
      pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
    }
    (*pcRam0000000005c3a788)(lVar3,&stack0xffffffffffffffd0);
    return;
  }
LAB_0270c4a4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

