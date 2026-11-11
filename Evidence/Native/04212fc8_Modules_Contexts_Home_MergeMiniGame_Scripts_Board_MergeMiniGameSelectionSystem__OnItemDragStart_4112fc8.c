/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemDragStart
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragStart (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, UnityEngine_Vector2_o worldPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeMiniGameSelectionSystem$$OnItemDragStart
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragStart
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem_o* __this,
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, UnityEngine_Vector2_o
   worldPos, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameSelectionSystem__OnItemDragStart_4112fc8
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c3ac28 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7f10);
    FUN_012d0dc8(PTR_DAT_0576d610);
    FUN_012d0dc8(PTR_DAT_05772e50);
    FUN_012d0dc8(PTR_DAT_05818d08);
    FUN_012d0dc8(PTR_DAT_057dca50);
    bRam0000000005c3ac28 = 1;
  }
  puVar2 = PTR_DAT_057dca50;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x30) = **(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    System_Object___ctor_23dfe5c(lVar4,0);
    *(undefined8 *)(lVar4 + 0x20) = uVar7;
    FUN_012d0d74((undefined8 *)(lVar4 + 0x20),uVar7);
    plVar8 = (long *)(param_1 + 0x20);
    *plVar8 = lVar4;
    FUN_012d0d74(plVar8,lVar4);
    if (*plVar8 != 0) {
      uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeDragSelection__CanSelectAsOrigin_4110d6c
                        (*plVar8,param_2);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*plVar8 != 0) {
        plVar6 = (long *)(*plVar8 + 0x10);
        *plVar6 = param_2;
        FUN_012d0d74(plVar6,param_2);
        puVar3 = PTR_DAT_057f7f10;
        puVar2 = PTR_DAT_0576d610;
        if (((*plVar8 != 0) && (lVar4 = *(long *)(*plVar8 + 0x10), lVar4 != 0)) &&
           (lVar4 = *(long *)(lVar4 + 0xa0), lVar4 != 0)) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_48,lVar4,*(undefined8 *)PTR_DAT_05818d08);
          while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&uStack_48,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
            if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__OnDragStart_410a8e0();
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_48,*(undefined8 *)puVar3);
          if ((param_2 != 0) &&
             (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__HideCursor_4109a88
                        (param_2), *(long *)(param_1 + 0x10) != 0)) {
            Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeMiniGameController__SuspendHint_411788c
                      ();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

