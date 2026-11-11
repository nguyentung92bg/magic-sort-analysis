/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$GetInitialColorBlocks
System_ValueTuple_MegaShuffleManager_MegaShuffleBoard__List_BottleItem___o Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetInitialColorBlocks (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$GetInitialColorBlocks
   System_ValueTuple_MegaShuffleManager_MegaShuffleBoard__List_BottleItem___o
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetInitialColorBlocks
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetInitialColorBlocks_1e957f0
          (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = param_1;
  if ((bRam0000000005c28165 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5360);
    FUN_012d0dc8(PTR_DAT_05766c78);
    FUN_012d0dc8(PTR_DAT_0577cde8);
    FUN_012d0dc8(PTR_DAT_05782fc0);
    uVar5 = FUN_012d0dc8(PTR_DAT_05815bf0);
    bRam0000000005c28165 = 1;
  }
  puVar3 = PTR_DAT_05766c78;
  if (param_2 != 0) {
    uVar5 = Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__FindAvailableBottleForMegaShuffle_1e97a7c
                      (uVar5,*(undefined8 *)(param_2 + 0x10));
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_057d5360;
    if (lVar6 != 0) {
      uVar7 = System_Collections_Generic_HashSet_Int32Enum____ctor_33b35d4
                        (lVar6,*(undefined8 *)PTR_DAT_057d5360);
      lVar6 = Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetBottleSizes_1e97c74
                        (uVar7,uVar5,lVar6);
      if (lVar6 != 0) {
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05782fc0);
        if (lVar8 != 0) {
          Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBoard___ctor_1e9835c
                    (lVar8,uVar1);
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
          if (lVar9 != 0) {
            System_Collections_Generic_HashSet_Int32Enum____ctor_33b35d4
                      (lVar9,*(undefined8 *)puVar4);
            uVar7 = Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetColorBlocks_1e984b4
                              (param_1,uVar5,lVar9);
            Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__BuildVirtualBoardFromColorBlocks_1e989d8
                      (uVar7,lVar8,uVar7,lVar6);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            puVar3 = PTR_DAT_05815bf0;
            if (lVar6 != 0) {
              uVar7 = System_Collections_Generic_HashSet_Int32Enum____ctor_33b35d4
                                (lVar6,*(undefined8 *)puVar4);
              Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__AddExcludedColors_1e98c44
                        (uVar7,lVar8,uVar5,lVar6);
              uStack_50 = 0;
              uStack_48 = 0;
              System_ValueTuple_object__object____ctor_2b92f7c
                        (&uStack_50,lVar8,uVar5,*(undefined8 *)puVar3);
              auVar2._8_8_ = uStack_48;
              auVar2._0_8_ = uStack_50;
              return auVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

