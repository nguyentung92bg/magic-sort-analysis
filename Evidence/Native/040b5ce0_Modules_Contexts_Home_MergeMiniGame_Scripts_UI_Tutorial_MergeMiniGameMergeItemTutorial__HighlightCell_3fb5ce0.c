/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$HighlightCell
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__HighlightCell (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$HighlightCell
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__HighlightCell
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o*
   __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cell, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__HighlightCell_3fb5ce0
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c39085 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f7f10);
    FUN_012d0dc8(PTR_DAT_0576d610);
    FUN_012d0dc8(PTR_DAT_05772e50);
    FUN_012d0dc8(PTR_DAT_05818d08);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c39085 = 1;
  }
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (param_2 != 0) {
    lVar4 = UnityEngine_Component__get_transform_408b444(param_2,0);
    uVar5 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar4 != 0) {
      UnityEngine_Transform__SetParent_409352c(lVar4,uVar5,0);
      puVar2 = PTR_DAT_057f7f10;
      puVar1 = PTR_DAT_0576d610;
      if (*(long *)(param_2 + 0xa0) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_68,*(long *)(param_2 + 0xa0),*(undefined8 *)PTR_DAT_05818d08);
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        lStack_40 = lStack_58;
        while( true ) {
          uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_50,*(undefined8 *)puVar1);
          lVar4 = lStack_40;
          if ((uVar3 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_50,*(undefined8 *)puVar2);
            return;
          }
          if (lStack_40 == 0) break;
          lVar6 = UnityEngine_Component__get_transform_408b444(lStack_40,0);
          uVar5 = UnityEngine_Component__get_transform_408b444(param_1,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(uVar5,uVar5);
          }
          UnityEngine_Transform__SetParent_409352c(lVar6,uVar5,0);
          Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetRaycastOrder_410baa4
                    (lVar4,*(undefined4 *)(param_1 + 0x48),0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

