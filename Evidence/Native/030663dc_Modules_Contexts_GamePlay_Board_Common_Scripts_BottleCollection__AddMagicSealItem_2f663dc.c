/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddMagicSealItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddMagicSealItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddMagicSealItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddMagicSealItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t index, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddMagicSealItem_2f663dc
               (long param_1,long param_2,undefined4 param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  
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
      fVar12 = *(float *)(*(long *)(param_2 + 0xa0) + 200);
      puVar9 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar15 = *puVar9;
      uVar14 = puVar9[1];
      uVar13 = puVar9[2];
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230ac = '\x01';
        puVar9 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
      }
      uVar19 = *(undefined8 *)(puVar9 + 6);
      fVar16 = (float)puVar9[8];
      uVar17 = *(undefined8 *)(lVar6 + 0x10);
      fVar18 = *(float *)(lVar6 + 0x18);
      lVar11 = *(long *)(param_1 + 0x28);
      uVar7 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_2,0);
      if (lVar11 != 0) {
        uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetMagicSealItem_2303938
                          (uVar15,uVar14,uVar13,(float)uVar19 * fVar12 + (float)uVar17,
                           (float)((ulong)uVar19 >> 0x20) * fVar12 + (float)((ulong)uVar17 >> 0x20),
                           fVar12 * fVar16 + fVar18,lVar11,uVar7,param_2,lVar6,param_3,0);
        Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8
                  (param_1,uVar7);
        if ((bRam0000000005c2812f & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057aca38,uVar7,0);
          bRam0000000005c2812f = 1;
        }
        lVar6 = *(long *)(lVar6 + 0x38);
        if (lVar6 != 0) {
          lVar11 = *(long *)(lVar6 + 0x10);
          lVar10 = *(long *)PTR_DAT_057aca38;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *puVar8 = uVar7;
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
                    /* WARNING: Could not recover jumptable at 0x01f90d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar6,uVar7);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

