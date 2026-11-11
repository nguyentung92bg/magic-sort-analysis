/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlayProgressAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayProgressAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlayProgressAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayProgressAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlayProgressAnimation_2614b9c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uStack_e0;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000005c2ba2a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    FUN_012d0dc8(PTR_DAT_05801c30);
    FUN_012d0dc8(PTR_DAT_057fed00);
    FUN_012d0dc8(PTR_DAT_057f6610);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    FUN_012d0dc8(PTR_DAT_057db978);
    bRam0000000005c2ba2a = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_4 + 0x60) == 0) goto LAB_0271532c;
  fVar13 = (float)UnityEngine_Transform__get_localEulerAngles_4092e84(*(long *)(param_4 + 0x60),0);
  if (cRam0000000005c24e32 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c24e32 = '\x01';
  }
  puVar3 = PTR_DAT_05805c10;
  lVar7 = *(long *)(param_4 + 0x20);
  if (lVar7 == 0) goto LAB_0271532c;
  uVar9 = *(undefined8 *)(lVar7 + 0x20);
  fVar17 = *(float *)(lVar7 + 0x18);
  fVar15 = *(float *)(lVar7 + 0x38);
  fVar18 = *(float *)(lVar7 + 0x3c);
  fVar19 = *(float *)(lVar7 + 0x40);
  uVar12 = *(undefined8 *)(lVar7 + 0x30);
  uVar16 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x48);
  plVar8 = (long *)(param_4 + 0xc0);
  fVar14 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x50) * fVar15;
  uStack_e0 = CONCAT44(param_2 + (float)((ulong)uVar16 >> 0x20) * fVar15,
                       fVar13 + (float)uVar16 * fVar15);
  param_3 = param_3 + fVar14;
  *(int *)(param_4 + 0xbc) = *(int *)(param_4 + 0xbc) + -1;
  fVar13 = fVar17;
  if (*plVar8 == 0) {
    fVar14 = 360.0;
  }
  else {
    uVar6 = DG_Tweening_TweenExtensions__IsPlaying_1edf238(*plVar8,0);
    puVar4 = PTR_DAT_05807f60;
    puVar2 = PTR_DAT_057db978;
    puVar1 = PTR_DAT_057ce7d0;
    if ((uVar6 & 1) == 0) {
      fVar14 = 360.0;
    }
    else {
      if ((*plVar8 == 0) || (lVar7 = *(long *)(param_4 + 0x20), lVar7 == 0)) goto LAB_0271532c;
      fVar15 = *(float *)(*plVar8 + 0x104);
      if (fVar15 <= *(float *)(lVar7 + 0x40)) {
        return;
      }
      uVar9 = *(undefined8 *)(lVar7 + 0x28);
      uVar12 = *(undefined8 *)(lVar7 + 0x60);
      if ((fVar15 <= *(float *)(lVar7 + 0x40)) || (*(float *)(lVar7 + 0x44) <= fVar15)) {
        if ((fVar15 <= *(float *)(lVar7 + 0x44)) || (*(float *)(lVar7 + 0x48) <= fVar15)) {
          if ((fVar15 <= *(float *)(lVar7 + 0x48)) || (*(float *)(lVar7 + 0x4c) <= fVar15)) {
            if (*(long *)(param_4 + 0x60) == 0) goto LAB_0271532c;
                    /* try { // try from 0271528c to 028152a3 has its CatchHandler @ 02715204 */
                    /* try { // try from 027152a4 to 028152d3 has its CatchHandler @ 027152d4 */
            UnityEngine_Transform__get_localEulerAngles_4092e84(*(long *)(param_4 + 0x60),0);
            fStack_d0 = fVar14;
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&fStack_d0);
            fStack_b4 = fVar15;
            uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&fStack_b4);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0271525c with catch @ 027152d4
                       catch(type#1 @ 054cbd58) { ... } // from try @ 027152a4 with catch @ 027152d4
                       try { // try from 027152d4 to 028152eb has its CatchHandler @ 02715204 */
            uVar16 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar16,uVar11,0);
                    /* try { // try from 027152ec to 02815303 has its CatchHandler @ 02715370 */
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar4);
            }
                    /* try { // try from 02715304 to 0281535f has its CatchHandler @ 02715204 */
            UnityEngine_Debug__Log_4087f08(uVar16,0);
            fVar18 = 0.0;
            fVar14 = 360.0;
            goto LAB_02714ec0;
          }
                    /* try { // try from 02715204 to 0281525b has its CatchHandler @ 02715204
                       catch() { ... } // from try @ 02715204 with catch @ 02715204
                       catch() { ... } // from try @ 0271528c with catch @ 02715204
                       catch() { ... } // from try @ 027152d4 with catch @ 02715204
                       catch() { ... } // from try @ 02715304 with catch @ 02715204
                       catch() { ... } // from try @ 02715378 with catch @ 02715204 */
          if (cRam0000000005c24e32 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c24e32 = '\x01';
          }
          if (*(long *)(param_4 + 0x60) == 0) goto LAB_0271532c;
          uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
          param_3 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
          UnityEngine_Transform__get_localEulerAngles_4092e84(*(long *)(param_4 + 0x60),0);
          lVar7 = *(long *)(param_4 + 0x20);
          fVar13 = 180.0;
          if (180.0 <= fVar14) {
            fVar13 = 360.0;
          }
          if (lVar7 == 0) goto LAB_0271532c;
                    /* try { // try from 0271525c to 0281528b has its CatchHandler @ 027152d4 */
          uStack_e0 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar13,(float)uVar16 * fVar13);
          param_3 = param_3 * fVar13;
          fVar19 = *(float *)(lVar7 + 0x50);
          fVar18 = *(float *)(lVar7 + 0x18);
          fVar15 = *(float *)(lVar7 + 0x4c) - fVar15;
        }
        else {
          if (cRam0000000005c24e32 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c24e32 = '\x01';
          }
          if (*(long *)(param_4 + 0x60) == 0) goto LAB_0271532c;
          uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
          param_3 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
          UnityEngine_Transform__get_localEulerAngles_4092e84(*(long *)(param_4 + 0x60),0);
          lVar7 = *(long *)(param_4 + 0x20);
          fVar13 = 180.0;
          if (180.0 <= fVar14) {
            fVar13 = 360.0;
          }
          if (lVar7 == 0) goto LAB_0271532c;
          uStack_e0 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar13,(float)uVar16 * fVar13);
          param_3 = param_3 * fVar13;
          fVar18 = *(float *)(lVar7 + 0x18);
          fVar19 = *(float *)(lVar7 + 0x50);
          fVar15 = fVar15 - *(float *)(lVar7 + 0x44);
        }
        fVar14 = 360.0;
        fVar13 = fVar18 - fVar15;
        fVar19 = fVar19 + (fVar13 - fVar18);
      }
      else {
        if (cRam0000000005c24e32 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c24e32 = '\x01';
        }
        if (*(long *)(param_4 + 0x60) == 0) goto LAB_0271532c;
        uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
        param_3 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
        UnityEngine_Transform__get_localEulerAngles_4092e84(*(long *)(param_4 + 0x60),0);
        lVar7 = *(long *)(param_4 + 0x20);
        fVar13 = 360.0;
        if (180.0 <= fVar14) {
          fVar13 = 540.0;
        }
        if (lVar7 == 0) goto LAB_0271532c;
        uStack_e0 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar13,(float)uVar16 * fVar13);
        param_3 = param_3 * fVar13;
        fVar14 = 720.0;
        fVar13 = (*(float *)(lVar7 + 0x18) + *(float *)(lVar7 + 0x44)) - fVar15;
        fVar19 = *(float *)(lVar7 + 0x50) + (fVar13 - *(float *)(lVar7 + 0x18));
      }
      fVar18 = 0.0;
    }
