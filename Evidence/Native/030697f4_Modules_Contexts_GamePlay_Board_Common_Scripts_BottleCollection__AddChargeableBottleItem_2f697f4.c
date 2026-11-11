/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddChargeableBottleItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddChargeableBottleItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, bool hasInitialCharge, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddChargeableBottleItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddChargeableBottleItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, bool hasInitialCharge,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddChargeableBottleItem_2f697f4
               (long param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  if (cRam0000000005c230ac == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230ac = '\x01';
  }
  puVar5 = PTR_DAT_05805c10;
  if (param_2 != 0) {
    uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x18);
    fVar13 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x20);
    uVar6 = (ulong)(uint)fVar13;
    uVar12 = CONCAT44((float)((ulong)uVar11 >> 0x20) * 0.56,(float)uVar11 * 0.56);
    fVar13 = fVar13 * _UNK_04397c90;
    *(undefined8 *)(param_2 + 0x34) = uVar12;
    *(float *)(param_2 + 0x3c) = fVar13;
    uVar11 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                       (param_2,0);
    if (*(long *)(param_2 + 0xa0) != 0) {
      fVar13 = *(float *)(*(long *)(param_2 + 0xa0) + 0xd4);
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230ac = '\x01';
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        lVar9 = *(long *)(*(long *)puVar5 + 0xb8);
        fVar14 = *(float *)(lVar9 + 0x18);
        fVar15 = *(float *)(lVar9 + 0x1c);
        fVar16 = *(float *)(lVar9 + 0x20);
        auVar17 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x50),0);
        if (*(long *)(param_1 + 0x50) != 0) {
          auVar18 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerBackSorting_4002a80
                              (*(long *)(param_1 + 0x50),0);
          if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
            uVar11 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetChargeableBottleItem_230409c
                               (uVar11,uVar12,uVar6,fVar13 * fVar14,fVar13 * fVar15,fVar13 * fVar16,
                                *(long *)(param_1 + 0x28),
                                *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),auVar17._0_8_,
                                auVar17._8_8_,auVar18._0_8_,auVar18._8_8_,param_2,param_3 & 1,0);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddOutItem_24995a4
                      (param_2,uVar11,0);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                      (param_2,uVar11,0);
            if ((bRam0000000005c30919 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057c55f8);
              FUN_012d0dc8(PTR_DAT_057ef710);
              bRam0000000005c30919 = 1;
            }
            if (*(long *)(param_1 + 0x20) != 0) {
              uVar6 = System_Collections_Generic_List_object___Contains_21fce6c
                                (*(long *)(param_1 + 0x20),uVar11,*(undefined8 *)PTR_DAT_057ef710);
              if ((uVar6 & 1) != 0) {
                return;
              }
              lVar9 = *(long *)(param_1 + 0x20);
              if (lVar9 != 0) {
                lVar7 = *(long *)(lVar9 + 0x10);
                lVar10 = *(long *)PTR_DAT_057c55f8;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                    *puVar8 = uVar11;
                    if (iRam0000000005c3d478 != 0) {
                      puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                      do {
                        cVar3 = '\x01';
                        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar4) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                          cVar3 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar3 != '\0');
                    }
                    return;
                  }
                    /* WARNING: Could not recover jumptable at 0x030695a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar9,uVar11);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

