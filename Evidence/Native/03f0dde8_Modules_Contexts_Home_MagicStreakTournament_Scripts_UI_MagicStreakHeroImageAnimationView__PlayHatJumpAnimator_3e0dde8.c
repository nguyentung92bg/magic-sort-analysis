/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakHeroImageAnimationView$$PlayHatJumpAnimator
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__PlayHatJumpAnimator (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakHeroImageAnimationView$$PlayHatJumpAnimator
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__PlayHatJumpAnimator
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__PlayHatJumpAnimator_3e0dde8
               (long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar9 = PTR_DAT_057815e0;
  if ((bRam0000000005c38066 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_0580af70);
    FUN_012d0dc8(PTR_DAT_057f9758);
    FUN_012d0dc8(PTR_DAT_057fb658);
    FUN_012d0dc8(PTR_DAT_0580e588);
    FUN_012d0dc8(PTR_DAT_0575f658);
    FUN_012d0dc8(PTR_DAT_057690c0);
    FUN_012d0dc8(PTR_DAT_057c4090);
    FUN_012d0dc8(PTR_DAT_057912b8);
    FUN_012d0dc8(PTR_DAT_057c3c28);
    FUN_012d0dc8(PTR_DAT_057cfb88);
    FUN_012d0dc8(PTR_DAT_057f8d20);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057afcd0);
    FUN_012d0dc8(PTR_DAT_057bae40);
    bRam0000000005c38066 = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar13 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar18 = (undefined8 *)(param_1 + 0x30);
  *puVar18 = uVar13;
  FUN_012d0d74(puVar18,uVar13);
  puVar9 = PTR_DAT_057cfb88;
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar11 = UnityEngine_Random__Range_383a650(1,*(int *)(*(long *)(param_1 + 0x20) + 0x18) + 1,0);
    lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar9);
    if (lVar14 != 0) {
      System_Collections_Generic_List_int____ctor_204e880(lVar14,*(undefined8 *)PTR_DAT_057c4090);
      puVar10 = PTR_DAT_0580e588;
      puVar9 = PTR_DAT_0575f658;
      iVar1 = *(int *)(lVar14 + 0x18);
      puVar3 = (undefined8 *)PTR_DAT_057606c8;
      puVar4 = (undefined8 *)PTR_DAT_057afcd0;
      puVar5 = (undefined8 *)PTR_DAT_057bae40;
      puVar6 = (undefined8 *)PTR_DAT_057f8d20;
      puVar7 = (undefined8 *)PTR_DAT_057f9758;
      puVar8 = (undefined8 *)PTR_DAT_0580af70;
      while (PTR_DAT_057606c8 = (undefined *)puVar3, PTR_DAT_057afcd0 = (undefined *)puVar4,
            PTR_DAT_057bae40 = (undefined *)puVar5, PTR_DAT_057f8d20 = (undefined *)puVar6,
            PTR_DAT_057f9758 = (undefined *)puVar7, PTR_DAT_0580af70 = (undefined *)puVar8,
            iVar1 < iVar11) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_03f0e180;
        uVar12 = UnityEngine_Random__Range_383a650
                           (0,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),0);
        uVar15 = System_Collections_Generic_List_int___Contains_204f550
                           (lVar14,uVar12,*(undefined8 *)puVar9);
        if ((uVar15 & 1) == 0) {
          lVar16 = *(long *)(lVar14 + 0x10);
          lVar17 = *(long *)puVar10;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_03f0e180;
          uVar2 = *(uint *)(lVar14 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar16 + (long)(int)uVar2 * 4 + 0x20) = uVar12;
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar14,uVar12);
          }
        }
        puVar3 = (undefined8 *)PTR_DAT_057606c8;
        puVar4 = (undefined8 *)PTR_DAT_057afcd0;
        puVar5 = (undefined8 *)PTR_DAT_057bae40;
        puVar6 = (undefined8 *)PTR_DAT_057f8d20;
        puVar7 = (undefined8 *)PTR_DAT_057f9758;
        puVar8 = (undefined8 *)PTR_DAT_0580af70;
        iVar1 = *(int *)(lVar14 + 0x18);
      }
      System_Collections_Generic_List_int___GetEnumerator_204fcb0
                (&uStack_a8,lVar14,*(undefined8 *)PTR_DAT_057690c0);
      fVar19 = 0.0;
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      uStack_80 = uStack_98;
      while (uVar15 = System_Collections_Generic_List_Enumerator_int___MoveNext_41d2ec0
                                (&uStack_90,*puVar7), (uVar15 & 1) != 0) {
        lVar14 = thunk_FUN_01320e48(*puVar5);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Object___ctor_23dfe5c(lVar14,0);
        *(long *)(lVar14 + 0x18) = param_1;
        FUN_012d0d74((long *)(lVar14 + 0x18),param_1);
        *(undefined4 *)(lVar14 + 0x10) = (undefined4)uStack_80;
        uVar13 = *puVar18;
        lVar16 = thunk_FUN_01320e48(*puVar3);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar16,lVar14,*puVar4,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar19,uVar13,lVar16,0);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        fVar19 = fVar19 + *(float *)(*(long *)(param_1 + 0x18) + 0x18);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose_41d2ebc(&uStack_90,*puVar8);
      uVar13 = *puVar18;
      lVar14 = thunk_FUN_01320e48(*puVar3);
      if (lVar14 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar14,param_1,*puVar6,0);
        DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                  (uVar13,lVar14,*(undefined8 *)PTR_DAT_0579e470);
        return;
      }
    }
  }
LAB_03f0e180:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

