/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$OnBottleWatersUpdated
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__OnBottleWatersUpdated (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* topWaterItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$OnBottleWatersUpdated
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__OnBottleWatersUpdated
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* topWaterItem, const MethodInfo*
   method); */

long * Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__OnBottleWatersUpdated_230c9a0
                 (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4,
                 long param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  if (param_4[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(param_4[0xb] + 0x20) != param_5) {
    return param_4;
  }
  if (((char)param_4[8] != '\0') || (*(char *)((long)param_4 + 0x89) != '\0')) {
    return param_4;
  }
  *(undefined1 *)(param_4 + 8) = 1;
  if (param_4[10] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__Complete_230ad34
            (_UNK_04321764,param_4[10],(char)param_4[0x11],0);
  if ((bRam0000000005c2a67c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057af900);
    FUN_012d0dc8(PTR_DAT_0579e5d0);
    bRam0000000005c2a67c = 1;
  }
  if ((param_4[10] != 0) && (lVar2 = *(long *)(param_4[10] + 0x48), lVar2 != 0)) {
    uVar9 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__GetKeyTargetPositionForBox_2608630
                      (lVar2,0);
    if ((param_4[0xc] != 0) &&
       (uVar11 = param_2, uVar12 = param_3,
       plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                  (param_4[0xc],0), puVar1 = PTR_DAT_0575a2d8, plVar3 != (long *)0x0
       )) {
      lVar2 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0240cb14;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575a2d8,0);
LAB_0240cb14:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      (**(code **)(*param_4 + 0x278))(param_4,*(undefined8 *)(*param_4 + 0x280));
      plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_4,0);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        lVar2 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 10) * 0x10 + 0x138);
              goto LAB_0240cba4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_0131971c(plVar3,lVar2,10);
LAB_0240cba4:
        (*(code *)*puVar4)(plVar3,0,puVar4[1]);
        lVar2 = param_4[9];
        plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (param_4,0);
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          lVar5 = *(long *)puVar1;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0240cc18;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_0131971c(plVar3,lVar5,0);
LAB_0240cc18:
          uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (lVar2 != 0) {
            plVar3 = (long *)Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__PlayUnlockAnimation_230cda8
                                       (uVar9,param_2,param_3,uVar10,uVar11,uVar12,param_2,lVar2,
                                        (char)param_4[0x11]);
            puVar1 = PTR_DAT_057606c8;
            fVar13 = 0.0;
            if ((char)param_4[0x11] != '\0') {
              fVar13 = _UNK_04321764;
            }
            if (((param_4[9] != 0) && (lVar2 = *(long *)(param_4[9] + 0x50), lVar2 != 0)) &&
               (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
              fVar14 = *(float *)(lVar2 + 0x1c);
              lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
              if (lVar2 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar2,param_4,*(undefined8 *)PTR_DAT_057af900,0);
                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                          (fVar13 + fVar14,plVar3,lVar2,0);
                lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar2 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar2,param_4,*(undefined8 *)PTR_DAT_0579e5d0,0);
                  uVar7 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                    (plVar3,0,1);
                  if ((lVar2 != 0) && ((uVar7 & 1) != 0)) {
                    DG_Tweening_Sequence__DoInsertCallback_1edffe8(0x40000000,plVar3,lVar2);
                  }
                  return plVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

