/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlayCompleteAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, System_Collections_Generic_List_BottleItem__o* belongingBottles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlayCompleteAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteAnimation_2615464
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2ba2b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    bRam0000000005c2ba2b = 1;
  }
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar8 = (undefined8 *)(param_1 + 200);
  *puVar8 = uVar3;
  FUN_012d0d74(puVar8,uVar3);
  if ((*(long *)(param_1 + 0xc0) == 0) ||
     (uVar4 = DG_Tweening_TweenExtensions__IsPlaying_1edf238(*(long *)(param_1 + 0xc0),0),
     (uVar4 & 1) == 0)) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_02715850;
    uVar6 = *(undefined8 *)(param_1 + 200);
    uVar14 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x3c);
    uVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__UpdateAndRotateCountText_261666c
                      (param_1);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(uVar14,uVar6,uVar3,0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_02715850;
                    /* try { // try from 027156dc to 0281573f has its CatchHandler @ 02715864 */
    uVar3 = *(undefined8 *)(param_1 + 200);
    fVar13 = *(float *)(*(long *)(param_1 + 0x20) + 0x3c);
    goto LAB_0271578c;
  }
  lVar5 = *(long *)(param_1 + 0xc0);
  if (lVar5 == 0) {
LAB_02715850:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02715850 to 0281587b has its CatchHandler @ 02715384 */
    FUN_012d0ef0();
  }
  fVar13 = *(float *)(lVar5 + 0x104);
  fVar9 = (float)DG_Tweening_TweenExtensions__Duration_1edeccc(lVar5,1,0);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_02715850;
  fVar15 = *(float *)(*(long *)(param_1 + 0x20) + 0xd4);
  if (cRam0000000005c23465 == '\0') {
    FUN_012d0dc8(PTR_DAT_05764ae0);
    cRam0000000005c23465 = '\x01';
  }
  fVar12 = ABS(fVar15);
  fVar10 = ABS(fVar9);
  if (ABS(fVar9) <= fVar12) {
    fVar10 = fVar12;
  }
  fVar11 = **(float **)(*(long *)PTR_DAT_05764ae0 + 0xb8) * 8.0;
  fVar12 = fVar10 * _LAB_04321df0;
  if (fVar10 * _LAB_04321df0 <= fVar11) {
    fVar12 = fVar11;
  }
  if (ABS(fVar15 - fVar9) < fVar12) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_02715850;
    fVar9 = *(float *)(*(long *)(param_1 + 0x20) + 0x3c);
    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    fVar13 = (float)System_Math__Max_26cd274(fVar13 - fVar9,0,0);
  }
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_02715850;
  UnityEngine_Transform__get_localEulerAngles_4092e84(*(long *)(param_1 + 0x60),0);
  if (*(long *)(param_1 + 0xc0) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0xc0),0,0);
  }
  puVar2 = PTR_DAT_057fbae0;
  puVar1 = PTR_DAT_057936b8;
  if (*(long *)(param_1 + 0xb0) == 0) goto LAB_02715850;
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,*(long *)(param_1 + 0xb0),*(undefined8 *)PTR_DAT_0579f3e8);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_70,*(undefined8 *)puVar2), lVar5 = lStack_60, (uVar4 & 1) != 0)
  {
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0271584c to 0281584f has its CatchHandler @ 02715858 */
      FUN_012d0ef0();
    }
    UnityEngine_SpriteRenderer__get_color_4095d44(lStack_60,0);
                    /* try { // try from 0271569c to 028156c3 has its CatchHandler @ 02715860 */
    UnityEngine_SpriteRenderer__set_color_4095de0(lVar5,0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_70,*(undefined8 *)puVar1);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_02715850;
  if (fVar13 <= *(float *)(lVar5 + 0xc4)) {
                    /* try { // try from 02715740 to 02815773 has its CatchHandler @ 02715384 */
    fVar9 = *(float *)(lVar5 + 200);
    uVar14 = 0x43340000;
    if (180.0 <= fVar11) {
      uVar14 = 0x43b40000;
    }
    fVar13 = *(float *)(lVar5 + 0xd0) - fVar13;
LAB_02715760:
    uVar7 = 0x44340000;
  }
  else {
    fVar9 = *(float *)(lVar5 + 200);
    if (fVar9 <= fVar13) {
      if (*(float *)(lVar5 + 0xcc) <= fVar13) {
        fVar15 = *(float *)(lVar5 + 0xd0);
        uVar14 = 0x43b40000;
        if (180.0 <= fVar11) {
          uVar14 = 0x44070000;
        }
        if (fVar15 <= fVar13) {
          fVar13 = fVar13 - fVar15;
        }
        else {
          fVar13 = fVar15 - fVar13;
        }
        fVar9 = fVar9 + fVar13;
        fVar13 = fVar15 + fVar13;
        goto LAB_02715760;
      }
      uVar7 = 0x43b40000;
      uVar14 = 0x43340000;
      if (180.0 <= fVar11) {
        uVar14 = uVar7;
      }
      fVar13 = *(float *)(lVar5 + 0xd0) - fVar13;
      fVar9 = 0.0;
    }
    else {
      uVar7 = 0x43b40000;
      uVar14 = 0x43340000;
      if (180.0 <= fVar11) {
        uVar14 = uVar7;
      }
      fVar13 = *(float *)(lVar5 + 0xd0) - fVar13;
    }
  }
  uVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__ReturnToDefaultSequence_261617c
                    (uVar14,uVar7,fVar9,fVar13,param_1);
                    /* try { // try from 02715774 to 02815783 has its CatchHandler @ 0271585c */
                    /* try { // try from 02715784 to 0281584b has its CatchHandler @ 02715384 */
  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,*(undefined8 *)(param_1 + 200),uVar3,0);
  uVar3 = *(undefined8 *)(param_1 + 200);
LAB_0271578c:
  uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayCompleteSequence_2616410
                    (param_1,param_2);
  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar13,uVar3,uVar6,0);
  return *puVar8;
}

