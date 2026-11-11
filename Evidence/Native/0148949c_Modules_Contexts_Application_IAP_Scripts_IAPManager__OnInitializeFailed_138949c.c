/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$OnInitializeFailed
void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnInitializeFailed (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, int32_t error, System_String_o* text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$OnInitializeFailed
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnInitializeFailed
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, int32_t error, System_String_o*
   text, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__OnInitializeFailed_138949c
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar2 = PTR_DAT_0580d670;
  puVar1 = PTR_DAT_05809978;
  if ((bRam0000000005c23072 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05809978);
    FUN_012d0dc8(PTR_DAT_0580d670);
    bRam0000000005c23072 = 1;
  }
  uStack_48 = *(undefined8 *)puVar1;
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = param_2;
  uVar3 = System_Enum__ToString_23a4eac(&uStack_48,0);
  System_String__Concat_1ec3580(*(undefined8 *)puVar2,uVar3,0);
  return;
}

