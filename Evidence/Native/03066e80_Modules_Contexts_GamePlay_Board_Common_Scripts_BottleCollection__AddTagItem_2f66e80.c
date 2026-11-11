/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddTagItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddTagItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemModel_o* tagItemModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddTagItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddTagItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemModel_o* tagItemModel, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddTagItem_2f66e80
               (long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar5 = PTR_DAT_05805c10;
  if ((param_2 != 0) && (*(long *)(param_2 + 0xa0) != 0)) {
    fVar17 = *(float *)(*(long *)(param_2 + 0xa0) + 0xcc);
    puVar9 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar16 = *puVar9;
    uVar15 = puVar9[1];
    uVar14 = puVar9[2];
    if (cRam0000000005c230ac == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230ac = '\x01';
      puVar9 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      fVar18 = (float)puVar9[6];
      fVar19 = (float)puVar9[7];
      fVar20 = (float)puVar9[8];
      auVar21 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                          (*(long *)(param_1 + 0x50),0);
      if (param_3 != 0) {
        uVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAndColorId_2f62dbc
                          (param_1,*(undefined4 *)(param_3 + 0x14));
        lVar13 = *(long *)(param_1 + 0x28);
        uVar7 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_2,0);
        if (lVar13 != 0) {
          uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetTagItem_23028e4
                            (uVar16,uVar15,uVar14,fVar17 * fVar18,fVar17 * fVar19,fVar17 * fVar20,
                             lVar13,uVar7,auVar21._0_8_,auVar21._8_8_,param_2,uVar6,0);
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                    (param_2,uVar6,0);
          if ((bRam0000000005c30919 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057c55f8);
            FUN_012d0dc8(PTR_DAT_057ef710);
            bRam0000000005c30919 = 1;
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar8 = System_Collections_Generic_List_object___Contains_21fce6c
                              (*(long *)(param_1 + 0x20),uVar6,*(undefined8 *)PTR_DAT_057ef710);
            if ((uVar8 & 1) != 0) {
              return;
            }
            lVar13 = *(long *)(param_1 + 0x20);
            if (lVar13 != 0) {
              lVar10 = *(long *)(lVar13 + 0x10);
              lVar12 = *(long *)PTR_DAT_057c55f8;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar2 = *(uint *)(lVar13 + 0x18);
                if (uVar2 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                  puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar11 = uVar6;
                  if (iRam0000000005c3d478 != 0) {
                    puVar1 = (ulong *)(((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                    do {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar4) {
                        *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                  }
                  return;
                }
                    /* WARNING: Could not recover jumptable at 0x030695a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar13,uVar6);
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

