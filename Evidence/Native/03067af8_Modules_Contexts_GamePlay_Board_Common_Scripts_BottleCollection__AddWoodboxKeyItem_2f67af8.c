/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddWoodboxKeyItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddWoodboxKeyItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t woodboxKeyType, Modules_Contexts_GamePlay_Board_Common_Scripts_WoodboxKeyPair_o* pair, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddWoodboxKeyItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddWoodboxKeyItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t
   woodboxKeyType, Modules_Contexts_GamePlay_Board_Common_Scripts_WoodboxKeyPair_o* pair, int32_t
   blockerVariant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddWoodboxKeyItem_2f67af8
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5,long param_6,undefined4 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined4 uVar26;
  
  if ((bRam0000000005c3090d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c3090d = 1;
  }
  puVar3 = PTR_DAT_057b43e8;
  if ((param_6 != 0) && (lVar9 = *(long *)(param_6 + 0x28), lVar9 != 0)) {
    lVar1 = *(long *)(param_6 + 0x10);
    lVar2 = *(long *)(param_6 + 0x18);
    lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar9,0,*(undefined8 *)PTR_DAT_057b43e8);
    puVar4 = PTR_DAT_05805c10;
    if (lVar5 != 0) {
      fVar17 = 0.0;
      fVar13 = _UNK_04397c94;
      if (*(int *)(lVar5 + 0x48) != 1) {
        fVar13 = fVar17;
      }
      if (*(long *)(param_4 + 0x48) != 0) {
        uVar6 = _UNK_04397d10;
        if (*(char *)(*(long *)(param_4 + 0x48) + 0x39) == '\0') {
          if (cRam0000000005c230aa == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230aa = '\x01';
          }
          puVar7 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          fVar17 = *(float *)(puVar7 + 1);
          uVar6 = *puVar7;
        }
        uVar12 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                           (lVar5,0);
        if (*(long *)(lVar5 + 0xa0) != 0) {
          fVar11 = *(float *)(*(long *)(lVar5 + 0xa0) + 0xd8);
          if (cRam0000000005c230ac == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230ac = '\x01';
          }
          if (*(long *)(param_4 + 0x50) != 0) {
            lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
            uVar20 = *(undefined8 *)(lVar8 + 0x18);
            fVar21 = *(float *)(lVar8 + 0x20);
            auVar24 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                                (*(long *)(param_4 + 0x50),0);
            if ((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
              uVar25 = 0;
              uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWoodboxItem_2302cb4
                                (uVar12,param_2,param_3,(float)uVar6 + (float)uVar20 * fVar11 + 0.0,
                                 (float)((ulong)uVar6 >> 0x20) +
                                 (float)((ulong)uVar20 >> 0x20) * fVar11 + fVar13,
                                 fVar17 + fVar11 * fVar21 + 0.0,*(long *)(param_4 + 0x28),
                                 *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),auVar24._0_8_,
                                 auVar24._8_8_,lVar5,lVar9,param_5,param_7,0);
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddOutItem_24995a4
                        (lVar5,uVar6,0);
              uVar26 = (undefined4)((ulong)uVar25 >> 0x20);
              fVar17 = (float)param_3;
              fVar13 = (float)param_2;
              if (0 < *(int *)(lVar9 + 0x18)) {
                iVar10 = 0;
                do {
                  lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar9,iVar10,*(undefined8 *)puVar3);
                  if (lVar5 == 0) goto LAB_03067ea8;
                  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                            (lVar5,uVar6,0);
                  uVar26 = (undefined4)((ulong)uVar25 >> 0x20);
                  fVar17 = (float)param_3;
                  fVar13 = (float)param_2;
                  iVar10 = iVar10 + 1;
                } while (iVar10 < *(int *)(lVar9 + 0x18));
              }
              Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8
                        (param_4,uVar6);
              if (lVar2 != 0) {
                fVar11 = (float)Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                                          (lVar2,0);
                if (cRam0000000005c230ac == '\0') {
                  FUN_012d0dc8(PTR_DAT_05805c10);
                  cRam0000000005c230ac = '\x01';
                }
                if (lVar1 != 0) {
                  lVar9 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                  fVar18 = *(float *)(lVar9 + 0x18);
                  fVar19 = *(float *)(lVar9 + 0x1c);
                  fVar22 = *(float *)(lVar9 + 0x20);
                  fVar21 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBottomPivotPosition_1e9e5a0
                                            (lVar2,*(undefined4 *)(lVar1 + 0x48),0);
                  if (*(long *)(lVar1 + 0xa0) != 0) {
                    fVar23 = *(float *)(*(long *)(lVar1 + 0xa0) + 0xdc);
                    if (cRam0000000005c230ac == '\0') {
                      FUN_012d0dc8(PTR_DAT_05805c10);
                      cRam0000000005c230ac = '\x01';
                    }
                    if (*(long *)(param_4 + 0x50) != 0) {
                      lVar9 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                      fVar14 = *(float *)(lVar9 + 0x18);
                      fVar15 = *(float *)(lVar9 + 0x1c);
                      fVar16 = *(float *)(lVar9 + 0x20);
                      auVar24 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxKeyIdleSorting_4002ba0
                                          (*(long *)(param_4 + 0x50),0);
                      lVar9 = *(long *)(param_4 + 0x28);
                      uVar12 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                         (lVar2,0);
                      if (lVar9 != 0) {
                        Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetWoodboxKeyItem_2302f5c
                                  (fVar11 + fVar18 * fVar21,fVar13 + fVar19 * fVar21,
                                   fVar17 + fVar22 * fVar21,fVar23 * fVar14,fVar23 * fVar15,
                                   fVar23 * fVar16,lVar9,uVar12,auVar24._0_8_,auVar24._8_8_,
                                   *(undefined8 *)(param_6 + 0x20),uVar6,param_5,lVar1,
                                   CONCAT44(uVar26,param_7),0);
                        return;
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
LAB_03067ea8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

