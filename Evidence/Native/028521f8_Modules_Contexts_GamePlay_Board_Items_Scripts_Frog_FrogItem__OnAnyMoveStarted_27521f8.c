/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$OnAnyMoveStarted
void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__OnAnyMoveStarted (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogItem$$OnAnyMoveStarted
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__OnAnyMoveStarted
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t
   waterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__OnAnyMoveStarted_27521f8
               (long *param_1)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  
  if ((bRam0000000005c2c703 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c2c703 = 1;
  }
  plVar9 = param_1 + 10;
  if (*plVar9 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
              (*plVar9,param_1,0);
    if (param_1[10] != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveOutItem_2499654
                (param_1[10],param_1,0);
      iVar2 = (int)param_1[0xb];
      if (iVar2 == 0) {
        lVar7 = param_1[0xc];
        iVar10 = 1;
        *(undefined4 *)(param_1 + 0x11) = 1;
        *(undefined4 *)(param_1 + 0xb) = 1;
        if (lVar7 == 0) goto LAB_0285233c;
      }
      else {
        lVar7 = param_1[0xc];
        if (lVar7 == 0) goto LAB_0285233c;
        if (iVar2 == *(int *)(lVar7 + 0x18) + -1) {
          iVar10 = -1;
          *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
        }
        else {
          iVar10 = (int)param_1[0x11];
        }
        iVar10 = iVar10 + iVar2;
        *(int *)(param_1 + 0xb) = iVar10;
      }
      iVar2 = *(int *)(lVar7 + 0x18);
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = iVar10 / iVar2;
      }
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar10 - iVar4 * iVar2,*(undefined8 *)PTR_DAT_057b43e8);
      *plVar9 = lVar7;
      FUN_012d0d74(plVar9,lVar7);
      if (*plVar9 != 0) {
        Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                  (*plVar9,0);
        (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
        (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        if (param_1[10] != 0) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                    (param_1[10],param_1,0);
          lVar7 = param_1[10];
          if (lVar7 != 0) {
            if ((bRam0000000005c2b2e8 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_057aca38,param_1,0);
              bRam0000000005c2b2e8 = 1;
            }
            lVar7 = *(long *)(lVar7 + 0x98);
            if (lVar7 != 0) {
              lVar8 = *(long *)(lVar7 + 0x10);
              lVar11 = *(long *)PTR_DAT_057aca38;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar3 = *(uint *)(lVar7 + 0x18);
                if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0259964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar7,param_1);
                  return;
                }
                *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                plVar9 = (long *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
                *plVar9 = (long)param_1;
                if (iRam0000000005c3d478 != 0) {
                  puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                }
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
LAB_0285233c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

