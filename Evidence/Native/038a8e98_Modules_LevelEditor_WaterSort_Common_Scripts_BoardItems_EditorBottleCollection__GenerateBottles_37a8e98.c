/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GenerateBottles
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GenerateBottles (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, System_Collections_Generic_List_BottleItemModel__o* bottlesModels, bool remapColors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GenerateBottles
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GenerateBottles
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   System_Collections_Generic_List_BottleItemModel__o* bottlesModels, bool remapColors, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GenerateBottles_37a8e98
               (long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  
  if ((bRam0000000005c33e4c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05794e88);
    FUN_012d0dc8(PTR_DAT_05782bc8);
    FUN_012d0dc8(PTR_DAT_057d6660);
    FUN_012d0dc8(PTR_DAT_057682f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05765d58);
    FUN_012d0dc8(PTR_DAT_057e4270);
    FUN_012d0dc8(PTR_DAT_05773278);
    FUN_012d0dc8(PTR_DAT_05815940);
    FUN_012d0dc8(PTR_DAT_057781c0);
    FUN_012d0dc8(PTR_DAT_05760650);
    FUN_012d0dc8(PTR_DAT_05766e18);
    FUN_012d0dc8(PTR_DAT_0575b850);
    FUN_012d0dc8(PTR_DAT_05807990);
    FUN_012d0dc8(PTR_DAT_0577a8a0);
    FUN_012d0dc8(PTR_DAT_0577f9f0);
    FUN_012d0dc8(PTR_DAT_05760488);
    FUN_012d0dc8(PTR_DAT_057cf518);
    FUN_012d0dc8(PTR_DAT_057bebf8);
    FUN_012d0dc8(PTR_DAT_05774d20);
    FUN_012d0dc8(PTR_DAT_0577c540);
    FUN_012d0dc8(PTR_DAT_05766148);
    FUN_012d0dc8(PTR_DAT_057fc8e8);
    FUN_012d0dc8(PTR_DAT_057c3bb8);
    FUN_012d0dc8(PTR_DAT_057a95a8);
    FUN_012d0dc8(PTR_DAT_05797a48);
    FUN_012d0dc8(PTR_DAT_05793800);
    FUN_012d0dc8(PTR_DAT_0577e430);
    FUN_012d0dc8(PTR_DAT_057945b8);
    FUN_012d0dc8(PTR_DAT_057fb420);
    FUN_012d0dc8(PTR_DAT_057ce110);
    FUN_012d0dc8(PTR_DAT_057fe6c8);
    FUN_012d0dc8(PTR_DAT_057a8958);
    FUN_012d0dc8(PTR_DAT_057a49d0);
    FUN_012d0dc8(PTR_DAT_0576c680);
    FUN_012d0dc8(PTR_DAT_057b7d50);
    FUN_012d0dc8(PTR_DAT_057767b8);
    FUN_012d0dc8(PTR_DAT_057a1798);
    FUN_012d0dc8(PTR_DAT_057c3818);
    FUN_012d0dc8(PTR_DAT_0578fd98);
    FUN_012d0dc8(PTR_DAT_05773488);
    bRam0000000005c33e4c = 1;
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) == 0)) {
    return;
  }
  if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar9 != 0)) {
    lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_057682f8);
    lVar10 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__SortBottleModels_37ae454
                       (lVar9,param_2);
    lVar11 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetColorsInLevel_37aeb50
                       (lVar10,param_2);
    plVar21 = (long *)(param_1 + 0x50);
    *plVar21 = lVar11;
    FUN_012d0d74(plVar21,lVar11);
    if ((param_3 & 1) != 0) {
      if (*plVar21 == 0) goto LAB_038a9bb4;
      System_Collections_Generic_List_Int32Enum___Sort_2053648
                (*plVar21,*(undefined8 *)PTR_DAT_057cf518);
    }
    if (lVar9 != 0) {
      lVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__GetObject_2304f00
                        (lVar9,0,0);
      plVar21 = (long *)(param_1 + 0x10);
      *plVar21 = lVar9;
      FUN_012d0d74(plVar21,lVar9);
      if ((*plVar21 != 0) &&
         (UnityEngine_Object__set_name_40914ec(*plVar21,*(undefined8 *)PTR_DAT_05773488,0),
         puVar6 = PTR_DAT_057a95a8, puVar5 = PTR_DAT_05797a48, puVar4 = PTR_DAT_05766e18,
         lVar10 != 0)) {
        if (0 < *(int *)(lVar10 + 0x18)) {
          iVar8 = 0;
          do {
            lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar10,iVar8,*(undefined8 *)PTR_DAT_057945b8);
            lVar11 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057fb420);
            if (lVar11 == 0) goto LAB_038a9bb4;
            System_Collections_Generic_List_object____ctor_21fc1fc
                      (lVar11,*(undefined8 *)PTR_DAT_057bebf8);
            lVar12 = *(long *)(param_1 + 0x18);
            if (lVar12 == 0) goto LAB_038a9bb4;
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar17 = *(long *)PTR_DAT_05760488;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_038a9bb4;
            uVar3 = *(uint *)(lVar12 + 0x18);
            if (uVar3 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar3 + 1;
              plVar21 = (long *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
              *plVar21 = lVar11;
              FUN_012d0d74(plVar21);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x58) + 8))();
            }
            if (lVar9 == 0) goto LAB_038a9bb4;
            if (0 < *(int *)(lVar9 + 0x18)) {
              iVar23 = 0;
              do {
                lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (lVar9,iVar23,*(undefined8 *)PTR_DAT_0577e430);
                if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) ||
                    (*(long *)(param_1 + 0x10) == 0)) || (*(long *)(param_1 + 0x28) == 0))
                goto LAB_038a9bb4;
                lVar15 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetBottleItem_3ddae50
                                   (*(undefined4 *)(lVar12 + 0x14),*(undefined4 *)(lVar12 + 0x18),
                                    *(undefined4 *)(lVar12 + 0x1c),*(long *)(param_1 + 0x28),
                                    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),
                                    *(undefined4 *)(*(long *)(lVar12 + 0x20) + 0x18),param_1,0);
                lVar17 = *(long *)(lVar11 + 0x10);
                lVar18 = *(long *)PTR_DAT_0577f9f0;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_038a9bb4;
                uVar3 = *(uint *)(lVar11 + 0x18);
                if (uVar3 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar3 + 1;
                  plVar21 = (long *)(lVar17 + (long)(int)uVar3 * 8 + 0x20);
                  *plVar21 = lVar15;
                  FUN_012d0d74(plVar21,lVar15);
                }
                else {
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar11,lVar15);
                }
                if (lVar15 == 0) goto LAB_038a9bb4;
                *(int *)(lVar15 + 0x80) = iVar8;
                lVar17 = *(long *)(lVar12 + 0x20);
                if (lVar17 == 0) goto LAB_038a9bb4;
                iVar24 = 0;
                while (iVar24 < *(int *)(lVar17 + 0x18)) {
                  lVar17 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar17,iVar24,*(undefined8 *)puVar6);
                  if (lVar17 == 0) goto LAB_038a9bb4;
                  lVar17 = *(long *)(lVar17 + 0x20);
                  plVar21 = (long *)thunk_FUN_01320d5c(lVar17,*(undefined8 *)puVar4);
                  if (plVar21 != (long *)0x0) {
                    lVar16 = *plVar21;
                    lVar18 = *(long *)puVar4;
                    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12a);
                    if (uVar19 != 0) {
                      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == lVar18) {
                          puVar13 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                          goto LAB_038a93e8;
                        }
                        uVar19 = uVar19 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar19 != 0);
                    }
                    puVar13 = (undefined8 *)FUN_0131971c(plVar21,lVar18,0);
