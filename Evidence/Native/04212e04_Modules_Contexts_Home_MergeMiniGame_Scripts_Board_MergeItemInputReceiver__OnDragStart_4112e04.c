/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnDragStart
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnDragStart (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnDragStart
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnDragStart
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this,
   UnityEngine_Vector2_o position, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnDragStart_4112e04
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((bRam0000000005c3ac05 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7f10);
    FUN_012d0dc8(PTR_DAT_0576d610);
    FUN_012d0dc8(PTR_DAT_05772e50);
    FUN_012d0dc8(PTR_DAT_05818d08);
    bRam0000000005c3ac05 = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  if (((*(long *)(param_1 + 0x40) != 0) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x88), lVar4 != 0)) &&
     (*(long *)(lVar4 + 0x60) != 0)) {
    uVar3 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                      (*(long *)(lVar4 + 0x60),0);
    puVar2 = PTR_DAT_057f7f10;
    puVar1 = PTR_DAT_0576d610;
    if ((uVar3 & 1) == 0) {
      if (*(long *)(lVar4 + 0xa0) == 0) goto LAB_04212f48;
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_48,*(long *)(lVar4 + 0xa0),*(undefined8 *)PTR_DAT_05818d08);
      do {
        uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_48,*(undefined8 *)puVar1);
        if ((uVar3 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_48,*(undefined8 *)puVar2);
          if (*(long *)(param_1 + 0x20) != 0) {
            UnityEngine_BoxCollider2D__set_size_2e26350
                      (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                       *(long *)(param_1 + 0x20),0);
            *(undefined1 *)(param_1 + 0x48) = 1;
            if (*(long *)(param_1 + 0x38) != 0) {
              Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragStart_4112fc8
                        (*(long *)(param_1 + 0x38),lVar4);
              return;
            }
          }
          goto LAB_04212f48;
        }
        if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar3 = (**(code **)(*plStack_38 + 0x1c8))(plStack_38,*(undefined8 *)(*plStack_38 + 0x1d0));
      } while ((uVar3 & 1) != 0);
      *(undefined1 *)(param_1 + 0x48) = 0;
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_48,*(undefined8 *)puVar2);
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 0;
    }
    return;
  }
LAB_04212f48:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

