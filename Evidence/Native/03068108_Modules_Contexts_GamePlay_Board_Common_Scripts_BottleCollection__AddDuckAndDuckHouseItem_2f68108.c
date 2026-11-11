/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddDuckAndDuckHouseItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddDuckAndDuckHouseItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t duckType, Modules_Contexts_GamePlay_Board_Common_Scripts_DuckHouseKeyPair_o* duckHouseKeyPair, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddDuckAndDuckHouseItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddDuckAndDuckHouseItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t duckType,
   Modules_Contexts_GamePlay_Board_Common_Scripts_DuckHouseKeyPair_o* duckHouseKeyPair, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddDuckAndDuckHouseItem_2f68108
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,undefined4 param_5,
               long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  
  if ((bRam0000000005c30910 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057dee48);
    FUN_012d0dc8(PTR_DAT_057d3b50);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c30910 = 1;
  }
  puVar1 = PTR_DAT_057b43e8;
  if (param_6 != 0) {
    lVar5 = *(long *)(param_6 + 0x18);
    if (lVar5 != 0) {
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,0,*(undefined8 *)PTR_DAT_057b43e8);
      if (lVar3 != 0) {
        uVar11 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                           (lVar3,0);
        if (*(long *)(lVar3 + 0xa0) != 0) {
          fVar8 = *(float *)(*(long *)(lVar3 + 0xa0) + 0xd8);
          if (cRam0000000005c230ac == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230ac = '\x01';
          }
          puVar2 = PTR_DAT_05805c10;
          if (*(long *)(param_4 + 0x50) != 0) {
            uVar15 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x18);
            fVar16 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x20);
            auVar21 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                                (*(long *)(param_4 + 0x50),0);
            if ((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
              uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetDuckHouseItem_2303bb4
                                 (uVar11,param_2,param_3,(float)uVar15 * fVar8 + 0.0,
                                  (float)((ulong)uVar15 >> 0x20) * fVar8 + 0.0,fVar8 * fVar16 + 0.0,
                                  *(long *)(param_4 + 0x28),
                                  *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),auVar21._0_8_,
                                  auVar21._8_8_,lVar3,lVar5,param_5,0);
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddOutItem_24995a4
                        (lVar3,uVar11,0);
              if (0 < *(int *)(lVar5 + 0x18)) {
                iVar6 = 0;
                do {
                  lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar5,iVar6,*(undefined8 *)puVar1);
                  if (lVar3 == 0) goto LAB_03068464;
                  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                            (lVar3,uVar11,0);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(int *)(lVar5 + 0x18));
              }
              Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8
                        (param_4,uVar11);
              lVar5 = *(long *)(param_6 + 0x10);
              if (lVar5 != 0) {
                iVar6 = 0;
                do {
                  fVar16 = (float)param_3;
                  fVar8 = (float)param_2;
                  if (*(int *)(lVar5 + 0x18) <= iVar6) {
                    return;
                  }
                  lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar5,iVar6,*(undefined8 *)PTR_DAT_057d3b50);
                  if ((lVar5 == 0) || (lVar3 = *(long *)(lVar5 + 0x18), lVar3 == 0)) break;
                  lVar7 = *(long *)(lVar5 + 0x10);
                  fVar9 = (float)Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                                           (lVar3,0);
                  if (cRam0000000005c230ac == '\0') {
                    FUN_012d0dc8(puVar2);
                    cRam0000000005c230ac = '\x01';
                  }
                  if (lVar7 == 0) break;
                  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                  fVar18 = *(float *)(lVar4 + 0x18);
                  fVar19 = *(float *)(lVar4 + 0x1c);
                  fVar17 = *(float *)(lVar4 + 0x20);
                  fVar10 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetBottomPivotPosition_1e9e5a0
                                            (lVar3,*(undefined4 *)(lVar7 + 0x48),0);
                  if (*(long *)(lVar7 + 0xa0) == 0) break;
                  fVar20 = *(float *)(*(long *)(lVar7 + 0xa0) + 0xdc);
                  if (cRam0000000005c230ac == '\0') {
                    FUN_012d0dc8(puVar2);
                    cRam0000000005c230ac = '\x01';
                  }
                  if (*(long *)(param_4 + 0x50) == 0) break;
                  lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
                  fVar12 = *(float *)(lVar4 + 0x18);
                  fVar13 = *(float *)(lVar4 + 0x1c);
                  fVar14 = *(float *)(lVar4 + 0x20);
                  auVar21 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxKeyIdleSorting_4002ba0
                                      (*(long *)(param_4 + 0x50),0);
                  lVar4 = *(long *)(param_4 + 0x28);
                  uVar15 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                     (lVar3,0);
                  if (lVar4 == 0) break;
                  param_2 = (ulong)(uint)(fVar8 + fVar19 * fVar10);
                  param_3 = (ulong)(uint)(fVar16 + fVar17 * fVar10);
                  Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetDuckItem_2303a5c
                            (fVar9 + fVar18 * fVar10,param_2,param_3,fVar20 * fVar12,fVar20 * fVar13
                             ,fVar20 * fVar14,lVar4,uVar15,auVar21._0_8_,auVar21._8_8_,uVar11,
                             *(undefined8 *)(lVar5 + 0x20),lVar7,param_5,0);
                  lVar5 = *(long *)(param_6 + 0x10);
                  iVar6 = iVar6 + 1;
                } while (lVar5 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_03068464:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

