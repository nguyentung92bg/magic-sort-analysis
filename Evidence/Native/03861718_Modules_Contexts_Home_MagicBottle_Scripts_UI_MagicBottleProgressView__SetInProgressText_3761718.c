/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$SetInProgressText
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetInProgressText (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleProgressView$$SetInProgressText
   void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetInProgressText
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleProgressView__SetInProgressText_3761718
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33bd0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fe590);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05805ed8);
    bRam0000000005c33bd0 = 1;
  }
  if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) &&
      (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar4,*(undefined8 *)PTR_DAT_057fe590), lVar4 != 0)) &&
     (lVar4 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                        (), puVar3 = PTR_DAT_05805ed8, puVar2 = PTR_DAT_057db748, lVar4 != 0)) {
    uVar1 = *(undefined4 *)(lVar4 + 0x18);
    plVar7 = *(long **)(param_1 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)PTR_DAT_057bc5e8);
    }
    uVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar3,0);
    uStack_24 = uVar1;
    uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_24);
    uVar5 = System_String__Format_1ec10a8(uVar5,uVar6,0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

