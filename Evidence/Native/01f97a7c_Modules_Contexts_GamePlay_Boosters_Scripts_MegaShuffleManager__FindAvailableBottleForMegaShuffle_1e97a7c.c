/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$FindAvailableBottleForMegaShuffle
System_Collections_Generic_List_BottleItem__o* Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__FindAvailableBottleForMegaShuffle (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$FindAvailableBottleForMegaShuffle
   System_Collections_Generic_List_BottleItem__o*
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__FindAvailableBottleForMegaShuffle
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__FindAvailableBottleForMegaShuffle_1e97a7c
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  
  puVar2 = PTR_DAT_057fd598;
  if ((bRam0000000005c2816b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e0d0);
    FUN_012d0dc8(PTR_DAT_05800018);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    FUN_012d0dc8(PTR_DAT_057fd598);
    bRam0000000005c2816b = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (((lVar6 != 0) &&
      (System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)PTR_DAT_05800018)
      , puVar4 = PTR_DAT_057b43e8, puVar3 = PTR_DAT_057b0e08, puVar2 = PTR_DAT_0577e0d0,
      param_2 != 0)) && (lVar7 = *(long *)(param_2 + 0x18), lVar7 != 0)) {
    iVar13 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar13) {
        return lVar6;
      }
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar13,*(undefined8 *)puVar3);
      if (lVar7 == 0) break;
      if (0 < *(int *)(lVar7 + 0x18)) {
        iVar14 = 0;
        do {
          lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar7,iVar14,*(undefined8 *)puVar4);
          if (lVar8 == 0) goto LAB_01f97c54;
          uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsSelectableAsOriginExceptAnimation_2497f84
                            (lVar8,0);
          if ((((uVar9 & 1) != 0) &&
              ((uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllWatersSameColor_2499a68
                                  (lVar8,0), (uVar9 & 1) == 0 ||
               (iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
                                  (lVar8,0), iVar5 == 3)))) &&
             (uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                                (lVar8,9,0), (uVar9 & 1) == 0)) {
            lVar11 = *(long *)(lVar6 + 0x10);
            lVar12 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_01f97c54;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar8;
              FUN_012d0d74(plVar10,lVar8);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar6,lVar8);
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(lVar7 + 0x18));
      }
      lVar7 = *(long *)(param_2 + 0x18);
      iVar13 = iVar13 + 1;
    } while (lVar7 != 0);
  }
LAB_01f97c54:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

