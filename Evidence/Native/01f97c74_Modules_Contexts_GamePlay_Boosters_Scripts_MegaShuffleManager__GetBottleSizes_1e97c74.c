/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$GetBottleSizes
System_Collections_Generic_List_ValueTuple_int__bool___o* Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetBottleSizes (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, System_Collections_Generic_List_BottleItem__o* availableBottles, System_Collections_Generic_HashSet_ColorId__o* movableColors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01f97ec8) */
/* WARNING: Removing unreachable block (ram,0x01f9824c) */
/* WARNING: Removing unreachable block (ram,0x01f97ff0) */
/* WARNING: Removing unreachable block (ram,0x01f97ff4) */
/* WARNING: Removing unreachable block (ram,0x01f98260) */
/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$GetBottleSizes
   System_Collections_Generic_List_ValueTuple_int__bool___o*
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetBottleSizes
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   System_Collections_Generic_List_BottleItem__o* availableBottles,
   System_Collections_Generic_HashSet_ColorId__o* movableColors, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetBottleSizes_1e97c74
               (undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  puVar3 = PTR_DAT_0577cff8;
  if ((bRam0000000005c28167 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_05796248);
    FUN_012d0dc8(PTR_DAT_05780688);
    FUN_012d0dc8(PTR_DAT_057822a8);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b7918);
    FUN_012d0dc8(PTR_DAT_0576a6a8);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_0577cff8);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_05767220);
    FUN_012d0dc8(PTR_DAT_057f4c60);
    bRam0000000005c28167 = 1;
  }
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_c0 = 0;
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar10 == 0) ||
     (System_Collections_Generic_List_ValueTuple_int__bool_____ctor_28a00d4
                (lVar10,*(undefined8 *)PTR_DAT_0576a6a8), puVar5 = PTR_DAT_057e1088,
     puVar4 = PTR_DAT_057a7f80, puVar3 = PTR_DAT_05767220, param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_d8,param_2,*(undefined8 *)PTR_DAT_05768d80);
  lStack_e0 = 0;
  uStack_78 = uStack_d0;
  uStack_80 = uStack_d8;
  plStack_70 = plStack_c8;
  do {
    uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                       (&uStack_80,*(undefined8 *)PTR_DAT_057b41c8);
    plVar7 = plStack_70;
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)PTR_DAT_057d0ba8);
      return lVar10;
    }
    if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar16 = plStack_70[0x10];
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_d8,lVar16,*(undefined8 *)PTR_DAT_057822a8);
    iVar15 = 0;
    uStack_98 = uStack_d0;
    uStack_a0 = uStack_d8;
    plStack_90 = plStack_c8;
    while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_a0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
      if (plStack_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (plStack_90[4] != 0) {
        iVar15 = iVar15 + 1;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_a0,*(undefined8 *)PTR_DAT_05795370);
    if (plVar7[0x11] == 0) {
      uVar13 = 0;
    }
    else {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_d8,plVar7[0x11],*(undefined8 *)PTR_DAT_057b7918);
      uVar13 = 0;
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      plStack_b0 = plStack_c8;
      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_c0,*(undefined8 *)puVar4), plVar6 = plStack_b0,
            (uVar11 & 1) != 0) {
        if (plStack_b0 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar3 + 300);
          if ((bVar1 <= *(byte *)(*plStack_b0 + 300)) &&
             (*(long *)(*(long *)(*plStack_b0 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
            lVar12 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar16,0,*(undefined8 *)PTR_DAT_057f2468);
            if (lVar12 != 0) {
              lStack_e0 = lVar12;
            }
            uVar13 = 1;
            if (lVar12 != 0) {
              if (lStack_e0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              uVar13 = 1;
              if (*(long *)(lStack_e0 + 0x20) != 0) {
                lVar14 = *(long *)(*(long *)(lStack_e0 + 0x20) + 0x58);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                uVar13 = 1;
                if ((int)plVar6[0xb] == *(int *)(lVar14 + 0x70)) {
                  iVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottomSameColorHeight_249591c
                                    (plVar7,0);
                  iVar15 = iVar15 - iVar8;
                  uVar13 = 1;
                  lStack_e0 = lVar12;
                }
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_c0,*(undefined8 *)PTR_DAT_057605b8);
    }
    lVar16 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                       (plVar7,0);
    if (lVar16 != 0) {
      lVar12 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater_24956b8
                         (plVar7,0);
      if (*(long *)(lVar16 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar11 = System_Collections_Generic_HashSet_Int32Enum___Contains_33b3c3c
                         (param_3,*(undefined4 *)(*(long *)(lVar16 + 0x58) + 0x70),
                          *(undefined8 *)PTR_DAT_05796248);
      if ((uVar11 & 1) != 0) {
        iVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                          (plVar7,0);
        iVar15 = iVar15 - iVar8;
        if (lVar12 != 0) {
          if (*(long *)(lVar12 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(long *)(lVar16 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(int *)(*(long *)(lVar12 + 0x58) + 0x70) == *(int *)(*(long *)(lVar16 + 0x58) + 0x70)
             ) {
            lVar16 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater_24956b8
                               (plVar7,0);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            iVar15 = iVar15 - *(int *)(lVar16 + 0x40);
          }
        }
      }
    }
    if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar9 = System_Math__Max_26cd24c(0,iVar15,0);
    uStack_d8 = 0;
    System_ValueTuple_int__bool____ctor_2b8af00
              (&uStack_d8,uVar9,uVar13,*(undefined8 *)PTR_DAT_057f4c60);
    lVar16 = *(long *)(lVar10 + 0x10);
    lVar12 = *(long *)PTR_DAT_05780688;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar2 = *(uint *)(lVar10 + 0x18);
    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uStack_d8;
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))(lVar10);
    }
  } while( true );
}

