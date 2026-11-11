/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddCarpetItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddCarpetItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t id, System_Collections_Generic_List_BottleItem__o* bottles, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddCarpetItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddCarpetItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t id,
   System_Collections_Generic_List_BottleItem__o* bottles, int32_t blockerVariant, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddCarpetItem_2f67eac
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4,
               undefined4 param_5,long param_6,undefined4 param_7)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  
  if ((bRam0000000005c3090e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c3090e = 1;
  }
  puVar5 = PTR_DAT_05805c10;
  if (*(long *)(param_4 + 0x48) != 0) {
    if (*(char *)(*(long *)(param_4 + 0x48) + 0x39) == '\0') {
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar10 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
      fVar17 = *(float *)(puVar10 + 1);
      uVar7 = *puVar10;
      puVar10 = (undefined8 *)PTR_DAT_057b43e8;
    }
    else {
      fVar17 = 0.0;
      uVar7 = _UNK_04397d18;
      puVar10 = (undefined8 *)PTR_DAT_057b43e8;
    }
    PTR_DAT_057b43e8 = (undefined *)puVar10;
    if ((param_6 != 0) &&
       (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c(param_6,0,*puVar10),
       lVar6 != 0)) {
      uVar16 = 0;
      fVar13 = _UNK_04397c98;
      if (*(int *)(lVar6 + 0x48) != 1) {
        fVar13 = 0.0;
      }
      uVar15 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                         (lVar6,0);
      if (*(long *)(lVar6 + 0xa0) != 0) {
        fVar14 = *(float *)(*(long *)(lVar6 + 0xa0) + 0xe0);
        if (cRam0000000005c230ac == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230ac = '\x01';
        }
        if (*(long *)(param_4 + 0x50) != 0) {
          lVar9 = *(long *)(*(long *)puVar5 + 0xb8);
          uVar18 = *(undefined8 *)(lVar9 + 0x18);
          fVar19 = *(float *)(lVar9 + 0x20);
          auVar20 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                              (*(long *)(param_4 + 0x50),0);
          if ((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
            uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetCarpetItem_23031e8
                              (uVar15,uVar16,param_3,(float)uVar7 + (float)uVar18 * fVar14 + 0.0,
                               (float)((ulong)uVar7 >> 0x20) +
                               (float)((ulong)uVar18 >> 0x20) * fVar14 + fVar13,
                               fVar17 + fVar14 * fVar19 + 0.0,*(long *)(param_4 + 0x28),
                               *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),auVar20._0_8_,
                               auVar20._8_8_,lVar6,param_6,param_5,param_7,0);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddOutItem_24995a4
                      (lVar6,uVar7,0);
            if (0 < *(int *)(param_6 + 0x18)) {
              iVar12 = 0;
              do {
                lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (param_6,iVar12,*puVar10);
                if (lVar6 == 0) goto LAB_03068104;
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                          (lVar6,uVar7,0);
                iVar12 = iVar12 + 1;
              } while (iVar12 < *(int *)(param_6 + 0x18));
            }
            if ((bRam0000000005c30919 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057c55f8);
              FUN_012d0dc8(PTR_DAT_057ef710);
              bRam0000000005c30919 = 1;
            }
            if (*(long *)(param_4 + 0x20) != 0) {
              uVar8 = System_Collections_Generic_List_object___Contains_21fce6c
                                (*(long *)(param_4 + 0x20),uVar7,*(undefined8 *)PTR_DAT_057ef710);
              if ((uVar8 & 1) != 0) {
                return;
              }
              lVar6 = *(long *)(param_4 + 0x20);
              if (lVar6 != 0) {
                lVar9 = *(long *)(lVar6 + 0x10);
                lVar11 = *(long *)PTR_DAT_057c55f8;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar2 = *(uint *)(lVar6 + 0x18);
                  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                    puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                    *puVar10 = uVar7;
                    if (iRam0000000005c3d478 != 0) {
                      puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    return;
                  }
                    /* WARNING: Could not recover jumptable at 0x030695a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar6,uVar7);
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
LAB_03068104:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

