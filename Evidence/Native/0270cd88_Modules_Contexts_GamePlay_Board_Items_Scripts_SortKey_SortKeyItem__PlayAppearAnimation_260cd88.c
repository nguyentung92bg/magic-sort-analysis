/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$PlayAppearAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayAppearAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$PlayAppearAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayAppearAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayAppearAnimation_260cd88
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_0576c200;
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b9ea & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c2b9ea = 1;
  }
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_0270cf08;
    lVar5 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(lVar3 + 0x28),0);
    DG_Tweening_ShortcutExtensions__DOKill_1eeb1dc(lVar5,0,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    puVar2 = PTR_DAT_05770998;
    if (lVar5 == 0) goto LAB_0270cf08;
    lVar6 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(float *)(lVar6 + 0xc) * _DAT_04321768,*(float *)(lVar6 + 0x10) * _DAT_04321768,
               *(float *)(lVar6 + 0x14) * _DAT_04321768,lVar5,0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c(0x3f800000,_UNK_04359fc0,lVar5,0);
    DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0(uVar7,6,*(undefined8 *)puVar2);
  }
  uVar7 = *(undefined8 *)(lVar3 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar3 + 0x50);
  if (lVar3 != 0) {
    if (pcRam0000000005c35e30 == (code *)0x0) {
      pcRam0000000005c35e30 = (code *)FUN_012d0d84(&UNK_043e020e,0);
    }
                    /* WARNING: Could not recover jumptable at 0x03bbc604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c35e30)(lVar3,1);
    return;
  }
LAB_0270cf08:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

