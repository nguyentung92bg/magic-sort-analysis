/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$PlayAppearAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayAppearAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$PlayAppearAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayAppearAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayAppearAnimation_260cda0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2b9ea & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c2b9ea = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0270cf08;
    lVar4 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x28),0);
    DG_Tweening_ShortcutExtensions__DOKill_1eeb1dc(lVar4,0,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    puVar2 = PTR_DAT_05770998;
    if (lVar4 == 0) goto LAB_0270cf08;
                    /* try { // try from 0270ce5c to 0280ce83 has its CatchHandler @ 0270d010 */
    lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(float *)(lVar5 + 0xc) * _DAT_04321768,*(float *)(lVar5 + 0x10) * _DAT_04321768,
               *(float *)(lVar5 + 0x14) * _DAT_04321768,lVar4,0);
                    /* try { // try from 0270ce9c to 0280ceff has its CatchHandler @ 0270d014 */
    uVar6 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c(0x3f800000,_UNK_04359fc0,lVar4,0);
    DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0(uVar6,6,*(undefined8 *)puVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    if (pcRam0000000005c35e30 == (code *)0x0) {
      pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e30)(lVar4,1);
    return;
  }
LAB_0270cf08:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

