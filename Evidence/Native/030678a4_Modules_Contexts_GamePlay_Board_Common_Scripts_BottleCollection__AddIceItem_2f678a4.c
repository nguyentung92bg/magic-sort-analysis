/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddIceItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddIceItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t id, System_Collections_Generic_List_BottleItem__o* bottles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddIceItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddIceItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t id,
   System_Collections_Generic_List_BottleItem__o* bottles, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddIceItem_2f678a4
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5,long param_6)

{
  ulong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  
  if ((bRam0000000005c3090c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c3090c = 1;
  }
  puVar6 = PTR_DAT_05805c10;
  if (*(long *)(param_4 + 0x48) != 0) {
    if (*(char *)(*(long *)(param_4 + 0x48) + 0x39) == '\0') {
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar12 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      fVar17 = *(float *)(puVar12 + 1);
      uVar9 = *puVar12;
      puVar12 = (undefined8 *)PTR_DAT_057b43e8;
    }
    else {
      fVar17 = 0.0;
      uVar9 = _UNK_04397d00;
      puVar12 = (undefined8 *)PTR_DAT_057b43e8;
    }
    PTR_DAT_057b43e8 = (undefined *)puVar12;
    if ((param_6 != 0) &&
       (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c(param_6,0,*puVar12),
       lVar8 != 0)) {
      uVar16 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                         (lVar8,0);
      if (*(long *)(lVar8 + 0xa0) != 0) {
        fVar15 = *(float *)(*(long *)(lVar8 + 0xa0) + 0xd0);
        if (cRam0000000005c230ac == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230ac = '\x01';
        }
        if (*(long *)(param_4 + 0x50) != 0) {
          uVar2 = *(undefined4 *)(param_6 + 0x18);
          lVar11 = *(long *)(*(long *)puVar6 + 0xb8);
          uVar18 = *(undefined8 *)(lVar11 + 0x18);
          fVar19 = *(float *)(lVar11 + 0x20);
          auVar20 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                              (*(long *)(param_4 + 0x50),0);
          bVar7 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetIsNewParticlesEnabled_2f695b0
                            ();
          if (((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x48) != 0)) &&
             (*(long *)(param_4 + 0x28) != 0)) {
            uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetIceItem_2302a10
                              (uVar16,param_2,param_3,(float)uVar9 + (float)uVar18 * fVar15,
                               (float)((ulong)uVar9 >> 0x20) +
                               (float)((ulong)uVar18 >> 0x20) * fVar15,fVar17 + fVar15 * fVar19,
                               *(long *)(param_4 + 0x28),
                               *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),auVar20._0_8_,
                               auVar20._8_8_,uVar2,param_5,lVar8,param_6,
                               *(undefined1 *)(*(long *)(param_4 + 0x48) + 0x39),bVar7 & 1,0);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddOutItem_24995a4
                      (lVar8,uVar9,0);
            if (0 < *(int *)(param_6 + 0x18)) {
              iVar14 = 0;
              do {
                lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (param_6,iVar14,*puVar12);
                if (lVar8 == 0) goto LAB_03067af4;
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                          (lVar8,uVar9,0);
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(param_6 + 0x18));
            }
            if ((bRam0000000005c30919 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057c55f8);
              FUN_012d0dc8(PTR_DAT_057ef710);
              bRam0000000005c30919 = 1;
            }
            if (*(long *)(param_4 + 0x20) != 0) {
              uVar10 = System_Collections_Generic_List_object___Contains_21fce6c
                                 (*(long *)(param_4 + 0x20),uVar9,*(undefined8 *)PTR_DAT_057ef710);
              if ((uVar10 & 1) != 0) {
                return;
              }
              lVar8 = *(long *)(param_4 + 0x20);
              if (lVar8 != 0) {
                lVar11 = *(long *)(lVar8 + 0x10);
                lVar13 = *(long *)PTR_DAT_057c55f8;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar11 != 0) {
                  uVar3 = *(uint *)(lVar8 + 0x18);
                  if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                    puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
                    *puVar12 = uVar9;
                    if (iRam0000000005c3d478 != 0) {
                      puVar1 = (ulong *)(((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    return;
                  }
                    /* WARNING: Could not recover jumptable at 0x030695a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar8,uVar9);
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
LAB_03067af4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

