/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlaySafeDestroyAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlaySafeDestroyAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this, System_Collections_Generic_List_BottleItem__o* belongingBottles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02716fb0) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeView$$PlaySafeDestroyAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlaySafeDestroyAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView_o* __this,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeView__PlaySafeDestroyAnimation_2616854
          (undefined1 param_1 [16],float param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar2 = PTR_DAT_057b3470;
  if ((bRam0000000005c2ba2f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_0576d7b0);
    FUN_012d0dc8(PTR_DAT_057b3470);
    FUN_012d0dc8(PTR_DAT_057b5d20);
    FUN_012d0dc8(PTR_DAT_05762230);
    FUN_012d0dc8(PTR_DAT_0576ed08);
    FUN_012d0dc8(PTR_DAT_05796560);
    FUN_012d0dc8(PTR_DAT_05781310);
    FUN_012d0dc8(PTR_DAT_0575b470);
    bRam0000000005c2ba2f = 1;
  }
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(long *)(lVar5 + 0x10) = (long)param_3;
    FUN_012d0d74((long *)(lVar5 + 0x10),param_3);
    plVar17 = (long *)(lVar5 + 0x20);
    *plVar17 = param_3[4];
    FUN_012d0d74(plVar17);
    puVar1 = PTR_DAT_057fc1d0;
    puVar2 = PTR_DAT_057815e0;
    if ((param_4 != 0) && (param_3[4] != 0)) {
      lVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig__GetSafeConfigsForSize_26138c4
                        (param_3[4],*(int *)(param_4 + 0x18) + -1);
      *(int *)(lVar5 + 0x18) = *(int *)(param_4 + 0x18) + -1;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
      uVar8 = UnityEngine_Component__get_gameObject_408b480(param_3,0);
      uVar7 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                        (uVar7,uVar8,*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_057606c8;
      if (lVar6 != 0) {
        uVar20 = *(undefined4 *)(lVar6 + 0x10);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
        puVar4 = PTR_DAT_057a7f80;
        puVar3 = PTR_DAT_05768d80;
        puVar1 = PTR_DAT_0575b470;
        if (lVar9 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,lVar5,*(undefined8 *)PTR_DAT_0576d7b0,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar20,uVar7,lVar9,0);
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_d8,param_4,*(undefined8 *)puVar3);
          puVar3 = PTR_DAT_05805c10;
          fVar23 = 0.0;
          uStack_98 = uStack_d0;
          uStack_a0 = uStack_d8;
          lStack_90 = lStack_c8;
          while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_a0,*(undefined8 *)PTR_DAT_057b41c8), (uVar10 & 1) != 0)
          {
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576ed08);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            System_Object___ctor_23dfe5c(lVar9,0);
            plVar18 = (long *)(lVar9 + 0x18);
            *plVar18 = lVar5;
            FUN_012d0d74(plVar18,lVar5);
            plVar19 = (long *)(lVar9 + 0x10);
            *plVar19 = lStack_90;
            FUN_012d0d74(plVar19);
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            plVar11 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                        (*plVar19,0);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0575a2d8) {
                  puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
                  fVar22 = param_2;
                  goto LAB_02716be4;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_0575a2d8,0xb);
            fVar22 = param_2;
