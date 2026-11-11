/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$ClearCurrentSlots
void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__ClearCurrentSlots (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardItemSlotsContainer$$ClearCurrentSlots
   void 
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__ClearCurrentSlots
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardItemSlotsContainer__ClearCurrentSlots_218b120
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c29d5c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581a338);
    FUN_012d0dc8(PTR_DAT_057e5810);
    FUN_012d0dc8(PTR_DAT_057727c8);
    FUN_012d0dc8(PTR_DAT_05805f88);
    FUN_012d0dc8(PTR_DAT_05819688);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c29d5c = 1;
  }
  puVar4 = PTR_DAT_0581a338;
  puVar3 = PTR_DAT_057e5810;
  puVar2 = PTR_DAT_0576c200;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_05819688);
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar6 = UnityEngine_Component__get_gameObject_408b480(lStack_38,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      UnityEngine_Object__Destroy_4091dc4(uVar6,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar4);
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

