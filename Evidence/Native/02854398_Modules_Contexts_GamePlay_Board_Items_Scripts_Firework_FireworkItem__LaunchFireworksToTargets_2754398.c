/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$LaunchFireworksToTargets
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__LaunchFireworksToTargets (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$LaunchFireworksToTargets
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__LaunchFireworksToTargets
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__LaunchFireworksToTargets_2754398
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c2c713 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f8be0);
    FUN_012d0dc8(PTR_DAT_05769b20);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_058078b8);
    FUN_012d0dc8(PTR_DAT_0577ef98);
    bRam0000000005c2c713 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar5 = PTR_DAT_058078b8;
  puVar4 = PTR_DAT_0577ef98;
  puVar3 = PTR_DAT_05769b20;
  puVar2 = PTR_DAT_057606c8;
  lVar12 = *(long *)(param_1 + 0x68);
  if (lVar12 != 0) {
    iVar14 = 0;
    fVar17 = 0.0;
    while (iVar14 < *(int *)(lVar12 + 0x18)) {
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (lVar12 == 0) goto LAB_028545dc;
      System_Object___ctor_23dfe5c(lVar12,0);
      *(long *)(lVar12 + 0x18) = param_1;
      FUN_012d0d74((long *)(lVar12 + 0x18),param_1);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_028545dc;
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x68),iVar14,*(undefined8 *)puVar3);
      plVar15 = (long *)(lVar12 + 0x10);
      *plVar15 = lVar7;
      FUN_012d0d74(plVar15,lVar7);
      if (*plVar15 != 0) {
        lVar7 = *(long *)(*plVar15 + 0x18);
        if (lVar7 == 0) goto LAB_028545dc;
        uVar8 = Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__HasQuestionMark_1e90fb4(lVar7,0)
        ;
        if ((uVar8 & 1) != 0) {
          lVar7 = *(long *)(param_1 + 0x48);
          if ((((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) || (*plVar15 == 0)) ||
             ((lVar13 = *(long *)(*plVar15 + 0x18), lVar13 == 0 ||
              (plVar15 = *(long **)(lVar13 + 0x28), plVar15 == (long *)0x0)))) goto LAB_028545dc;
          fVar17 = fVar17 + *(float *)(*(long *)(lVar7 + 0x20) + 0x1c);
          (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
          uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__SendFireworkToTarget_27545e8
                            (lVar7);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(fVar17,uVar6,uVar9,0);
          fVar16 = (float)DG_Tweening_TweenExtensions__Duration_1edeccc(uVar9,1,0);
          if ((*(long *)(param_1 + 0x48) == 0) ||
             (lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar7 == 0)) goto LAB_028545dc;
          fVar18 = *(float *)(lVar7 + 0x2c);
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar7 == 0) goto LAB_028545dc;
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,lVar12,*(undefined8 *)puVar5,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                    ((fVar17 + fVar16) - fVar18,uVar6,lVar7,0);
        }
      }
      lVar12 = *(long *)(param_1 + 0x68);
      iVar14 = iVar14 + 1;
      if (lVar12 == 0) goto LAB_028545dc;
    }
    lVar12 = *(long *)(param_1 + 0x48);
    if (lVar12 != 0) {
      if ((bRam0000000005c2c71c & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057db908);
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_05760e48);
        FUN_012d0dc8(PTR_DAT_057abea0);
        bRam0000000005c2c71c = 1;
      }
      puVar5 = PTR_DAT_057db908;
      puVar4 = PTR_DAT_057abea0;
      puVar3 = PTR_DAT_05760e48;
      puVar2 = PTR_DAT_057606c8;
      uVar1 = _UNK_0434ccf4;
      lVar7 = *(long *)(lVar12 + 0x28);
      if (lVar7 == 0) goto LAB_02854f38;
      if (*(int *)(lVar7 + 0x18) < 1) {
        return;
      }
      uVar8 = 0;
      goto LAB_02854e44;
    }
  }
LAB_028545dc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
LAB_02854e44:
  lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar13 == 0) {
LAB_02854f38:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Object___ctor_23dfe5c(lVar13,0);
  if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  plVar15 = (long *)(lVar13 + 0x10);
  *plVar15 = *(long *)(lVar7 + 0x20 + uVar8 * 8);
  FUN_012d0d74(plVar15);
  if (*(long *)(lVar12 + 0x58) == 0) goto LAB_02854f38;
  uVar10 = System_Collections_Generic_List_object___Contains_21fce6c
                     (*(long *)(lVar12 + 0x58),*plVar15,*(undefined8 *)puVar5);
  if ((uVar10 & 1) == 0) {
    if (((*plVar15 == 0) || (lVar11 = *(long *)(*plVar15 + 0x10), lVar11 == 0)) ||
       (lVar11 = UnityEngine_Component__get_gameObject_408b480(lVar11,0), lVar11 == 0))
    goto LAB_02854f38;
    uVar10 = UnityEngine_GameObject__get_activeInHierarchy_408e398(lVar11,0);
    if ((uVar10 & 1) != 0) {
      if ((*plVar15 == 0) || (lVar11 = *(long *)(*plVar15 + 0x30), lVar11 == 0)) goto LAB_02854f38;
      UnityEngine_ParticleSystem__Play_3abc5c8(lVar11,0);
      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar11 == 0) goto LAB_02854f38;
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar11,lVar13,*(undefined8 *)puVar3,0);
      DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar1,lVar11,1,0);
    }
  }
  uVar8 = uVar8 + 1;
  if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar8) {
    return;
  }
  goto LAB_02854e44;
}

