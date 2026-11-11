/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddQuestionMarkItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddQuestionMarkItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t index, bool isDaily, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddQuestionMarkItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddQuestionMarkItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, int32_t index, bool
   isDaily, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddQuestionMarkItem_2f661c8
               (long param_1,long param_2,undefined4 param_3,ulong param_4)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fStack_80;
  
  if (param_2 != 0) {
    lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell_2495f10
                      (param_2,param_3,0);
    if (lVar8 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
                        (*(long *)(param_1 + 0x38),0xffffffff,0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar6 = PTR_DAT_05805c10;
      lVar10 = *(long *)(param_2 + 0xa0);
      puVar13 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar18 = *puVar13;
      uVar19 = puVar13[1];
      uVar20 = puVar13[2];
      if ((param_4 & 1) == 0) {
        if (lVar10 == 0) goto LAB_030663d8;
        fStack_80 = *(float *)(lVar10 + 200);
      }
      else {
        if (lVar10 == 0) goto LAB_030663d8;
        iVar2 = -0x80000000;
        if (*(float *)(lVar8 + 0x14) != INFINITY) {
          iVar2 = (int)*(float *)(lVar8 + 0x14);
        }
        fStack_80 = (float)BakedFluid_BottleAnimationConfig__GetDailyQuestionMarkOffset_3af5a38
                                     (lVar10,iVar2,0);
      }
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230ac = '\x01';
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        uVar17 = *(undefined8 *)(lVar8 + 0x14);
        fVar21 = *(float *)(lVar8 + 0x10);
        fVar16 = (float)uVar17;
        fVar23 = *(float *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
        uVar22 = *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c);
        iVar2 = -0x80000000;
        if (fVar16 != INFINITY) {
          iVar2 = (int)fVar16;
        }
        uVar7 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetQuestionMarkSortOrder_4002850
                          (*(long *)(param_1 + 0x50),iVar2,0);
        lVar10 = *(long *)(param_1 + 0x28);
        uVar11 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4(param_2,0);
        if (lVar10 != 0) {
          uVar17 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetQuestionMarkItem_2302088
                             (uVar18,uVar19,uVar20,fStack_80 * fVar23 + fVar21,
                              (float)uVar22 * fStack_80 + fVar16,
                              (float)((ulong)uVar22 >> 0x20) * fStack_80 +
                              (float)((ulong)uVar17 >> 0x20),lVar10,uVar11,uVar7,uVar9,0);
          *(undefined8 *)(lVar8 + 0x28) = uVar17;
          FUN_012d0d74((undefined8 *)(lVar8 + 0x28),uVar17);
          if (*(long *)(lVar8 + 0x20) != 0) {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetColor_1e9e2f0
                      (*(long *)(lVar8 + 0x20),uVar9,0);
            if ((bRam0000000005c30919 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057c55f8);
              FUN_012d0dc8(PTR_DAT_057ef710);
              bRam0000000005c30919 = 1;
            }
            if (*(long *)(param_1 + 0x20) != 0) {
              uVar12 = System_Collections_Generic_List_object___Contains_21fce6c
                                 (*(long *)(param_1 + 0x20),uVar17,*(undefined8 *)PTR_DAT_057ef710);
              if ((uVar12 & 1) != 0) {
                return;
              }
              lVar8 = *(long *)(param_1 + 0x20);
              if (lVar8 != 0) {
                lVar10 = *(long *)(lVar8 + 0x10);
                lVar15 = *(long *)PTR_DAT_057c55f8;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar3 = *(uint *)(lVar8 + 0x18);
                  if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                    puVar14 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
                    *puVar14 = uVar17;
                    if (iRam0000000005c3d478 != 0) {
                      puVar1 = (ulong *)(((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar5) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    return;
                  }
                    /* WARNING: Could not recover jumptable at 0x030695a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar8,uVar17);
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
LAB_030663d8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

