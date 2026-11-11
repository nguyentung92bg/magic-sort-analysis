/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$IsInitialized
bool Modules_Contexts_Application_IAP_Scripts_IAPManager__IsInitialized (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$IsInitialized
   bool Modules_Contexts_Application_IAP_Scripts_IAPManager__IsInitialized
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, const MethodInfo* method); */

bool Modules_Contexts_Application_IAP_Scripts_IAPManager__IsInitialized_1387f48(void)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = PTR_DAT_057d7c80;
  if ((bRam0000000005c2306d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d7c80);
    bRam0000000005c2306d = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(long **)(*(long *)puVar1 + 0xb8))[1] != 0;
  }
  return bVar2;
}

