/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$PlayProgressAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayProgressAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, int32_t remainingCount, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$PlayProgressAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayProgressAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, int32_t remainingCount,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__PlayProgressAnimation_2f5e938
               (long param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  
  puVar2 = PTR_DAT_057ac6b8;
  if ((bRam0000000005c308ef & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05811dd0);
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* try { // try from 0305e99c to 0315e99f has its CatchHandler @ 0305f064 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057606c8);
                    /* try { // try from 0305e9b8 to 0315e9cb has its CatchHandler @ 0305f080 */
    FUN_012d0dc8(PTR_DAT_057efb20);
    FUN_012d0dc8(PTR_DAT_057f37e0);
    FUN_012d0dc8(PTR_DAT_057ac6b8);
    bRam0000000005c308ef = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 0305e9e4 to 0315e9eb has its CatchHandler @ 0305f07c */
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar4 + 0x10),param_1);
    iVar1 = *(int *)(param_1 + 0x88);
    if (param_2 <= *(int *)(param_1 + 0x88)) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 0x88) = iVar1;
    if ((param_4 != 0) &&
       (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (param_4,0), puVar2 = PTR_DAT_0575a2d8, plVar5 != (long *)0x0)) {
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0305ea80;
          }
                    /* try { // try from 0305ea58 to 0315ea63 has its CatchHandler @ 0305f078 */
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,0);
LAB_0305ea80:
                    /* try { // try from 0305ea84 to 0315eb13 has its CatchHandler @ 0305f090 */
      fVar12 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((param_3 != 0) &&
         (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                     (param_3,0), plVar5 != (long *)0x0)) {
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0305eaf4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_0305eaf4:
        fVar13 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (cRam0000000005c23465 == '\0') {
          FUN_012d0dc8(PTR_DAT_05764ae0);
          cRam0000000005c23465 = '\x01';
        }
                    /* try { // try from 0305eb34 to 0315ebc3 has its CatchHandler @ 0305f08c */
        fVar14 = ABS(fVar12);
        if (ABS(fVar12) <= ABS(fVar13)) {
          fVar14 = ABS(fVar13);
        }
        fVar16 = **(float **)(*(long *)PTR_DAT_05764ae0 + 0xb8) * 8.0;
        fVar17 = fVar14 * _LAB_04321df0;
        if (fVar14 * _LAB_04321df0 <= fVar16) {
          fVar17 = fVar16;
        }
        plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (param_4,0);
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0305ebc4;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_0305ebc4:
          (*(code *)*puVar6)(plVar5,puVar6[1]);
          plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                     (param_3,0);
          if (plVar5 != (long *)0x0) {
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0305ec34;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_0305ec34:
                    /* try { // try from 0305ec38 to 0315ec3b has its CatchHandler @ 0305f074 */
            (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (cRam0000000005c23465 == '\0') {
              FUN_012d0dc8(PTR_DAT_05764ae0);
              cRam0000000005c23465 = '\x01';
            }
            if (fVar17 <= ABS(fVar13 - fVar12)) {
              plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                         (param_4,0);
              if (plVar5 == (long *)0x0) goto LAB_0305ef00;
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* try { // try from 0305ed0c to 0315ed13 has its CatchHandler @ 0305f06c */
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0305ed10;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_0305ed10:
              fVar12 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 0305ed28 to 0315ed8f has its CatchHandler @ 0305f094 */
              plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                         (param_3,0);
              if (plVar5 == (long *)0x0) goto LAB_0305ef00;
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0305ed80;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_0305ed80:
              fVar13 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
              bVar8 = fVar13 < fVar12;
            }
            else {
              fVar12 = (float)UnityEngine_Random__get_value_383a5ac(0);
                    /* try { // try from 0305eca0 to 0315eca7 has its CatchHandler @ 0305f070 */
              bVar8 = fVar12 < 0.5;
            }
            *(bool *)(lVar4 + 0x18) = bVar8;
            puVar3 = PTR_DAT_057815e0;
            puVar2 = PTR_DAT_057606c8;
            if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 0305edb0 to 0315ee3f has its CatchHandler @ 0305f088 */
              uVar15 = UnityEngine_Random__Range_383a610
                                 (0,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x44),0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_0130472c();
              }
              lVar9 = DG_Tweening_DOTween__Sequence_1eda154(0);
              DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar15,lVar9,0);
              uVar15 = Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView__StartTrailMove_2f5fe38
                                 (param_1,param_3);
              DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar9,uVar15,0);
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              if (lVar7 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar7,param_1,*(undefined8 *)PTR_DAT_05811dd0,0);
                DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar9,lVar7,0);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                if (lVar7 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar7,lVar4,*(undefined8 *)PTR_DAT_057efb20,0);
                  DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar9,lVar7,0);
                  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  if (lVar7 != 0) {
                    /* try { // try from 0305eea4 to 0315eeaf has its CatchHandler @ 0305f068 */
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar7,lVar4,*(undefined8 *)PTR_DAT_057f37e0,0);
                    DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(lVar9,lVar7,0);
                    puVar2 = PTR_DAT_0575c420;
                    /* try { // try from 0305eed0 to 0315ef63 has its CatchHandler @ 0305f084 */
                    if ((bRam0000000005c308f3 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057606c8);
                      FUN_012d0dc8(PTR_DAT_057b83c8);
                      FUN_012d0dc8(PTR_DAT_0575c420);
                      bRam0000000005c308f3 = 1;
                    }
                    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    puVar2 = PTR_DAT_057606c8;
                    if (lVar4 != 0) {
                      System_Object___ctor_23dfe5c(lVar4,0);
                      *(long *)(lVar4 + 0x10) = param_4;
                      FUN_012d0d74((long *)(lVar4 + 0x10),param_4);
                      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                      if (lVar7 != 0) {
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar7,lVar4,*(undefined8 *)PTR_DAT_057b83c8,0);
                        uVar10 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                           (lVar9,0,1);
                        if ((lVar7 != 0) && ((uVar10 & 1) != 0)) {
                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          DG_Tweening_Sequence__DoInsertCallback_1edffe8
                                    (*(undefined4 *)(lVar9 + 0xa0),lVar9,lVar7);
                        }
                        return lVar9;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0305ef00:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

