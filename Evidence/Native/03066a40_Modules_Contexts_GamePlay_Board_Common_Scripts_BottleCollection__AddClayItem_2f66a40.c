/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddClayItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddClayItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddClayItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddClayItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t blockerVariant,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddClayItem_2f66a40
               (long param_1,long param_2,undefined4 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  
  puVar4 = PTR_DAT_05805c10;
  uVar7 = _UNK_04397d08;
  if (*(long *)(param_1 + 0x48) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x48) + 0x39) == '\0') {
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      uVar7 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
      fVar18 = *(float *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
    }
    else {
      fVar18 = 0.0;
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
    }
    if ((param_2 != 0) && (*(long *)(param_2 + 0xa0) != 0)) {
      fVar14 = *(float *)(*(long *)(param_2 + 0xa0) + 0xbc);
      puVar9 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
      uVar17 = *puVar9;
      uVar16 = puVar9[1];
      uVar15 = puVar9[2];
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(puVar4);
        cRam0000000005c230ac = '\x01';
        puVar9 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar19 = *(undefined8 *)(puVar9 + 6);
        fVar20 = (float)puVar9[8];
        auVar21 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x50),0);
        uVar5 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetIsNewParticlesEnabled_2f695b0
                          ();
        lVar13 = *(long *)(param_1 + 0x28);
        uVar6 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_2,0);
        if (lVar13 != 0) {
          uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetClayItem_2302414
                            (uVar17,uVar16,uVar15,(float)uVar7 + (float)uVar19 * fVar14,
                             (float)((ulong)uVar7 >> 0x20) + (float)((ulong)uVar19 >> 0x20) * fVar14
                             ,fVar18 + fVar14 * fVar20,lVar13,uVar6,auVar21._0_8_,auVar21._8_8_,
                             param_2,param_3,uVar5 & 1,0);
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                    (param_2,uVar7,0);
          if ((bRam0000000005c30919 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057c55f8);
            FUN_012d0dc8(PTR_DAT_057ef710);
            bRam0000000005c30919 = 1;
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar8 = System_Collections_Generic_List_object___Contains_21fce6c
                              (*(long *)(param_1 + 0x20),uVar7,*(undefined8 *)PTR_DAT_057ef710);
            if ((uVar8 & 1) != 0) {
              return;
            }
            lVar13 = *(long *)(param_1 + 0x20);
            if (lVar13 != 0) {
              lVar10 = *(long *)(lVar13 + 0x10);
              lVar12 = *(long *)PTR_DAT_057c55f8;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar5 = *(uint *)(lVar13 + 0x18);
                if (*(uint *)(lVar10 + 0x18) <= uVar5) {
                    /* WARNING: Could not recover jumptable at 0x030695a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar13,uVar7);
                  return;
                }
                *(uint *)(lVar13 + 0x18) = uVar5 + 1;
                puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar5 * 8 + 0x20);
                *puVar11 = uVar7;
                if (iRam0000000005c3d478 != 0) {
                  puVar1 = (ulong *)(((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                  do {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar3) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                }
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

