/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPPriceView$$FetchAndSetIAPModel
void Modules_Contexts_Application_IAP_Scripts_IAPPriceView__FetchAndSetIAPModel (Modules_Contexts_Application_IAP_Scripts_IAPPriceView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPPriceView$$FetchAndSetIAPModel
   void Modules_Contexts_Application_IAP_Scripts_IAPPriceView__FetchAndSetIAPModel
   (Modules_Contexts_Application_IAP_Scripts_IAPPriceView_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPPriceView__FetchAndSetIAPModel_138ac00
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000005c2307f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0575bcf8);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_057d1bd0);
    bRam0000000005c2307f = 1;
  }
  puVar1 = PTR_DAT_057c9ca0;
  puVar2 = PTR_DAT_0576c200;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 == (long *)0x0) goto LAB_0148ae88;
    (**(code **)(*plVar7 + 0x558))
              (plVar7,**(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8),
               *(undefined8 *)(*plVar7 + 0x560));
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      plVar7 = *(long **)(param_1 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_0148ae88;
      (**(code **)(*plVar7 + 0x558))
                (plVar7,**(undefined8 **)(*(long *)puVar1 + 0xb8),*(undefined8 *)(*plVar7 + 0x560));
    }
  }
  else {
    uVar5 = Modules_Contexts_Application_IAP_Scripts_IAPPriceView__TryFetchPrice_138aeb0
                      (param_1,&uStack_38);
    uVar6 = uStack_38;
    puVar4 = PTR_DAT_057d1bd0;
    puVar3 = PTR_DAT_057ce7d0;
    puVar1 = PTR_DAT_0575bcf8;
    plVar7 = *(long **)(param_1 + 0x18);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0148ae88;
      uStack_3c = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x1c);
      uVar6 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057ce7d0,&uStack_3c);
      uVar6 = System_String__Format_1ec10a8(*(undefined8 *)puVar4,uVar6,0);
      if (plVar7 == (long *)0x0) goto LAB_0148ae88;
      (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0148ae88;
      uStack_3c = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x1c);
      plVar7 = *(long **)(param_1 + 0x20);
      uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_3c);
      uVar6 = System_String__Format_1ec10a8(*(undefined8 *)puVar4,uVar6,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0575bcf8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = Modules_Infrastructure_Utils_PriceFormatter__ConvertToTurkishLira_3de4ac4(uVar6,0);
      if (plVar7 == (long *)0x0) goto LAB_0148ae88;
      (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
      uVar6 = uStack_38;
      if ((uVar5 & 1) == 0) {
        return;
      }
      plVar7 = *(long **)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar6 = Modules_Infrastructure_Utils_PriceFormatter__ConvertToTurkishLira_3de4ac4(uVar6,0);
    }
    if (plVar7 == (long *)0x0) {
LAB_0148ae88:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
  }
  return;
}

