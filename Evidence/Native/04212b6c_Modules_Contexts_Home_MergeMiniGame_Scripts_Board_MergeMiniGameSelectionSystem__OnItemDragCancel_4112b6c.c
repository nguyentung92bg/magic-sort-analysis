/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemDragCancel
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragCancel (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemDragCancel
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragCancel
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragCancel_4112b6c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000005c3ac2b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7f10);
    FUN_012d0dc8(PTR_DAT_0576d610);
    FUN_012d0dc8(PTR_DAT_05772e50);
    FUN_012d0dc8(PTR_DAT_05818d08);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3ac2b = 1;
  }
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__ReturnToInitialPosition_411409c
              ();
    puVar4 = PTR_DAT_05818d08;
    puVar3 = PTR_DAT_057f7f10;
    puVar2 = PTR_DAT_0576d610;
    puVar1 = PTR_DAT_0576c200;
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar6 != 0)) &&
       (lVar6 = *(long *)(lVar6 + 0xa0), lVar6 != 0)) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,lVar6,*(undefined8 *)PTR_DAT_05818d08);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_60,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
        if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder_41095c4();
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_60,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(*(long *)(param_1 + 0x20) + 0x18) != 0))
        {
          Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__StopMergeableHoverAnim_410ea44
                    ();
          if ((*(long *)(param_1 + 0x20) != 0) &&
             ((lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar6 != 0 &&
              (lVar6 = *(long *)(lVar6 + 0xa0), lVar6 != 0)))) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_78,lVar6,*(undefined8 *)puVar4);
            uStack_58 = uStack_70;
            uStack_60 = uStack_78;
            lStack_50 = lStack_68;
            while( true ) {
              uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_60,*(undefined8 *)puVar2);
              if ((uVar5 & 1) == 0) {
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_60,*(undefined8 *)puVar3);
                return;
              }
              if (lStack_50 == 0) break;
              Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__ResetSortingOrder_41095c4
                        ();
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