LAB_02716be4:
            lVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0271715c to 02817167 has its CatchHandler @ 02717168 */
              FUN_012d0ef0();
            }
            UnityEngine_Transform__get_localPosition_4092c40(lVar13,0);
            fVar21 = *(float *)(lVar6 + 0x14);
            lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar13,lVar9,*(undefined8 *)PTR_DAT_057b5d20,0)
            ;
            fVar21 = fVar23 + fVar21;
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar21,uVar7,lVar13,0);
            lVar13 = *plVar19;
            if (cRam0000000005c230a9 == '\0') {
              FUN_012d0dc8(puVar3);
              cRam0000000005c230a9 = '\x01';
            }
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar14 = *(long *)(*plVar18 + 0x20);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 027170d8 with catch @ 02717168
                       catch(type#1 @ 054cbd58) { ... } // from try @ 0271715c with catch @ 02717168
                       try { // try from 02717168 to 0281717f has its CatchHandler @ 02717084 */
              FUN_012d0ef0();
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar15 = *(long *)(*(long *)puVar3 + 0xb8);
            uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleScale_249e454
                              (*(undefined4 *)(lVar15 + 0xc),*(undefined4 *)(lVar15 + 0x10),
                               *(undefined4 *)(lVar15 + 0x14),*(undefined4 *)(lVar14 + 0x68),lVar13,
                               *(undefined8 *)(lVar14 + 0x70),0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar7,uVar8,0);
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *(long *)(*plVar18 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleShakeRotation_249e578
                              (*(undefined4 *)(lVar13 + 0x90),*(undefined4 *)(lVar13 + 0x84),
                               *(undefined4 *)(lVar13 + 0x88),*(undefined4 *)(lVar13 + 0x8c),
                               0x42340000,*plVar19,*(undefined4 *)(lVar13 + 0x94),0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar7,uVar8,0);
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *(long *)(*plVar18 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02717180 to 02817197 has its CatchHandler @ 02717204 */
              FUN_012d0ef0();
            }
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            param_2 = *(float *)(lVar13 + 0xa4);
            uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleDoLocalMoveY_249e864
                              (fVar22 + *(float *)(lVar13 + 0xa0),*plVar19,
                               *(undefined8 *)(lVar13 + 0xa8),0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar7,uVar8,0);
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *(long *)(*plVar18 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            fVar22 = *(float *)(lVar13 + 0x9c);
            lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar13,lVar9,*(undefined8 *)PTR_DAT_05762230,0)
            ;
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                      (fVar21 + fVar22,uVar7,lVar13,0);
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar13 = *(long *)(*plVar18 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02717198 to 028171f3 has its CatchHandler @ 02717084 */
              FUN_012d0ef0();
            }
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            lVar14 = *(long *)(*plVar19 + 0x88);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            fVar22 = *(float *)(lVar13 + 0x98);
                    /* try { // try from 02716db4 to 02816e0b has its CatchHandler @ 02716db4
                       catch() { ... } // from try @ 02716db4 with catch @ 02716db4
                       catch() { ... } // from try @ 02716e84 with catch @ 02716db4
                       catch() { ... } // from try @ 02716eb4 with catch @ 02716db4
                       catch() { ... } // from try @ 02716f28 with catch @ 02716db4 */
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_d8,lVar14,*(undefined8 *)PTR_DAT_057b7918);
            fVar23 = fVar23 + fVar22;
            uStack_b8 = uStack_d0;
            uStack_c0 = uStack_d8;
            lStack_b0 = lStack_c8;
            while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_c0,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
              lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              System_Object___ctor_23dfe5c(lVar13,0);
                    /* try { // try from 02716e0c to 02816e83 has its CatchHandler @ 02716e84 */
              plVar19 = (long *)(lVar13 + 0x18);
              *plVar19 = lVar9;
              FUN_012d0d74(plVar19,lVar9);
              plVar11 = (long *)(lVar13 + 0x10);
              *plVar11 = lStack_b0;
              FUN_012d0d74(plVar11);
              plVar18 = (long *)*plVar11;
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              uVar10 = (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
              if ((uVar10 & 1) == 0) {
                plVar18 = (long *)*plVar11;
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                uVar10 = (**(code **)(*plVar18 + 0x418))(plVar18,*(undefined8 *)(*plVar18 + 0x420));
                if ((uVar10 & 1) == 0) {
                  lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 02716eb4 to 02816f0f has its CatchHandler @ 02716db4 */
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar14,lVar13,*(undefined8 *)PTR_DAT_05796560,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar21,uVar7,lVar14,0)
                  ;
                  if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  uVar8 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                    (*plVar11,0);
                  if (cRam0000000005c230a9 == '\0') {
                    FUN_012d0dc8(puVar3);
                    /* try { // try from 02716f10 to 02816f1f has its CatchHandler @ 02716f20 */
                    cRam0000000005c230a9 = '\x01';
                  }
                  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                    /* catch() { ... } // from try @ 02716e9c with catch @ 02716f20
                       catch() { ... } // from try @ 02716f10 with catch @ 02716f20 */
                  lVar13 = *(long *)(*plVar19 + 0x18);
                    /* try { // try from 02716f24 to 02816f27 has its CatchHandler @ 02716f30 */
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                    /* try { // try from 02716f28 to 02816f33 has its CatchHandler @ 02716db4 */
                  lVar13 = *(long *)(lVar13 + 0x20);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02716f24 with catch @ 02716f30
                        */
                  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
                  param_2 = *(float *)(lVar14 + 0x10);
                  uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                                    (*(undefined4 *)(lVar14 + 0xc),param_2,
                                     *(undefined4 *)(lVar14 + 0x14),*(undefined4 *)(lVar13 + 0x68),
                                     uVar8,0);
                  if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(*plVar19 + 0x18);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  lVar13 = *(long *)(lVar13 + 0x20);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  uVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar8,*(undefined8 *)(lVar13 + 0x70),
                                     *(undefined8 *)PTR_DAT_057874c0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar21,uVar7,uVar8,0);
                }
                else {
                  lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02716e0c with catch @ 02716e84
                       try { // try from 02716e84 to 02816e9b has its CatchHandler @ 02716db4 */
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar14,lVar13,*(undefined8 *)PTR_DAT_05781310,0);
                    /* try { // try from 02716e9c to 02816eb3 has its CatchHandler @ 02716f20 */
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar21,uVar7,lVar14,0)
                  ;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_c0,*(undefined8 *)PTR_DAT_057605b8);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_a0,*(undefined8 *)PTR_DAT_057d0ba8);
          if (*plVar17 != 0) {
            uVar20 = *(undefined4 *)(*plVar17 + 0xb0);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if ((lVar5 != 0) && (param_3 != (long *)0x0)) {
                    /* try { // try from 027170d8 to 0281712b has its CatchHandler @ 02717168 */
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar5,param_3,*(undefined8 *)(*param_3 + 0x1d0),0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar20,uVar7,lVar5,0);
              return uVar7;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

