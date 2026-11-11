/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopUp$$ShowAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__ShowAsync (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopUp$$ShowAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__ShowAsync
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__ShowAsync_3faa298
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000005c39008 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b3270);
    FUN_012d0dc8(PTR_DAT_057c2a10);
    FUN_012d0dc8(PTR_DAT_058003d8);
    FUN_012d0dc8(PTR_DAT_057f41b8);
    bRam0000000005c39008 = 1;
  }
  puVar1 = PTR_DAT_057f41b8;
  plVar3 = (long *)(param_1 + 0x60);
  if (*plVar3 != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool___SetResult_1db4e50
              (*plVar3,0,*(undefined8 *)PTR_DAT_057b3270);
  }
  Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__Show_3fa9d18(param_1,param_2);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool____ctor_1db4b60
              (lVar2,*(undefined8 *)PTR_DAT_057c2a10);
    *plVar3 = lVar2;
    FUN_012d0d74(plVar3,lVar2);
    if (*plVar3 != 0) {
      return *(undefined8 *)(*plVar3 + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

