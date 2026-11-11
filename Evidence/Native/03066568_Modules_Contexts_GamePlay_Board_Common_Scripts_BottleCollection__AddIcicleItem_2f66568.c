/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddIcicleItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddIcicleItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddIcicleItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddIcicleItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t index, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddIcicleItem_2f66568
               (long param_1,long param_2,undefined4 param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_x7;
  undefined8 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  if (param_2 != 0) {
    lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell_2495f10
                      (param_2,param_3,0);
    if (lVar6 == 0) {
      return;
    }
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    puVar5 = PTR_DAT_05805c10;
    if (*(long *)(param_2 + 0xa0) != 0) {
      uVar13 = (ulong)*(uint *)(*(long *)(param_2 + 0xa0) + 200);
      puVar10 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar17 = *puVar10;
      uVar16 = puVar10[1];
      uVar15 = puVar10[2];
      uVar8 = 0;
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230ac = '\x01';
        puVar10 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar18 = *(undefined8 *)(puVar10 + 6);
        fVar19 = (float)puVar10[8];
        uVar20 = *(undefined8 *)(lVar6 + 0x10);
        fVar21 = *(float *)(lVar6 + 0x18);
        auVar22 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x50),0);
        lVar12 = *(long *)(param_1 + 0x28);
        uVar7 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_2,0);
        if (lVar12 != 0) {
          fVar14 = (float)uVar13;
          uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetIcicleItem_23027b8
                            (uVar17,uVar16,uVar15,(float)uVar18 * fVar14 + (float)uVar20,
                             (float)((ulong)uVar18 >> 0x20) * fVar14 +
                             (float)((ulong)uVar20 >> 0x20),fVar14 * fVar19 + fVar21,lVar12,uVar7,
                             auVar22._0_8_,auVar22._8_8_,param_2,lVar6,0,in_x7,uVar13,uVar8);
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                    (param_2,uVar8,0);
          Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8
                    (param_1,uVar8);
          if ((bRam0000000005c2812f & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057aca38,uVar8,0);
            bRam0000000005c2812f = 1;
          }
          lVar6 = *(long *)(lVar6 + 0x38);
          if (lVar6 != 0) {
            lVar12 = *(long *)(lVar6 + 0x10);
            lVar11 = *(long *)PTR_DAT_057aca38;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
                *puVar9 = uVar8;
                if (iRam0000000005c3d478 != 0) {
                  puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x01f90d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar6,uVar8);
              return;
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

