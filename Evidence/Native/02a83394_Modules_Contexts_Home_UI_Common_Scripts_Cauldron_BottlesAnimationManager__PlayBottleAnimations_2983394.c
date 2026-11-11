/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottlesAnimationManager$$PlayBottleAnimations
DG_Tweening_Tween_o* Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__PlayBottleAnimations (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager_o* __this, int32_t bottleCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.UI.Common.Scripts.Cauldron.BottlesAnimationManager$$PlayBottleAnimations
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__PlayBottleAnimations
   (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager_o* __this, int32_t
   bottleCount, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__PlayBottleAnimations_2983394
          (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000005c2d776 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c2f78);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f4510);
    FUN_012d0dc8(PTR_DAT_057da628);
    FUN_012d0dc8(PTR_DAT_05792828);
    FUN_012d0dc8(PTR_DAT_05814ca0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05810db0);
    FUN_012d0dc8(PTR_DAT_05795e80);
    bRam0000000005c2d776 = 1;
  }
  puVar1 = PTR_DAT_057815e0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  if (param_2 < 9) {
    plVar10 = (long *)(param_1 + 0x18);
  }
  else if (param_2 < 0xc) {
    plVar10 = (long *)(param_1 + 0x20);
  }
  else {
    plVar10 = (long *)(param_1 + 0x28);
  }
  plVar11 = (long *)(param_1 + 0x30);
  *plVar11 = *plVar10;
  FUN_012d0d74(plVar11);
  Modules_Contexts_Home_UI_Common_Scripts_Cauldron_BottlesAnimationManager__SetIdle_29836c8(param_1)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar6 = PTR_DAT_05810db0;
  puVar5 = PTR_DAT_057f4510;
  puVar4 = PTR_DAT_057da628;
  puVar3 = PTR_DAT_057c2f78;
  puVar2 = PTR_DAT_05795e80;
  puVar1 = PTR_DAT_057606c8;
  if (*plVar11 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_98,*plVar11,*(undefined8 *)PTR_DAT_05814ca0);
    fVar14 = 0.0;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = uStack_88;
    while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_80,*(undefined8 *)puVar4), uVar13 = uStack_70,
          (uVar8 & 1) != 0) {
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,uVar13,*(undefined8 *)puVar3,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar14,uVar7,lVar9,0);
      fVar14 = fVar14 + *(float *)(param_1 + 0x38);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar5);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar9);
      lVar9 = *(long *)puVar2;
    }
    lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar9);
        lVar9 = *(long *)puVar2;
      }
      uVar13 = **(undefined8 **)(lVar9 + 0xb8);
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar12 == 0) goto LAB_02a83628;
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar12,uVar13,*(undefined8 *)puVar6,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar10 = lVar12;
      FUN_012d0d74(plVar10,lVar12);
    }
    DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_04339be0,lVar12,1,0);
    return uVar7;
  }
LAB_02a83628:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

