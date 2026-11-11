/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$BuildVirtualBoardFromColorBlocks
void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__BuildVirtualBoardFromColorBlocks (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBoard_o* board, System_Collections_Generic_List_MegaShuffleManager_ColorBlock__o* colorBlocks, System_Collections_Generic_List_ValueTuple_int__bool___o* bottleSizes, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$BuildVirtualBoardFromColorBlocks
   void 
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__BuildVirtualBoardFromColorBlocks
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBoard_o* board,
   System_Collections_Generic_List_MegaShuffleManager_ColorBlock__o* colorBlocks,
   System_Collections_Generic_List_ValueTuple_int__bool___o* bottleSizes, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__BuildVirtualBoardFromColorBlocks_1e989d8
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c28171 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2fe8);
    FUN_012d0dc8(PTR_DAT_05784c88);
    FUN_012d0dc8(PTR_DAT_05808310);
    FUN_012d0dc8(PTR_DAT_0577d5e8);
    FUN_012d0dc8(PTR_DAT_05759dc8);
    FUN_012d0dc8(PTR_DAT_057f55a8);
    FUN_012d0dc8(PTR_DAT_0575aab8);
    FUN_012d0dc8(PTR_DAT_0577b108);
    bRam0000000005c28171 = 1;
  }
  puVar4 = PTR_DAT_057d2fe8;
  puVar3 = PTR_DAT_05784c88;
  puVar2 = PTR_DAT_0577b108;
  puVar1 = PTR_DAT_0575aab8;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar9 = *(long *)(param_2 + 0x10);
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_88,param_3,*(undefined8 *)PTR_DAT_0577d5e8);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  do {
    do {
      uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_70,*(undefined8 *)puVar3);
      lVar5 = lStack_60;
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar4);
        return;
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    } while (*(int *)(lVar9 + 0x18) < 1);
    iVar10 = 0;
    do {
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar6 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                        (param_4,iVar10,*(undefined8 *)puVar2);
      lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar9,iVar10,*(undefined8 *)puVar1);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(int *)(lVar5 + 0x14) <= iVar6 - *(int *)(*(long *)(lVar8 + 0x10) + 0x18)) {
        lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar9,iVar10,*(undefined8 *)puVar1);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle__AddColorBlock_1e9a908
                  (lVar8,lVar5);
        break;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar9 + 0x18));
  } while( true );
}

