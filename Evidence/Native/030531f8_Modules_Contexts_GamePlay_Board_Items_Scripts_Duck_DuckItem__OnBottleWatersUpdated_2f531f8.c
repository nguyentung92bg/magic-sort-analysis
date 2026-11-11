/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckItem$$OnBottleWatersUpdated
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__OnBottleWatersUpdated (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* topWaterItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckItem$$OnBottleWatersUpdated
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__OnBottleWatersUpdated
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* topWaterItem, const MethodInfo*
   method); */

long * Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__OnBottleWatersUpdated_2f531f8
                 (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  
  if (param_4[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(param_4[0xb] + 0x20) != param_5) {
    return param_4;
  }
  if (((char)param_4[8] != '\0') || (*(char *)((long)param_4 + 0x85) != '\0')) {
    return param_4;
  }
  *(undefined1 *)(param_4 + 8) = 1;
  if (param_4[10] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__TryComplete_2757b20
            (_UNK_04321764,param_4[10],param_4,*(undefined1 *)((long)param_4 + 0x84),0,0);
  if ((bRam0000000005c30890 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05772f18);
    FUN_012d0dc8(PTR_DAT_0577c488);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c30890 = 1;
  }
  if (((param_4[9] != 0) && (lVar5 = *(long *)(param_4[9] + 0x20), lVar5 != 0)) &&
     (param_4[10] != 0)) {
    uVar14 = *(undefined4 *)(lVar5 + 0xd8);
    uVar10 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__GetKeyTargetPosition_2757ae0
                       (param_4[10],0);
    if ((param_4[0xc] != 0) &&
       (uVar12 = param_2, uVar13 = param_3,
       plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                  (param_4[0xc],0), puVar2 = PTR_DAT_0576aae0,
       puVar1 = PTR_DAT_0575a2d8, plVar3 != (long *)0x0)) {
      lVar5 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_030533a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575a2d8,0);
LAB_030533a8:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) &&
         (lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar5,*(undefined8 *)PTR_DAT_0575c3c8), lVar5 != 0)) {
        auVar16 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetDuckItemHideSorting_4003140
                            (lVar5,0);
        (**(code **)(*param_4 + 0x278))(param_4,*(undefined8 *)(*param_4 + 0x280));
        plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (param_4,0);
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          lVar5 = *(long *)puVar1;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 10) * 0x10 + 0x138);
                goto LAB_03053478;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_0131971c(plVar3,lVar5,10);
LAB_03053478:
          (*(code *)*puVar4)(plVar3,0,puVar4[1]);
          lVar5 = param_4[9];
          plVar3 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                     (param_4,0);
          if (plVar3 != (long *)0x0) {
            lVar7 = *plVar3;
            lVar6 = *(long *)puVar1;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar6) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_030534ec;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)FUN_0131971c(plVar3,lVar6,0);
LAB_030534ec:
            uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            if (lVar5 != 0) {
              plVar3 = (long *)Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__PlayUnlockAnimation_2f53658
                                         (uVar10,param_2,param_3,uVar11,uVar12,uVar13,param_2,lVar5,
                                          auVar16._0_8_,auVar16._8_8_);
              puVar1 = PTR_DAT_057606c8;
              if ((param_4[9] != 0) && (lVar5 = *(long *)(param_4[9] + 0x20), lVar5 != 0)) {
                uVar15 = *(undefined4 *)(lVar5 + 0x70);
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                if (lVar5 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar5,param_4,*(undefined8 *)PTR_DAT_05772f18,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar15,plVar3,lVar5,0)
                  ;
                  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  if (lVar5 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar5,param_4,*(undefined8 *)PTR_DAT_0577c488,0);
                    uVar8 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                      (plVar3,0,1);
                    if ((lVar5 != 0) && ((uVar8 & 1) != 0)) {
                      DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar14,plVar3,lVar5);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

