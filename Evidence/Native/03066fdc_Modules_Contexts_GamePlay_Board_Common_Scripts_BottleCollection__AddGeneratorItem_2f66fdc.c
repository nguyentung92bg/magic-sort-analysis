/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddGeneratorItem
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddGeneratorItem (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItemModel_o* generatorItemModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddGeneratorItem
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddGeneratorItem
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItemModel_o* generatorItemModel,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddGeneratorItem_2f66fdc
               (long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if ((bRam0000000005c3090b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05762ee8);
    FUN_012d0dc8(PTR_DAT_05776a70);
    FUN_012d0dc8(PTR_DAT_057b2558);
    bRam0000000005c3090b = 1;
  }
  if (cRam0000000005c230ac == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230ac = '\x01';
  }
  puVar5 = PTR_DAT_05805c10;
  if (param_2 != 0) {
    uVar12 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x18);
    fVar14 = *(float *)(*(long *)(*(long *)PTR_DAT_05805c10 + 0xb8) + 0x20);
    uVar7 = (ulong)(uint)fVar14;
    uVar13 = CONCAT44((float)((ulong)uVar12 >> 0x20) * 0.56,(float)uVar12 * 0.56);
    fVar14 = fVar14 * _UNK_04397c90;
    *(undefined8 *)(param_2 + 0x34) = uVar13;
    *(float *)(param_2 + 0x3c) = fVar14;
    uVar12 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                       (param_2,0);
    if (*(long *)(param_2 + 0xa0) != 0) {
      fVar14 = *(float *)(*(long *)(param_2 + 0xa0) + 0xd4);
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230ac = '\x01';
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        lVar8 = *(long *)(*(long *)puVar5 + 0xb8);
        fVar15 = *(float *)(lVar8 + 0x18);
        fVar16 = *(float *)(lVar8 + 0x1c);
        fVar17 = *(float *)(lVar8 + 0x20);
        auVar18 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                            (*(long *)(param_1 + 0x50),0);
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (auVar19 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerBackSorting_4002a80
                                (*(long *)(param_1 + 0x50),0), puVar5 = PTR_DAT_057b2558,
           param_3 != 0)) {
          uVar6 = System_Linq_Enumerable__ToList_Int32Enum__242f788
                            (*(undefined8 *)(param_3 + 0x18),*(undefined8 *)PTR_DAT_05762ee8);
          uVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__ConvertColorIds_2f6346c
                            (param_1,uVar6);
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
          if (lVar8 != 0) {
            System_Collections_Generic_Stack_Int32Enum____ctor_312324c
                      (lVar8,uVar6,*(undefined8 *)PTR_DAT_05776a70);
            if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
              uVar12 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetGeneratorItem_2302b70
                                 (uVar12,uVar13,uVar7,fVar14 * fVar15,fVar14 * fVar16,
                                  fVar14 * fVar17,*(long *)(param_1 + 0x28),
                                  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),auVar18._0_8_,
                                  auVar18._8_8_,auVar19._0_8_,auVar19._8_8_,param_2,lVar8,0);
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddOutItem_24995a4
                        (param_2,uVar12,0);
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddBlocker_24996ac
                        (param_2,uVar12,0);
              if ((bRam0000000005c30919 & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_057c55f8);
                FUN_012d0dc8(PTR_DAT_057ef710);
                bRam0000000005c30919 = 1;
              }
              if (*(long *)(param_1 + 0x20) != 0) {
                uVar7 = System_Collections_Generic_List_object___Contains_21fce6c
                                  (*(long *)(param_1 + 0x20),uVar12,*(undefined8 *)PTR_DAT_057ef710)
                ;
                if ((uVar7 & 1) != 0) {
                  return;
                }
                lVar8 = *(long *)(param_1 + 0x20);
                if (lVar8 != 0) {
                  lVar9 = *(long *)(lVar8 + 0x10);
                  lVar11 = *(long *)PTR_DAT_057c55f8;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar9 != 0) {
                    uVar2 = *(uint *)(lVar8 + 0x18);
                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
                      puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                      *puVar10 = uVar12;
                      if (iRam0000000005c3d478 != 0) {
                        puVar1 = (ulong *)(((ulong)puVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                        do {
                          cVar3 = '\x01';
                          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar4) {
                            *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
                            cVar3 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar3 != '\0');
                      }
                      return;
                    }
                    /* WARNING: Could not recover jumptable at 0x030695a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar8,uVar12);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

