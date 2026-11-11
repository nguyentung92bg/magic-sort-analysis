/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.TryShowWebShopPromptCommand$$.ctor
void Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand___ctor (Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand_o* __this, System_String_o* productId, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.TryShowWebShopPromptCommand$$.ctor
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand___ctor
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand_o* __this,
   System_String_o* productId, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o*
   iapConfigModel, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand___ctor_3160eac
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c3150e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057acad0);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c3150e = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x18),param_3);
  lVar6 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    uVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_057f83f8);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    FUN_012d0d74();
    lVar6 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
      uVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_057acad0);
      puVar7 = (undefined8 *)(param_1 + 0x28);
      *puVar7 = uVar5;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

