/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddFrogItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddFrogItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, System_Collections_Generic_List_BottleItem__o* bottles, int32_t frogType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddFrogItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddFrogItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   System_Collections_Generic_List_BottleItem__o* bottles, int32_t frogType, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddFrogItem_2f675e8
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               long param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000005c3090f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c3090f = 1;
  }
  puVar1 = PTR_DAT_057b43e8;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  if (param_5 != 0) {
    lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (param_5,0,*(undefined8 *)PTR_DAT_057b43e8);
    if (lVar4 != 0) {
      uVar8 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                        (lVar4,0);
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_5,0,*(undefined8 *)puVar1);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0xa0) != 0)) {
        fVar9 = *(float *)(*(long *)(lVar4 + 0xa0) + 0xcc);
        if (cRam0000000005c230ac == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230ac = '\x01';
        }
        if (*(long *)(param_4 + 0x50) != 0) {
          lVar7 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
          fVar10 = *(float *)(lVar7 + 0x18);
          fVar11 = *(float *)(lVar7 + 0x1c);
          fVar12 = *(float *)(lVar7 + 0x20);
          auVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                              (*(long *)(param_4 + 0x50),0);
          puVar3 = PTR_DAT_057d0ba8;
          puVar2 = PTR_DAT_057b41c8;
          puVar1 = PTR_DAT_05768d80;
          if ((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
            lVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetFrogItem_230380c
                              (uVar8,param_2,param_3,fVar9 * fVar10,fVar9 * fVar11,fVar9 * fVar12,
                               *(long *)(param_4 + 0x28),
                               *(undefined8 *)(*(long *)(param_4 + 0x10) + 0x18),auVar13._0_8_,
                               auVar13._8_8_,param_5,param_6,0);
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_98,param_5,*(undefined8 *)puVar1);
            while( true ) {
              uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_98,*(undefined8 *)puVar2);
              uVar8 = uStack_88;
              if ((uVar5 & 1) == 0) {
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_98,*(undefined8 *)puVar3);
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                          (lVar4,lVar7,0);
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddOutItem_24995a4
                          (lVar4,lVar7,0);
                Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddBlocker_2f694c8
                          (param_4,lVar7);
                return;
              }
              if (*(long *)(param_4 + 0x30) == 0) break;
              uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetFrogPathItem_23010d0
                                (*(long *)(param_4 + 0x30),param_6,0);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__AddFrogPathItemToBottle_2752350
                        (lVar7,uVar8,uVar6,0);
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

