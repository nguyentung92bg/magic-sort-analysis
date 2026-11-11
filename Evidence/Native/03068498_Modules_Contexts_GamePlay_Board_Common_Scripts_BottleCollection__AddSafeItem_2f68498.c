/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSafeItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSafeItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t safeType, Modules_Contexts_GamePlay_Board_Common_Scripts_SafePair_o* safePair, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddSafeItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSafeItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t safeType,
   Modules_Contexts_GamePlay_Board_Common_Scripts_SafePair_o* safePair, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddSafeItem_2f68498
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000005c30911 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c30911 = 1;
  }
  puVar1 = PTR_DAT_057b43e8;
  if ((param_6 != 0) && (lVar3 = *(long *)(param_6 + 0x18), lVar3 != 0)) {
    lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar3,0,*(undefined8 *)PTR_DAT_057b43e8);
    if (lVar2 != 0) {
      uVar6 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                        (lVar2,0);
      if (*(long *)(lVar2 + 0xa0) != 0) {
        fVar5 = *(float *)(*(long *)(lVar2 + 0xa0) + 0xd8);
        if (cRam0000000005c230ac == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230ac = '\x01';
        }
        if (*(long *)(param_4 + 0x50) != 0) {
          uVar7 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x18);
          fVar8 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x20);
          auVar9 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                             (*(long *)(param_4 + 0x50),0);
          if ((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
            uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetSafeItem_2303cf0
                              (uVar6,param_2,param_3,(float)uVar7 * fVar5 + 0.0,
                               (float)((ulong)uVar7 >> 0x20) * fVar5 + 0.0,fVar5 * fVar8 + 0.0,
                               *(long *)(param_4 + 0x28),
                               *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),auVar9._0_8_,
                               auVar9._8_8_,lVar2,lVar3,*(undefined4 *)(param_6 + 0x10),param_5,0);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddOutItem_24995a4
                      (lVar2,uVar6,0);
            Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8
                      (param_4,uVar6);
            if (0 < *(int *)(lVar3 + 0x18)) {
              iVar4 = 0;
              do {
                lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (lVar3,iVar4,*(undefined8 *)puVar1);
                if (lVar2 == 0) goto LAB_0306866c;
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                          (lVar2,uVar6,0);
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(int *)(lVar3 + 0x18));
            }
            return;
          }
        }
      }
    }
  }
LAB_0306866c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

