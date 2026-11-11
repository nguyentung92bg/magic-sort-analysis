/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySit
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySit (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t snitchIndex, Modules_Infrastructure_Common_Scripts_Component_AItem_o* targetItem, Modules_Contexts_GamePlay_Board_Common_Scripts_SnitchSpawnInfo_o* spawnInfo, bool hasValidBlockerForSitFx, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySit
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySit
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t
   snitchIndex, Modules_Infrastructure_Common_Scripts_Component_AItem_o* targetItem,
   Modules_Contexts_GamePlay_Board_Common_Scripts_SnitchSpawnInfo_o* spawnInfo, bool
   hasValidBlockerForSitFx, System_Action_o* onComplete, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySit_260ffcc
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,int param_5,
          long *param_6,long param_7,byte param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  puVar4 = PTR_DAT_057b19a0;
  if ((bRam0000000005c2b9fe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_0580b168);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_05810880);
    FUN_012d0dc8(PTR_DAT_057ef528);
    FUN_012d0dc8(PTR_DAT_057b19a0);
    FUN_012d0dc8(PTR_DAT_05760c20);
    bRam0000000005c2b9fe = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar8 != 0) {
    System_Object___ctor_23dfe5c(lVar8,0);
    *(long *)(lVar8 + 0x10) = param_4;
    FUN_012d0d74((long *)(lVar8 + 0x10),param_4);
    *(undefined8 *)(lVar8 + 0x28) = param_9;
    *(byte *)(lVar8 + 0x24) = param_8 & 1;
    FUN_012d0d74((undefined8 *)(lVar8 + 0x28),param_9);
    puVar4 = PTR_DAT_05760c20;
    if (param_6 != (long *)0x0) {
      uVar12 = (**(code **)(*param_6 + 0x1b8))(param_6,*(undefined8 *)(*param_6 + 0x1c0));
      *(undefined4 *)(lVar8 + 0x18) = uVar12;
      *(undefined4 *)(lVar8 + 0x1c) = param_2;
      *(undefined4 *)(lVar8 + 0x20) = param_3;
      puVar5 = PTR_DAT_05805c10;
      bVar3 = *(byte *)(*(long *)puVar4 + 300);
      if ((bVar3 <= *(byte *)(*param_6 + 300)) &&
         (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)puVar4)) {
        if (*(long *)(param_4 + 0x38) == 0) goto LAB_02710488;
        fVar13 = (float)Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetWaterHeightOffsetsForSnitch_20fa364
                                  (*(long *)(param_4 + 0x38),(int)param_6[8],0);
        *(ulong *)(lVar8 + 0x18) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) + fVar13,
                      (float)*(undefined8 *)(lVar8 + 0x18) + 0.0);
        *(float *)(lVar8 + 0x20) = *(float *)(lVar8 + 0x20) + 0.0;
        if ((param_7 == 0) || (lVar9 = *(long *)(param_7 + 0x18), lVar9 == 0)) goto LAB_02710488;
        if (1 < *(int *)(lVar9 + 0x40)) {
          lVar11 = *(long *)(param_7 + 0x20);
          if ((lVar11 == 0) || (*(long *)(param_7 + 0x10) == 0)) goto LAB_02710488;
          uVar16 = *(undefined8 *)(lVar11 + 0x10);
          fVar17 = *(float *)(lVar11 + 0x18);
          fVar13 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBottomPivotPosition_1e9e5a0
                                    (lVar9,*(undefined4 *)(*(long *)(param_7 + 0x10) + 0x48),0);
          if (cRam0000000005c230ac == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230ac = '\x01';
          }
          lVar9 = *(long *)(*(long *)puVar5 + 0xb8);
          uVar15 = *(undefined8 *)(lVar9 + 0x18);
          fVar14 = *(float *)(lVar9 + 0x20);
          *(ulong *)(lVar8 + 0x18) =
               CONCAT44(((float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar15 >> 0x20) * fVar13) +
                        (float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20),
                        ((float)uVar16 - (float)uVar15 * fVar13) +
                        (float)*(undefined8 *)(lVar8 + 0x18));
          *(float *)(lVar8 + 0x20) = (fVar17 - fVar13 * fVar14) + *(float *)(lVar8 + 0x20);
        }
      }
      puVar4 = PTR_DAT_057fc1d0;
      if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar16 = DG_Tweening_DOTween__Sequence_1eda154(0);
      uVar15 = UnityEngine_Component__get_gameObject_408b480(param_4,0);
      uVar16 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                         (uVar16,uVar15,*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_057606c8;
      lVar9 = *(long *)(param_4 + 0x38);
      if (lVar9 != 0) {
        bVar7 = param_5 != 0;
        lVar11 = 0x168;
        if (bVar7) {
          lVar11 = 0x174;
        }
        lVar1 = 0x164;
        if (bVar7) {
          lVar1 = 0x170;
        }
        lVar2 = 0x160;
        if (bVar7) {
          lVar2 = 0x16c;
        }
        uVar15 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchSitDynamicDuration_260f2e8
                           (*(undefined4 *)(lVar9 + lVar2),*(undefined4 *)(lVar9 + lVar1),
                            *(undefined4 *)(lVar9 + lVar11),*(undefined4 *)(lVar8 + 0x18),
                            *(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar8 + 0x20),param_4);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        puVar6 = PTR_DAT_05818d48;
        if (lVar9 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,lVar8,*(undefined8 *)PTR_DAT_05810880,0);
          DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0
                    (uVar16,lVar9,*(undefined8 *)puVar6);
          lVar9 = *(long *)(param_4 + 0x38);
          if (lVar9 != 0) {
            uVar10 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySwayIntensity_260f504
                               (*(undefined4 *)(lVar9 + 0x1b8),0,param_4,
                                *(undefined8 *)(lVar9 + 0x2d8));
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar16,uVar10,0);
            uVar10 = UnityEngine_Component__get_transform_408b444(param_4,0);
            lVar9 = *(long *)(param_4 + 0x38);
            if (lVar9 != 0) {
              fVar13 = *(float *)(lVar9 + 0x1bc);
              if (cRam0000000005c230a9 == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230a9 = '\x01';
                lVar9 = *(long *)(param_4 + 0x38);
                if (lVar9 == 0) goto LAB_02710488;
              }
              lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
              uVar10 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                 (fVar13 * *(float *)(lVar11 + 0xc),
                                  fVar13 * *(float *)(lVar11 + 0x10),
                                  fVar13 * *(float *)(lVar11 + 0x14),*(undefined4 *)(lVar9 + 0x3c4),
                                  uVar10,0);
              if (*(long *)(param_4 + 0x38) != 0) {
                uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                   (uVar10,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x1c8),
                                    *(undefined8 *)PTR_DAT_057874c0);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar16,uVar10,0);
                uVar10 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitMovePath_2610494
                                   (*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
                                    *(undefined4 *)(lVar8 + 0x20),param_4,param_5);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar16,uVar10,0);
                if (*(char *)(lVar8 + 0x24) != '\0') {
                  uVar10 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                                     (0,uVar15,*(undefined8 *)(param_4 + 0x78),0);
                  if (*(long *)(param_4 + 0x38) == 0) goto LAB_02710488;
                  uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                     (uVar10,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x210),
                                      *(undefined8 *)PTR_DAT_0580b168);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar16,uVar10,0);
                }
                lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                if (lVar9 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar9,lVar8,*(undefined8 *)PTR_DAT_057ef528,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar15,uVar16,lVar9,0)
                  ;
                  return uVar16;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02710488:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

