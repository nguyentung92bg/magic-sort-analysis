/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$OnMergeItemSpawned
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__OnMergeItemSpawned (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o* __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cellItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$OnMergeItemSpawned
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__OnMergeItemSpawned
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o*
   __this, Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell_o* cellItem, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__OnMergeItemSpawned_3fb65d4
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c39084 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c39084 = 1;
  }
  plVar6 = (long *)(param_1 + 0x70);
  lVar7 = *plVar6;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Equality_407f288(lVar7,0,0);
  if ((uVar5 & 1) == 0) {
    plVar6 = (long *)(param_1 + 0x78);
    lVar7 = *plVar6;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = UnityEngine_Object__op_Equality_407f288(lVar7,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  *plVar6 = param_2;
  FUN_012d0d74(plVar6,param_2);
  puVar1 = PTR_DAT_0576c200;
  lVar7 = *plVar6;
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
  uVar5 = UnityEngine_Object__op_Equality_407f288(lVar7,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (lVar7 != 0) {
    lVar3 = UnityEngine_Component__get_transform_408b444(lVar7,0);
    uVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar3 != 0) {
      UnityEngine_Transform__SetParent_409352c(lVar3,uVar4,0);
      puVar2 = PTR_DAT_057f7f10;
      puVar1 = PTR_DAT_0576d610;
      if (*(long *)(lVar7 + 0xa0) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_68,*(long *)(lVar7 + 0xa0),*(undefined8 *)PTR_DAT_05818d08);
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        lStack_40 = lStack_58;
        while( true ) {
          uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_50,*(undefined8 *)puVar1);
          lVar7 = lStack_40;
          if ((uVar5 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_50,*(undefined8 *)puVar2);
            return;
          }
          if (lStack_40 == 0) break;
          lVar3 = UnityEngine_Component__get_transform_408b444(lStack_40,0);
          uVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0(uVar4,uVar4);
          }
          UnityEngine_Transform__SetParent_409352c(lVar3,uVar4,0);
          Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItem__SetRaycastOrder_410baa4
                    (lVar7,*(undefined4 *)(param_1 + 0x48),0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

