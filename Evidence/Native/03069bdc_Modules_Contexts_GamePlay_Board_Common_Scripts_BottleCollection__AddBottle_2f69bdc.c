/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddBottle
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t x, int32_t y, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddBottle
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t x, int32_t y,
   int32_t bottleHeight, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBottle_2f69bdc
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               int param_5,int param_6,int param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  char cVar15;
  undefined4 *puVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  
  if ((bRam0000000005c30918 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057d4af0);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c30918 = 1;
  }
  if ((((*(long *)(param_4 + 0x18) != 0) &&
       (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_4 + 0x18),param_6,*(undefined8 *)PTR_DAT_057b0e08),
       puVar3 = PTR_DAT_057b43e8, lVar8 != 0)) &&
      (lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (lVar8,0,*(undefined8 *)PTR_DAT_057b43e8), lVar9 != 0)) &&
     (plVar10 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                  (lVar9,0), plVar10 != (long *)0x0)) {
    lVar9 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar18 + 4) * 0x10 + 0x138);
          goto LAB_03069d20;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,4);
LAB_03069d20:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
    uVar19 = param_2;
    iVar4 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                      (param_4);
    uVar17 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__HasBoardLongBottles_2f6a540
                       (param_4);
    if (*(long *)(param_4 + 0x40) != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      uVar12 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetBottleCollectionCameraConfig_160c3ec
                         (*(long *)(param_4 + 0x40),iVar4 == 3,*(undefined1 *)(param_4 + 0x59),
                          *(undefined1 *)(param_4 + 0x58),0);
      iVar1 = iVar1 + 1;
      if ((uVar17 & 1) == 0) {
        if (*(char *)(param_4 + 0x59) == '\0') {
          cVar15 = *(char *)(param_4 + 0x58);
        }
        else {
          cVar15 = '\x01';
        }
        uVar12 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBottlePosition_22fb114
                           (param_2,iVar1,param_5,uVar12,cVar15 != '\0',0);
      }
      else {
        if (*(char *)(param_4 + 0x59) == '\0') {
          cVar15 = *(char *)(param_4 + 0x58);
        }
        else {
          cVar15 = '\x01';
        }
        uVar12 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBottlePositionWithLongBottles_22fb264
                           (param_2,iVar1,param_5,param_6,uVar12,param_4,cVar15 != '\0',
                            *(undefined4 *)(param_4 + 0x60),0);
      }
      puVar2 = PTR_DAT_0576aae0;
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar16 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar20 = *puVar16;
      uVar21 = puVar16[1];
      uVar22 = puVar16[2];
      uVar5 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleAndWaterVariant_2f66088
                        (param_4);
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 != 0)) &&
         ((lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar9,*(undefined8 *)PTR_DAT_05805608), lVar9 != 0 &&
          ((*(long *)(lVar9 + 0x10) != 0 &&
           (lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x50), lVar9 != 0)))))) {
        uVar13 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_ConfigsByBottleHeight__GetConfigByHeightAndVariant_22fc5c4
                           (lVar9,param_7,uVar5,0);
        if (*(long *)(param_4 + 0x50) != 0) {
          uVar6 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleFrontSortOrder_4002860
                            (*(long *)(param_4 + 0x50),0);
          if (*(long *)(param_4 + 0x50) != 0) {
            uVar7 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleBackSortOrder_40027a0
                              (*(long *)(param_4 + 0x50),0);
            if (*(long *)(param_4 + 0x50) != 0) {
              auVar23 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleSittingSorting_4002958
                                  (*(long *)(param_4 + 0x50),0,0);
              puVar2 = PTR_DAT_057d4af0;
              if ((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
                lVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetBottleItem_2301c18
                                  (uVar12,uVar19,param_3,uVar20,uVar21,uVar22,
                                   *(long *)(param_4 + 0x28),
                                   *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),param_7,
                                   param_6 + param_5,uVar5,uVar6,uVar7,uVar13,auVar23,
                                   *(int *)(param_4 + 0x5c) == param_7,param_4,
                                   *(int *)(param_4 + 0x5c) < param_7 &&
                                   *(char *)(param_4 + 0x58) == '\0',0);
                System_Collections_Generic_List_object___Insert_21fd8a0
                          (lVar8,param_5,lVar9,*(undefined8 *)puVar2);
                if (param_5 < 1) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = System_Collections_Generic_List_object___get_Item_21fc76c
                                     (lVar8,param_5 + -1,*(undefined8 *)puVar3);
                }
                if (param_5 < *(int *)(lVar8 + 0x18) + -1) {
                  lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar8,param_5 + 1,*(undefined8 *)puVar3);
                }
                else {
                  lVar8 = 0;
                }
                if (lVar9 != 0) {
                  *(long *)(lVar9 + 0x58) = lVar14;
                  FUN_012d0d74((long *)(lVar9 + 0x58),lVar14);
                  *(long *)(lVar9 + 0x60) = lVar8;
                  FUN_012d0d74((long *)(lVar9 + 0x60),lVar8);
                  if (lVar14 != 0) {
                    *(long *)(lVar14 + 0x60) = lVar9;
                    FUN_012d0d74((long *)(lVar14 + 0x60),lVar9);
                  }
                  if (lVar8 != 0) {
                    *(long *)(lVar8 + 0x58) = lVar9;
                    FUN_012d0d74((long *)(lVar8 + 0x58),lVar9);
                  }
                  if (*(long *)(param_4 + 0x48) != 0) {
                    if (*(char *)(*(long *)(param_4 + 0x48) + 0x39) == '\0') {
                      return lVar9;
                    }
                    if (*(long *)(param_4 + 0x30) != 0) {
                      lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetShadowItem_2300eec
                                        (*(long *)(param_4 + 0x30),0);
                      *(long *)(lVar9 + 0xe0) = lVar8;
                      FUN_012d0d74((long *)(lVar9 + 0xe0),lVar8);
                      if ((*(long *)(param_4 + 0x10) != 0) && (lVar8 != 0)) {
                        Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent_40ea518
                                  (lVar8,*(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),0);
                        return lVar9;
                      }
                    }
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

