/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$Initialize
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__Initialize (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this, Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData_o* levelData, int32_t currentStage, UnityEngine_Vector3_o slotScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$Initialize
   void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__Initialize
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this,
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameLevelData_o* levelData, int32_t
   currentStage, UnityEngine_Vector3_o slotScale, const MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__Initialize_218ae14
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               undefined4 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  if ((bRam0000000005c29d5b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057832b8);
    FUN_012d0dc8(PTR_DAT_05808000);
    FUN_012d0dc8(PTR_DAT_0579a920);
    FUN_012d0dc8(PTR_DAT_057e4160);
    FUN_012d0dc8(PTR_DAT_0578b160);
    FUN_012d0dc8(PTR_DAT_057d5ef8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c29d5b = 1;
  }
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__ClearCurrentSlots_218b120
            (param_4);
  puVar6 = PTR_DAT_05808000;
  puVar5 = PTR_DAT_057e4160;
  puVar4 = PTR_DAT_057d5ef8;
  puVar3 = PTR_DAT_057832b8;
  puVar2 = PTR_DAT_0576c200;
  if ((param_5 == 0) || (*(long *)(param_5 + 0x18) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_b8,*(long *)(param_5 + 0x18),*(undefined8 *)PTR_DAT_0578b160);
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  lStack_90 = lStack_a8;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_a0,*(undefined8 *)puVar6);
    lVar10 = lStack_90;
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_a0,*(undefined8 *)puVar3);
      Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__ActivateStageObjects_218b43c
                (param_4,param_6);
      return;
    }
    if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(param_4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar8 = Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemDataConfig__GetItemData_218b2d8
                      (*(long *)(param_4 + 0x18),*(undefined4 *)(lStack_90 + 0x10));
    if (lVar8 == 0) break;
    uVar13 = *(undefined8 *)(lVar8 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = UnityEngine_Object__op_Inequality_408e110(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      uVar13 = *(undefined8 *)(lVar8 + 0x38);
      uVar14 = *(undefined8 *)(param_4 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar9 = UnityEngine_Object__Instantiate_object__2aac8f8(uVar13,uVar14,*(undefined8 *)puVar4);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlot__Initialize_218ad54
                (*(undefined4 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x1c),
                 *(undefined4 *)(lVar10 + 0x20),param_1,param_2,param_3,lVar9,lVar8);
      lVar10 = *(long *)(param_4 + 0x40);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar8 = *(long *)(lVar10 + 0x10);
      lVar12 = *(long *)puVar5;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        plVar11 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar11 = lVar9;
        FUN_012d0d74(plVar11,lVar9);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar10,lVar9);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