LAB_038a93e8:
                    uVar7 = (*(code *)*puVar13)(plVar21,puVar13[1]);
                    if ((lVar17 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_038a9bb4;
                    uVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                                       (*(long *)(param_1 + 0x30),uVar7,0);
                    if ((*(long *)(lVar15 + 0x20) == 0) || (*(long *)(param_1 + 0x40) == 0))
                    goto LAB_038a9bb4;
                    lVar17 = *(long *)(param_1 + 0x28);
                    uVar22 = *(undefined8 *)(*(long *)(lVar15 + 0x20) + 0x18);
                    auVar25 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWaterSortOrderForEditor_40027b4
                                        (*(long *)(param_1 + 0x40),iVar24,0);
                    if (lVar17 == 0) goto LAB_038a9bb4;
                    uVar14 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetWaterItem_3ddb278
                                       (lVar17,uVar22,1,iVar24,uVar14,auVar25._0_8_,auVar25._8_8_,0)
                    ;
                    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__SetWaterItem_3ddee50
                              (lVar15,iVar24,1,uVar14,0);
                  }
                  lVar17 = *(long *)(lVar12 + 0x20);
                  iVar24 = iVar24 + 1;
                  if (lVar17 == 0) goto LAB_038a9bb4;
                }
                if (0 < *(int *)(lVar17 + 0x18)) {
                  iVar24 = 0;
                  do {
                    lVar17 = System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar17,iVar24,*(undefined8 *)puVar6);
                    if (lVar17 == 0) goto LAB_038a9bb4;
                    if (*(long **)(lVar17 + 0x20) != (long *)0x0) {
                      lVar18 = **(long **)(lVar17 + 0x20);
                      bVar1 = *(byte *)(*(long *)PTR_DAT_057a49d0 + 300);
                      if ((bVar1 <= *(byte *)(lVar18 + 300)) &&
                         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) ==
                          *(long *)PTR_DAT_057a49d0)) {
                        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddQuestionMarkItem_37a77ec
                                  (param_1,lVar15,iVar24);
                      }
                    }
                    plVar21 = *(long **)(lVar17 + 0x28);
                    if (plVar21 != (long *)0x0) {
                      lVar17 = *plVar21;
                      bVar1 = *(byte *)(lVar17 + 300);
                      bVar2 = *(byte *)(*(long *)PTR_DAT_0578fd98 + 300);
                      if ((bVar1 < bVar2) ||
                         (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)PTR_DAT_0578fd98)) {
                        bVar2 = *(byte *)(*(long *)PTR_DAT_057ce110 + 300);
                        if ((bVar1 < bVar2) ||
                           (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                            *(long *)PTR_DAT_057ce110)) {
                          bVar2 = *(byte *)(*(long *)PTR_DAT_05807990 + 300);
                          if ((bVar1 < bVar2) ||
                             (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                              *(long *)PTR_DAT_05807990)) {
                            bVar2 = *(byte *)(*(long *)PTR_DAT_05773278 + 300);
                            if ((bVar2 <= bVar1) &&
                               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) ==
                                *(long *)PTR_DAT_05773278)) {
                              Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuckItem_37af454
                                        (param_1,lVar15,iVar24,*(undefined4 *)((long)plVar21 + 0x14)
                                        );
                            }
                          }
                          else {
                            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddIcicleItem_37af3bc
                                      (param_1,lVar15,iVar24);
                          }
                        }
                        else {
                          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddMagicSealItem_37af324
                                    (param_1,lVar15,iVar24);
                        }
                      }
                      else {
                        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWoodboxKeyItem_37af278
                                  (param_1,lVar15,iVar24,*(undefined4 *)((long)plVar21 + 0x14));
                      }
                    }
                    lVar17 = *(long *)(lVar12 + 0x20);
                    if (lVar17 == 0) goto LAB_038a9bb4;
                    iVar24 = iVar24 + 1;
                  } while (iVar24 < *(int *)(lVar17 + 0x18));
                }
                lVar17 = *(long *)(lVar12 + 0x28);
                if (lVar17 != 0) {
                  iVar24 = 0;
                  while (iVar24 < *(int *)(lVar17 + 0x18)) {
                    plVar21 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                                (lVar17,iVar24,*(undefined8 *)puVar5);
                    if (plVar21 != (long *)0x0) {
                      lVar17 = *plVar21;
                      bVar1 = *(byte *)(lVar17 + 300);
                      bVar2 = *(byte *)(*(long *)PTR_DAT_05765d58 + 300);
                      if ((bVar1 < bVar2) ||
                         (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)PTR_DAT_05765d58)) {
                        bVar2 = *(byte *)(*(long *)PTR_DAT_057a8958 + 300);
                        if ((bVar1 < bVar2) ||
                           (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                            *(long *)PTR_DAT_057a8958)) {
                          bVar2 = *(byte *)(*(long *)PTR_DAT_057d6660 + 300);
                          if ((bVar1 < bVar2) ||
                             (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                              *(long *)PTR_DAT_057d6660)) {
                            bVar2 = *(byte *)(*(long *)PTR_DAT_05815940 + 300);
                            if ((bVar1 < bVar2) ||
                               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                                *(long *)PTR_DAT_05815940)) {
                              bVar2 = *(byte *)(*(long *)PTR_DAT_0576c680 + 300);
                              if ((bVar1 < bVar2) ||
                                 (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                                  *(long *)PTR_DAT_0576c680)) {
                                bVar2 = *(byte *)(*(long *)PTR_DAT_057767b8 + 300);
                                if ((bVar1 < bVar2) ||
                                   (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                                    *(long *)PTR_DAT_057767b8)) {
                                  bVar2 = *(byte *)(*(long *)PTR_DAT_05760650 + 300);
                                  if ((bVar1 < bVar2) ||
                                     (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8) !=
                                      *(long *)PTR_DAT_05760650)) {
                                    bVar2 = *(byte *)(*(long *)PTR_DAT_0575b850 + 300);
                                    if ((bVar1 < bVar2) ||
                                       (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8)
                                        != *(long *)PTR_DAT_0575b850)) {
                                      bVar2 = *(byte *)(*(long *)PTR_DAT_057a1798 + 300);
                                      if ((bVar1 < bVar2) ||
                                         (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 + -8)
                                          != *(long *)PTR_DAT_057a1798)) {
                                        bVar2 = *(byte *)(*(long *)PTR_DAT_0577a8a0 + 300);
                                        if ((bVar1 < bVar2) ||
                                           (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 +
                                                     -8) != *(long *)PTR_DAT_0577a8a0)) {
                                          bVar2 = *(byte *)(*(long *)PTR_DAT_057781c0 + 300);
                                          if ((bVar1 < bVar2) ||
                                             (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8 +
                                                       -8) != *(long *)PTR_DAT_057781c0)) {
                                            bVar2 = *(byte *)(*(long *)PTR_DAT_05794e88 + 300);
                                            if ((bVar2 <= bVar1) &&
                                               (*(long *)(*(long *)(lVar17 + 200) + (ulong)bVar2 * 8
                                                         + -8) == *(long *)PTR_DAT_05794e88)) {
                                              Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddBagItem_37afdcc
                                                        (param_1,lVar15,
                                                         *(undefined4 *)((long)plVar21 + 0x14));
                                            }
                                          }
                                          else {
                                            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddFrogItem_37afd3c
                                                      (param_1,lVar15,
                                                       *(undefined4 *)((long)plVar21 + 0x14));
                                          }
                                        }
                                        else {
                                          if (*(long *)(param_1 + 0x30) == 0) goto LAB_038a9bb4;
                                          uVar14 = 
                                                  Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                                                            (*(long *)(param_1 + 0x30),
                                                             *(undefined4 *)((long)plVar21 + 0x14),0
                                                            );
                                          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddIvyItem_37afc60
                                                    (param_1,lVar15,uVar14);
                                        }
                                      }
                                      else {
                                        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddToggleItem_37afbd0
                                                  (param_1,lVar15,
                                                   *(undefined1 *)((long)plVar21 + 0x14));
                                      }
                                    }
                                    else {
                                      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddIceItem_37afaf4
                                                (param_1,lVar15,
                                                 *(undefined4 *)((long)plVar21 + 0x14));
                                    }
                                  }
                                  else {
                                    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddGeneratorItem_37af9bc
                                              (param_1,lVar15);
                                  }
                                }
                                else {
                                  if (*(long *)(param_1 + 0x30) == 0) goto LAB_038a9bb4;
                                  uVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                                                     (*(long *)(param_1 + 0x30),
                                                      *(undefined4 *)((long)plVar21 + 0x14),0);
                                  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddTagItem_37af92c
                                            (param_1,lVar15,uVar14);
                                }
                              }
                              else {
                                Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddRainbowItem_37af860
                                          (param_1,lVar15);
                              }
                            }
                            else {
                              Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddFireworkItem_37af774
                                        (param_1,lVar15,*(undefined4 *)((long)plVar21 + 0x14));
                            }
                          }
                          else {
                            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddClayItem_37af6a8
                                      (param_1,lVar15);
                          }
                        }
                        else {
                          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddPlasterItem_37af5dc
                                    (param_1,lVar15);
                        }
                      }
                      else {
                        if ((plVar21[3] == 0) || (*(long *)(param_1 + 0x30) == 0))
                        goto LAB_038a9bb4;
                        uVar14 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                                           (*(long *)(param_1 + 0x30),
                                            *(undefined4 *)(plVar21[3] + 0x10),0);
                        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddCurtainItem_37af500
                                  (param_1,lVar15,uVar14);
                      }
                    }
                    lVar17 = *(long *)(lVar12 + 0x28);
                    iVar24 = iVar24 + 1;
                    if (lVar17 == 0) goto LAB_038a9bb4;
                  }
                }
                plVar21 = *(long **)(lVar12 + 0x30);
                if (plVar21 != (long *)0x0) {
                  lVar12 = *plVar21;
                  bVar1 = *(byte *)(lVar12 + 300);
                  bVar2 = *(byte *)(*(long *)PTR_DAT_057c3818 + 300);
                  if ((bVar1 < bVar2) ||
                     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)PTR_DAT_057c3818)) {
                    bVar2 = *(byte *)(*(long *)PTR_DAT_05782bc8 + 300);
                    if ((bVar1 < bVar2) ||
                       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)PTR_DAT_05782bc8)) {
                      bVar2 = *(byte *)(*(long *)PTR_DAT_057e4270 + 300);
                      if ((bVar1 < bVar2) ||
                         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                          *(long *)PTR_DAT_057e4270)) {
                        bVar2 = *(byte *)(*(long *)PTR_DAT_057b7d50 + 300);
                        if ((bVar1 < bVar2) ||
                           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                            *(long *)PTR_DAT_057b7d50)) {
                          bVar2 = *(byte *)(*(long *)PTR_DAT_057fe6c8 + 300);
                          if ((bVar2 <= bVar1) &&
                             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
                              *(long *)PTR_DAT_057fe6c8)) {
                            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddMosaicItem_37b0140
                                      (param_1,lVar15,plVar21[3],
                                       *(undefined4 *)((long)plVar21 + 0x14));
                          }
                        }
                        else {
                          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddSafeItem_37b0080
                                    (param_1,lVar15,(int)plVar21[3],
                                     *(undefined4 *)((long)plVar21 + 0x14));
                        }
                      }
                      else {
                        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddDuckHouseItem_37affe0
                                  (param_1,lVar15,*(undefined4 *)((long)plVar21 + 0x14));
                      }
                    }
                    else {
                      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddCarpetItem_37afef4
                                (param_1,lVar15,*(undefined4 *)((long)plVar21 + 0x14));
                    }
                  }
                  else {
                    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__AddWoodboxItem_37afe68
                              (param_1,lVar15,*(undefined4 *)((long)plVar21 + 0x14));
                  }
                }
                Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__UpdateWaterOrderComponents_3ddeee8
                          (lVar15,0);
                Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__UpdateFillAmountsWithoutAnimation_3ddf970
                          (lVar15,0);
                if (iVar23 != 0) {
                  if ((*(long *)(param_1 + 0x18) == 0) ||
                     (lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                         (*(long *)(param_1 + 0x18),iVar8,
                                          *(undefined8 *)PTR_DAT_057c3bb8), lVar12 == 0))
                  goto LAB_038a9bb4;
                  lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar12,iVar23 + -1,*(undefined8 *)PTR_DAT_05793800);
                  if (lVar12 != 0) {
                    *(long *)(lVar15 + 0x38) = lVar12;
                    FUN_012d0d74((long *)(lVar15 + 0x38),lVar12);
                    *(long *)(lVar12 + 0x40) = lVar15;
                    FUN_012d0d74((long *)(lVar12 + 0x40),lVar15);
                  }
                }
                iVar23 = iVar23 + 1;
              } while (iVar23 < *(int *)(lVar9 + 0x18));
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(lVar10 + 0x18));
        }
        iVar8 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetBottleCount_37b0200
                          (param_1);
        *(int *)(param_1 + 0x48) = iVar8 + 3;
        return;
      }
    }
  }
LAB_038a9bb4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

