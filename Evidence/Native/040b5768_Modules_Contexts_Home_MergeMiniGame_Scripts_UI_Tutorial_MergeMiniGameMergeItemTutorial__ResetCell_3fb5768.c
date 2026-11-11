/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$ResetCell
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__ResetCell (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$ResetCell
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__ResetCell
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o*
   __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__ResetCell_3fb5768
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c39086 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7f10);
    FUN_012d0dc8(PTR_DAT_0576d610);
    FUN_012d0dc8(PTR_DAT_05772e50);
    FUN_012d0dc8(PTR_DAT_05818d08);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c39086 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if ((param_2 != 0) &&
     (lVar4 = UnityEngine_Component__get_transform_408b444(param_2,0), lVar4 != 0)) {
    UnityEngine_Transform__SetParent_409352c(lVar4,*(undefined8 *)(param_1 + 0x50),0);
    puVar2 = PTR_DAT_057f7f10;
    puVar1 = PTR_DAT_0576d610;
    if (*(long *)(param_2 + 0xa0) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_48,*(long *)(param_2 + 0xa0),*(undefined8 *)PTR_DAT_05818d08);
      while( true ) {
        uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_48,*(undefined8 *)puVar1);
        lVar4 = lStack_38;
        if ((uVar3 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_48,*(undefined8 *)puVar2);
          return;
        }
        if (lStack_38 == 0) break;
        lVar5 = UnityEngine_Component__get_transform_408b444(lStack_38,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        UnityEngine_Transform__SetParent_409352c(lVar5,*(undefined8 *)(param_1 + 0x58),0);
        Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetRaycastOrder_410baa4
                  (lVar4,*(undefined4 *)(param_1 + 0x60),0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

