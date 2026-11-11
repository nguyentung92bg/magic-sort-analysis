/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$RemoveWater
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveWater (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$RemoveWater
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveWater
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t height, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveWater_249d448
               (long param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000005c2b312 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d788);
    FUN_012d0dc8(PTR_DAT_057f9000);
    FUN_012d0dc8(PTR_DAT_05763bd8);
    FUN_012d0dc8(PTR_DAT_057da7b0);
    FUN_012d0dc8(PTR_DAT_057db9e8);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057e5fc8);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_057c6728);
    bRam0000000005c2b312 = 1;
  }
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  lVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                     (param_1);
  puVar8 = PTR_DAT_057f9000;
  puVar7 = PTR_DAT_057f2468;
  puVar6 = PTR_DAT_057db9e8;
  puVar5 = PTR_DAT_057c6728;
  puVar4 = PTR_DAT_0576d788;
  puVar3 = PTR_DAT_05763bd8;
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x40) != param_2) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow_1e9e860(lVar10,0,0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__DecreaseWaterHeight_24990bc
                (param_1,param_2);
      return;
    }
    lVar12 = *(long *)(param_1 + 0x80);
    if (lVar12 != 0) {
      iVar13 = 0;
      do {
        if (*(int *)(lVar12 + 0x18) <= iVar13) {
          Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar10,0);
          lVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                             (param_1);
          lVar12 = *(long *)(param_1 + 0x80);
          if (lVar12 != 0) {
            iVar13 = 0;
            goto LAB_0259d6ac;
          }
          break;
        }
        lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (lVar12,iVar13,*(undefined8 *)puVar7);
        if (lVar12 == 0) break;
        if (lVar10 == *(long *)(lVar12 + 0x20)) {
          *(undefined8 *)(lVar12 + 0x20) = 0;
          FUN_012d0d74((long *)(lVar12 + 0x20),0);
          lVar12 = *(long *)(lVar12 + 0x38);
          if (lVar12 == 0) break;
          if (0 < *(int *)(lVar12 + 0x18)) {
            lVar12 = System_Linq_Enumerable__ToList_object__242f814(lVar12,*(undefined8 *)puVar4);
            if (lVar12 == 0) break;
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_98,lVar12,*(undefined8 *)puVar6);
            uStack_78 = uStack_90;
            uStack_80 = uStack_98;
            plStack_70 = plStack_88;
            while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_80,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
              if (plStack_70 != (long *)0x0) {
                bVar2 = *(byte *)(*(long *)puVar5 + 300);
                if ((bVar2 <= *(byte *)(*plStack_70 + 300)) &&
                   (*(long *)(*(long *)(*plStack_70 + 200) + (ulong)bVar2 * 8 + -8) ==
                    *(long *)puVar5)) {
                  Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__Complete_274b920
                            (plStack_70,1,0);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_80,*(undefined8 *)puVar8);
          }
        }
        lVar12 = *(long *)(param_1 + 0x80);
        iVar13 = iVar13 + 1;
      } while (lVar12 != 0);
    }
  }
  goto LAB_0259d70c;
LAB_0259d6ac:
  do {
    if (*(int *)(lVar12 + 0x18) <= iVar13) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents_249665c
                (param_1);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateSortOrders_2493ab4
                (param_1);
      return;
    }
    lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                       (lVar12,iVar13,*(undefined8 *)puVar7);
    if (lVar10 != 0) {
      if (lVar12 == 0) break;
      lVar12 = *(long *)(lVar12 + 0x20);
      if (lVar12 != 0) {
        uVar1 = *(undefined4 *)(lVar12 + 0x40);
        uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                          (param_1,lVar12);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                  (lVar12,uVar1,uVar9,*(undefined4 *)(param_1 + 0x48),0);
      }
    }
    lVar12 = *(long *)(param_1 + 0x80);
    iVar13 = iVar13 + 1;
  } while (lVar12 != 0);
LAB_0259d70c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

