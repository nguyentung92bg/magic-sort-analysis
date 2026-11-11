/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddMosaicItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddMosaicItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t mosaicType, Modules_Contexts_GamePlay_Board_Common_Scripts_MosaicPair_o* mosaicPair, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddMosaicItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddMosaicItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t mosaicType,
   Modules_Contexts_GamePlay_Board_Common_Scripts_MosaicPair_o* mosaicPair, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddMosaicItem_2f68670
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000005c30912 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    bRam0000000005c30912 = 1;
  }
  puVar1 = PTR_DAT_057b43e8;
  if ((param_6 != 0) && (lVar4 = *(long *)(param_6 + 0x18), lVar4 != 0)) {
    lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar4,0,*(undefined8 *)PTR_DAT_057b43e8);
    if (lVar2 != 0) {
      uVar8 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                        (lVar2,0);
      if (*(long *)(lVar2 + 0xa0) != 0) {
        fVar7 = *(float *)(*(long *)(lVar2 + 0xa0) + 0xd8);
        if (cRam0000000005c230ac == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230ac = '\x01';
        }
        if (*(long *)(param_4 + 0x50) != 0) {
          uVar9 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x18);
          fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x20);
          auVar11 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                              (*(long *)(param_4 + 0x50),0);
          lVar6 = *(long *)(param_6 + 0x10);
          if (lVar6 == 0) {
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
            if (lVar6 == 0) goto LAB_03068898;
            System_Collections_Generic_List_Int32Enum____ctor_20512f0
                      (lVar6,*(undefined8 *)PTR_DAT_057b99d0);
          }
          uVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__ConvertColorIds_2f6346c
                            (param_4,lVar6);
          if ((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
            uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetMosaicItem_2303f60
                              (uVar8,param_2,param_3,(float)uVar9 * fVar7 + 0.0,
                               (float)((ulong)uVar9 >> 0x20) * fVar7 + 0.0,fVar7 * fVar10 + 0.0,
                               *(long *)(param_4 + 0x28),
                               *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),auVar11._0_8_,
                               auVar11._8_8_,lVar2,lVar4,uVar3,0);
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddOutItem_24995a4
                      (lVar2,uVar8,0);
            Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8
                      (param_4,uVar8);
            if (0 < *(int *)(lVar4 + 0x18)) {
              iVar5 = 0;
              do {
                lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (lVar4,iVar5,*(undefined8 *)puVar1);
                if (lVar2 == 0) goto LAB_03068898;
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                          (lVar2,uVar8,0);
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)(lVar4 + 0x18));
            }
            return;
          }
        }
      }
    }
  }
LAB_03068898:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