LAB_02714ec0:
    if (*plVar8 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar8,0,0);
    }
  }
  puVar3 = PTR_DAT_057bcc80;
  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar16 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *(undefined8 *)(param_4 + 0xc0) = uVar16;
  FUN_012d0d74(plVar8,uVar16);
  uVar11 = *(undefined8 *)(param_4 + 0xc0);
  uVar16 = DG_Tweening_ShortcutExtensions__DOLocalRotate_1ee610c
                     (uStack_e0,uStack_e0 >> 0x20,param_3,fVar13,*(undefined8 *)(param_4 + 0x60),1,0
                     );
  uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                    (uVar16,uVar9,*(undefined8 *)puVar3);
  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar18,uVar11,uVar9,0);
  puVar5 = PTR_DAT_05801c30;
  puVar4 = PTR_DAT_057fbae0;
  puVar2 = PTR_DAT_057936b8;
  puVar1 = PTR_DAT_057606c8;
  if (*(long *)(param_4 + 0xb0) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&fStack_d0,*(long *)(param_4 + 0xb0),*(undefined8 *)PTR_DAT_0579f3e8);
    uStack_b0 = CONCAT44(uStack_cc,fStack_d0);
    uStack_a8 = uStack_c8;
    uStack_a0 = uStack_c0;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_b0,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar16 = *(undefined8 *)(param_4 + 0xc0);
      uVar9 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                        (0,*(undefined4 *)(*(long *)(param_4 + 0x20) + 0x54),uStack_a0,0);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar18,uVar16,uVar9,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_b0,*(undefined8 *)puVar2);
    lVar10 = *plVar8;
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar7 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_4,*(undefined8 *)puVar5,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar18,lVar10,lVar7,0);
      uVar9 = *(undefined8 *)(param_4 + 0xc0);
      uVar16 = *(undefined8 *)(param_4 + 0x78);
      if (cRam0000000005c24e32 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c24e32 = '\x01';
      }
      lVar7 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar16 = DG_Tweening_ShortcutExtensions__DORotate_1ee5d7c
                         (fVar14 * *(float *)(lVar7 + 0x48),fVar14 * *(float *)(lVar7 + 0x4c),
                          fVar14 * *(float *)(lVar7 + 0x50),fVar17,uVar16,1,0);
      uVar12 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                         (uVar16,uVar12,*(undefined8 *)puVar3);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar18,uVar9,uVar12,0);
      lVar10 = *plVar8;
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar7 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_4,*(undefined8 *)PTR_DAT_057f6610,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar19,lVar10,lVar7,0);
        if (*(long *)(param_4 + 0x20) != 0) {
          uVar9 = *(undefined8 *)(param_4 + 0xc0);
          fVar13 = *(float *)(*(long *)(param_4 + 0x20) + 0x18);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar7 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar7,param_4,*(undefined8 *)PTR_DAT_057fed00,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                      (fVar18 + fVar13,uVar9,lVar7,0);
            if (*(long *)(param_4 + 0xb0) != 0) {
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&fStack_d0,*(long *)(param_4 + 0xb0),*(undefined8 *)PTR_DAT_0579f3e8);
              uStack_b0 = CONCAT44(uStack_cc,fStack_d0);
              uStack_a8 = uStack_c8;
              uStack_a0 = uStack_c0;
              while( true ) {
                uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_b0,*(undefined8 *)puVar4);
                if ((uVar6 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_b0,*(undefined8 *)puVar2);
                  return;
                }
                lVar7 = *(long *)(param_4 + 0x20);
                if (lVar7 == 0) break;
                uVar12 = *(undefined8 *)(param_4 + 0xc0);
                fVar13 = *(float *)(lVar7 + 0x58);
                uVar9 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                  (0x3f800000,*(undefined4 *)(lVar7 + 0x54),uStack_a0,0);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar18 + fVar13,uVar12,uVar9,0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
        }
      }
    }
  }
LAB_0271532c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

