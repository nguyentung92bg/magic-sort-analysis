/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottlePopUp$$ShowAsync
System_Threading_Tasks_Task_o* Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp__ShowAsync (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottlePopUp$$ShowAsync
   System_Threading_Tasks_Task_o*
   Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp__ShowAsync
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp__ShowAsync_37607e0
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_057f41b8;
  if ((bRam0000000005c33bc4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c2a10);
    FUN_012d0dc8(PTR_DAT_058003d8);
    FUN_012d0dc8(PTR_DAT_057f41b8);
    bRam0000000005c33bc4 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool____ctor_1db4b60
              (lVar2,*(undefined8 *)PTR_DAT_057c2a10);
    plVar3 = (long *)(param_1 + 0x20);
    *plVar3 = lVar2;
    FUN_012d0d74(plVar3,lVar2);
    Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottlePopUp__Show_3760914(param_1,param_2);
    if (*plVar3 != 0) {
      return *(undefined8 *)(*plVar3 + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

